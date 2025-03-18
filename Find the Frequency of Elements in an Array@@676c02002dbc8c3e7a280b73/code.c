#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);
    int arr[size], freq[size];
    for(int i = 0; i < size; i++){
        scanf("%d",arr[i]);
        freq[i] = 0;
    }
    for(int i = 0; i < size; i++){
        int count = 0;
        for(int j = i+1; j < size; j++){
            if(arr[i] == arr[j]){
                freq[j] = 1;
                count++;
            }
        }
        freq[i] = count;
    }
    for(int i = 0; i < size; i++){
        if(freq[i] != 1) printf("%d %d",arr[i],freq[i]);
    }
    return 0;
}