#include <stdio.h>

int palindrome(int n){
    char str[20];
    sprintf(str,"%d",n);
    int s = sizeof(str)/sizeof(0);
    for(int i = 0, j= s-1; i < j; i++,j--){
        if(str[i] != str[j]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    int count = 0;
    for(int i = 0; i< size; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < size; i++){
        if(palindrome(arr[i])) count++ ;
    }
    printf("%d",count);

    return 0;
}