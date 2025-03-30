#include <stdio.h>

int main(){
    int size; 
    scanf("%d",&size);
    int arr[size];
    for(int i = 0 ; i < size; i++){
        scanf("%d",&arr[i]);
    }
    int flag = 1;
    for(int i = 0, j = size - 1 ; i < j ; i++, j--){
        if(arr[i] != arr[j]){
            flag = 0;
            printf("NO");
            break;
        }
    }
    if(flag) printf("YES");
    return 0;
}