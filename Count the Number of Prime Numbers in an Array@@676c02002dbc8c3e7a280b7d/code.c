#include <stdio.h>
#include <math.h>


int main(){
    int size; 
    scanf("%d",&size);
    int arr[size];
    int prime = 0;
    for(int i = 0 ; i < size; i++){
        int flag = 1;
        scanf("%d",&arr[i]);
        if(arr[i] > 1){
            for(int j = 2; j < arr[i]; j++){
                if(arr[i]%j == 0){
                    flag = 0;
                    break;
                }
            }
            if(flag) prime++;
        }
    }
    printf("%d",prime);

    return 0;
}