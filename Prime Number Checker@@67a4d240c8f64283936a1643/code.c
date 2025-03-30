 int isPrime(int num){
    if(num<=1){
        return 0;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
         printf("1");
        }else{
        printf("0");
        }
    }
return 1;
}