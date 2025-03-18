#include <stdio.h>

int main(){
    int size, evenCount = 0, oddCount = 0;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
        if(arr[i] & 1) oddCount++;
        else evenCount++;
    }
    printf("%d %d",evenCount,oddCount);

    return 0;
}