#include<stdio.h>
int main(){
    int marks[5] = {90,85,80,70,95};
    char name[] = "alice";

    printf("name: %s\n", name);
    printf("first marks: % d\n", marks[2]);
    printf("last marks: %d\n", marks[3]);
    return 0;
}