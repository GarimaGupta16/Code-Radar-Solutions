#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
  int n;
  scanf("%d",&n);
  if(n==1 ||n==3 ||n==5 || n==7 || n==8 || n==10 ||n==12){
    printf("31");
  }else if(n==2){
    printf("28");

  }else{
    printf("Invalid months");
  }
    return 0;
}