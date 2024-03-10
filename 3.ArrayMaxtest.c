#include <stdio.h>

//배열에서 최댓값 찾는 알고리즘 (c언어.)

int main(){
    int n;
    int arr[100];
    printf("배열의 길이를 입력해주세요.: ");
    scanf("%d",&n);
    //배열의 갯수를 저장할 scanf
    for(int i=0; i<n; i++){ //1.먼저 배열의 길이만큼 돌아가는 for문.
        printf("배열의 값을 입력해주세요: ");
        //1-1.배열의 값을 저장하기 위해서.
        scanf("%d",&arr[i]);

    }
    printf("큰 수를 출력중입니다...\n");
    int Max= arr[0]; //최댓값을 저장할 함수 먼저 arr배열의 첫번쨰 값을 저장.
    for(int i=0; i<n; i++){ //2.배열의 갯수만큼 돌아가는 for문. 
    //2-1.배열의 최댓값을 찾기위해 돌아가는것.
        if(Max<arr[i]){ //만약 Max값이 arr안에 있는 배열값보다 작을 경우.
            Max=arr[i]; //Max에 arr의 해당 배열값을 저장.
        }
    }
    printf("최대값은 %d 입니다.\n",Max);
    //최대값이 그렇게 저장된 Max 값을 출력.
    return 0;
}