// #include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

// int main() {
//        int count=1;
//        int n;
//        scanf("%d",&n);
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//       printf("%d ", count);
//       count++;
      
//     }
//     printf("\n");
//   }
   
//     return 0;
// }

#include <stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int count= 1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      printf("%d ",count);
      count++;
    }
    printf("\n");
  }
}
