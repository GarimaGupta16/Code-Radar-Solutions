// #include <stdio.h>


// int main() {
//     int a;
//     scanf("%d",&a);
//     for (int i=1;i<=a;i++){
//         char count='A';
//         for(int j=1;j<=i;j++){
//             printf("%c ",count);
//             count++;

//         }
//         printf("\n");
//     }
//     return 0;
// }


#include <stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char ch ='A';
        for(int j=1 ; j<=i;j++){
            printf("%c ",ch);
            ch++;

        }
        printf("\n");
    }
}