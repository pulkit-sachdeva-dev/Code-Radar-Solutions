#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0 ; i < size; i++){
        scanf("%d",&arr[i]);
    }
    int flag = 1;
    if(arr[1]>arr[0]){
        for(int i = 1 ; i < size; i++){
            if(arr[i+1] < arr[i]){
                printf("NO");
                flag = 0;
                break;
            }
        }
    }else if(arr[1]<arr[0]){
        for(int i = 1 ; i < size; i++){
            if(arr[i+1] > arr[i]){
                printf("NO");
                flag = 0;
                break;
            }
        }
        
    }
    if(flag) printf("YES");
    
    return 0;
}