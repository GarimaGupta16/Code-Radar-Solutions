int fibonacciSeries(int n ){
    int result=0;
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return result = fibonacciSeries(n-1) + fibonacciSeries(n-2);
    printf("%d ", result);
}