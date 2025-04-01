#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    int freq[size];
    for(int i = 0 ; i < size; i++){
        scanf("%d",&arr[i]);
        freq[i] = 1;
    }
    for(int i =0; i < size; i++){
        int count = 1;
        if(freq[i] != 0){
            for(int j = i+1; j < size; j++){
                if(arr[i] == arr[j]){
                    freq[j] = 0;
                    count++;
                }
            }
        }
        
        freq[i] = count;
    }
    int max = freq[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = freq[i];
        }
    }
    printf("%d",max);


    return 0;
}