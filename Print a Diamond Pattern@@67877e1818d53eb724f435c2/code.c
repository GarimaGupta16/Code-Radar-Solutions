#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
       int n ; 
    scanf("%d",&n);
   for(int i=1;i>=n;i++){
    for(int j=1;j<=n-i;j++){
        printf(" ");
    }
    for(int j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
   }
   for(int i=n;i<=2;i--){
    for(int j=1;j<=n-i;j++){
        printf(" ");
    }
    for(int j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
   }
   
    return 0;
}