#include <stdio.h>

void reverse(int arr[], int si , int ei ){
    for(int i = si , j = ei ; i <j ; i++,j-- ){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() {
    int size,k;
    int nums[size];
    for(int i =0 ; i < size; i++){
        scanf("%d",nums[i]);
    }
    scanf("%d",&k);
    if(k>size){
        k=k%size;
    }
    reverse(nums,0,size-1);
    reverse(nums,0,k-1);
    reverse(nums,k,size-1);

    for(int i = 0 ; i < size; i++){
        printf("%d\n",nums[i]);
    }

    return 0;
}