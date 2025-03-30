void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  // Number of passes
        for (int j = 0; j < n - i - 1; j++) {  // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {  // Swap if needed
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
} 
void printArray(int arr[], int n ){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}