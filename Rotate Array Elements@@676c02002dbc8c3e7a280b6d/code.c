#include <stdio.h>


int main() {
    int size, rotate;
    int arr[size];
    scanf("%d",&size);
    for(int i = 0; i<size;i++){
        scanf("%d",&size[i]);
    }
    scanf("%d",&rotate);
    for(int j = rotate; j>0;j--){
        for(int k = size; k >= (size-rotate); k--){
            arr[k] = arr[rotate];
        }
    }
    for(int l = 0; l<size;l++){
        printf("%d",arr[l])
    }
    return 0;
}