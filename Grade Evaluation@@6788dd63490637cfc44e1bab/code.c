#include <stdio.h>
int main() {
   char a;
   scanf("%d",&a);
   if(a=='A'){
    printf("Excellent");
   }
   else if(a=='b'){
    printf("Good");
   }
   else if(a=='c'){
    printf("Average");
   }
   else if(a=='d'){
    printf("Below Average");
   }
   else{
    printf("Fail");
   }
    return 0;
}