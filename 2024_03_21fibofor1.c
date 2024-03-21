#include <stdio.h>

int fib_iter(int n){
    if (n==0){
        return 0;
    }else if(n==1){
        return 1;
    }

    int pp=0; //피보나치 선언시 바로 앞에있는 값.
    int p=1; //그 뒤에 있는 값.
    int result=0; //더한 피보나치 값을 저장할 resul.

    for(int i=2; i<=n; i++){ //0,1은 피보나치 수열에 필요 없으니. 2부터 시작.(앞선 if문 참고)
        result = p+pp; //결과 값에 p+pp를 저장.
        pp = p; //pp값에 p를 저장. 증가한 값의 앞에 위치하게. 
        p = result;//그리고 p에 result값이 넘겨지며 수열의 반복을 유지.
    }

    return result;
}

int main(){
    int iter_result = fib_iter(4);
    printf("파보나치 수열 4의 값은: %d \n",iter_result);

    return 0;
}