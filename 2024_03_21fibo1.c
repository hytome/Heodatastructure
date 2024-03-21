#include <stdio.h>
int fibo(int n){
    if (n==0){
        return 0;}
    else if(n==1){
        return 1;
        }
    else {
        return fibo(n-1)+fibo(n-2);
        }
    //n의 -1값과 n의 -2값을 더하는것을 피보나치 수열이라고 한다.
}
int main(){
    int n;
    printf("몇번째 까지 피보나치 수열을 구하겠습니까?: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("fibo(%d)= %d\n",i,fibo(i));
    }
    return 0;
}