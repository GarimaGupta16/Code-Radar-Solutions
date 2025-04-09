#include <stdio.h>
void sort(int arr[], int n);

int main(){
    int n ;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
sort(arr,n);
if (temp==1){
    printf("Sorted")
}else{
    printf("Not Sorted");
}

}
int sort(int arr[] , int n){
     int temp;
    for (int i = 0; i < n-1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < n-i-1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j+1]) {
                temp =1;
            }else{
               return temp =0;
            }
        }
 
}
}


