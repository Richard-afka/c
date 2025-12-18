#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
int compare(const void* a,const void* b){
    return *(int*)b - *(int*)a;
}
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL){
        printf("内存分配失败！\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
struct Node* insetAtHead(struct Node* head,int data){
    struct Node* newNode = createNode(data);
    if(newNode==NULL){
        return head;
    }
    newNode->next = head;
    head = newNode;
    return head;
}
struct Node* insetAtTail(struct Node* head, int data){
    struct Node* newNode = createNode(data);
    if (newNode == NULL) {
        return head;
    }
    if(head==NULL){
        head = newNode;
        return head;
    }
    struct Node* temp = head;
    while (temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}
void traverseList(struct Node* head){
    if(head==NULL){
        printf("链表为空\n");
        return;
    }
    struct Node* temp = head;
    while(temp!=NULL){
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
struct Node* delectNode(struct Node* head,int target){
   // struct Node* temp = head;
    if(head==NULL)
        return NULL;
    struct Node* temp = head;
    struct Node* prev = NULL;
    if (temp != NULL&&temp->data==target){
        head = temp->next;
        free(temp);
        return head;
    }
    while(temp!=NULL&&temp->data!=target){
        prev = temp;
        temp = temp->next;
    }
    if(temp==NULL){
        printf("没有找到目标值\n");
        return head;
    }
    prev->next = temp->next;
    free(temp);
    return head;
}
struct Node* sortList(struct Node* head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    int count = 0;
    struct Node* temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    int* arr = (int*)malloc(count * sizeof(int));
    temp = head;
    int i = 0;
    while(temp!=NULL){
        arr[i++] = temp->data;
        temp = temp->next;
    }
    qsort(arr, count, sizeof(int), compare);
    temp = head;
    i = 0;
    while (temp != NULL) {
        temp->data = arr[i++];
        temp = temp->next;
    }
    free(arr);
    return head;
}
int main(){
    struct Node* head = NULL;
    head = insetAtTail(head, 1);
    head = insetAtTail(head, 2);
    head = insetAtTail(head, 3);
    traverseList(head);
    head = insetAtHead(head, 0);
    traverseList(head);
    head = delectNode(head, 2);
    traverseList(head);
    head = delectNode(head, 5);
    head = sortList(head);
    traverseList(head);
    return 0;
}
