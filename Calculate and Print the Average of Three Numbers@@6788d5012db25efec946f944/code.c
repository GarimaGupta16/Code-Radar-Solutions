#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d ", &a,&b,&c);
    int sum=a+b+c;
    float avg= sum/3.0;
    printf("Average: %.2f",avg);
    return 0;
}