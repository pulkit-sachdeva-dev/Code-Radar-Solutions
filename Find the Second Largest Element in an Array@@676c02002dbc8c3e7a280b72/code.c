#include <stdio.h>
#include <limits.h>

int main(){
    int size, max1 = INT_MIN, max2 = INT_MIN;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
        if(arr[i] > max1) max2 = max1; max1 = arr[i];
        else if (arr[i] < max1 && arr[i] > max2) max2 = arr[i];
    }
    printf("%d",max2);

    return 0;
}