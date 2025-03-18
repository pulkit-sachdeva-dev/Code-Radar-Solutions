#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);
    int arr[size], freq[size];
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
        freq[i] = 1;
    }
    for(int i = 0; i < size; i++){
        int count = 1;
        if(freq[i] != 1){
            for(int j = i+1; j < size; j++){
                if(arr[i] == arr[j]){
                    freq[j] = 0;
                    count++;
                }
            }
        }
        freq[i] = count;
    }
    for(int i = 0; i < size; i++){
        if(freq[i] != 0) printf("%d %d\n",arr[i],freq[i]);
    }
    return 0;
}