#include <stdio.h>


int main() {
    int a;
    scanf("%c",&a);
    for (int i=1;i<=a;i++){
        char count='A';
        for(int j=1;j<=i;j++){
            printf("%c ",count);
            count++;

        }
    }
    return 0;
}