#include<stdio.h>
int main(){
    int arr[] = {4, 2, 8, 6, 9, 5, 98, 99};
    int min = arr[0];
    for(int i=1; i<8; i++)
        if(arr[i] < min)
            min= arr[i];
    printf("minimum = %d\n", min);
    return 0;
        
}