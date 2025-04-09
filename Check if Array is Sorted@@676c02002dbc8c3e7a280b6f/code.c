#include <stdio.h>
int sort(int arr[], int n);

int main(){
    int n ;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

if (sort(arr,n)){
    printf("Sorted");
}else{
    printf("Not Sorted");
}

}
int sort(int arr[] , int n){
    int ascending=1;
    int descending=1;

    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            ascending=0;
        }
        if(arr[i]<arr[i+1]){
            descending =0;
        }
    }
    if(ascending || descending){
        return 1;
    }else{
        return 0;
    }
}
    