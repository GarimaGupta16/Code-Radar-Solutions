#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
  int n;
  scanf("%d ",&n);
  if(n%3==0 && n%5==0){
    printf("Divisible by both");
  }else if (n%3==0 && n%5!=0){
    printf("Divisible by 3");
  }else if (n%3!=0 && n%5==0){
    printf("Divisible by 5");
  }else{
    printf("Not Divisible");
  }
    return 0;
}