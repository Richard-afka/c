#include<stdio.h>
#include<string.h>
char* destCity(char*** paths, int pathsSize /*int* pathsColSize*/) {
    for(int i=0;i<pathsSize;i++){
        int flag=1;
        char* candidate=paths[i][1];
        for(int j=0;j<pathsSize;j++){
            if(strcmp(paths[j][0],candidate)==0){
               // candidate=paths[j][1];
                flag=0;
                break;
            }  
        }
        if(flag){
                return candidate;
        }
    }
    return paths[0][1];
}
int main() {
    char* path1[] = {"London", "New York"};
    char* path2[] = {"New York", "Lima"}; 
    char* path3[] = {"Lima", "Sao Paulo"};
    char** paths[] = {path1, path2, path3};
    int pathsSize = 3;
    //int pathsColSize[] = {2, 2, 2};
    char* result = destCity(paths, pathsSize/*, pathsColSize*/);
    printf("最终目的地: %s\n", result); 
    return 0;
}