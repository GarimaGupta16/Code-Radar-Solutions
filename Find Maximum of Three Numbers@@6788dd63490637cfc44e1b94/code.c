#include <stdio.h>



int main() {
        int n , a , b;
    scanf("%d %d %d",&n , &a , &b);
    
        if(n>a && n>b){
        printf("%d ", n);
    }
    else if (a>b) {
        printf("%d", a);
    
}
else{
    printf("%d", b);
}
    return 0;
}