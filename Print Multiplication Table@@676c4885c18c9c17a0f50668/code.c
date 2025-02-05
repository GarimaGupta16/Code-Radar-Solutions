#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
   scanf("%d",&n);

   for(int i=1;i<=10;i++){
   int mul=n*i;
   printf("%d * %d = %d",n , i , mul);
    
   }
    return 0;
}