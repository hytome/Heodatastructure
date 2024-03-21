#include <stdio.h>

int fibo_rec(int n){
    int a[100]={0,1, };
    if(n<2||a[n]!=0){
        return a[n]; //메모리지네이션.
        //재귀함수를 피보나치로 돌릴경우 너무나도 동일한 값이 중복으로 순환된다.
        //그러니 a[n]에 존재하는 수열일 경우 저장한 값을 다시 반환 하는것.
    }else{
        a[n] = fibo_rec(n-1)+fibo_rec(n-2);
        return a[n];
    }

}

int main(){
    int result= fibo_rec(4);
    printf("피보나치 4의 수열 값은: %d \n",result);

    return 0;
}