//배열에서 최댓값을 찾는 알고리즘을 자연어로 표현한 예. 
//ArrayMax(A,n)
//1.배열 A의 첫 번쨰 요소를 변수 tmp에 복사한다.
//2.배열 A의 다음 요소 들을 차례대로 tmp와 비교하여,더 큰값을 tmp로 복사한다.
//3.배열 A의 모든 요소를 비교한후에는 tmp를 반환한다.

//2.최댓값을 찾는 알고리즘을 유사코드로 표현한 예.
//ArrayMax(list,n)
//largest<-list[0] 할당(대입)연산자:최댓값을 저장할. <-
//for i<-1 to n-1 do 배열의 갯수만큼 돌아갈 for문.
//if list[i]>largest :아까 배열의 첫번쨰 값이 들어간 largist와 for문으로 배열의 갯수 비교.
//만약 if문 에 선언한것처럼 list안에 있는 배열값이 더 클경우.
//then largest<-list[i] :largest값에 list[i]값을 저장.
//배열의 모든 요소와 비교후 for문 탈출 후.  largest값을 반환.

#include <iostream>
using namespace std;

int ArrayMax(int score[], int n){//자료구조: 배열 array, n은 배열의 길이.
    int tmp = score[0]; //방금 유사코드의 largest:tmp.
    for(int i=1; i<n; i++){ //배열의 길이만큼 돌아갈 for문.
        if(score[i]>tmp){
            tmp = score[i];
            //배열의 길이 안에 있는 값이 tmp값보다 클경우 그값을 tmp에 저장.
        }
    }
    return tmp; 
    //그리고 그 tmp값을 반환.
}