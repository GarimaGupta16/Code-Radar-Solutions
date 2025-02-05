#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
            int n ;
            // char count='A'; 
    scanf("%d",&n);
   for(int i=1;i<=n;i++){
    
    for(char j='A';j<=i;j++){
        printf("%c ",j);
        // count++;
    }
    printf("\n");
   }
    return 0;
}