#include <stdio.h>
//여러 과목 시험 성적 중 가장 높은 시험성적을 구하는 프로그램.
//자료구조:시험성적(자료)를 저장하는 구조는 배열.
//알고리즘: 하나의 변수를 만들어 첫번쨰 성적(자료)를 변수에 넣어 다음 성적을 비교해 가면서,더큰 성적을 변수에 넣는 과정을 반복.
//=>모든 성적 비교가 끝난후 높은 성적이 변수에 저장된다.
#define MAX_ELEMENTS 100
int scores[MAX_ELEMENTS]; //자료 구조.

int get_max_scroes(int n){ //성적의 숫자는 n
    int i,largest;
    largest = scores[0]; //여기서 부터 알고리즘.
    //largest 변수에 첫번쨰 성적을 저장한후. 
    for(i=1; i<n; i++){ //성적수 만큼 돌아가는 for문.
        if(scores[i]>largest){  //변수의 값과 다음성적을 비교했을떄 다음 성적이 더 크면,
            largest = scores[i]; //이렇게 더큰 성적을 변수에 저장.
        }
    }
    return largest;
    //그렇게 가장 큰 성적 점수가 들어있는 변수를 반환.
}