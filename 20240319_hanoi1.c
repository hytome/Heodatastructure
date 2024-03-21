#include <stdio.h>

void Hanoi_tower(int n,char from,char mid,char to){
    if(n == 1){
        printf("%d번째  원반은 %c 에서 %c 로 이동했습니다.\n",n,from,to);
        //첫번째 원반을 처음에서 도착지로.
    }else{
        Hanoi_tower(n-1,from,to,mid);
        printf("%d번째 선반은 %c에서 %c로 이동했습니다.\n",n,from,to);
        //1-1.첫번째 원반을 제외하고 중간에 있는 원반을 먼저a에서  b로 이동시킨다.
        //1-2.이럴 경우 순차적으로 가장 큰 원반부터 이동해야하는 룰을 지킬수 있다.
        Hanoi_tower(n-1,mid,from,to);
        //마지막 도착지로 보낸다. 
        //이러면 중간에 맡겨두었던 원판까지 도착지로 이동하여 조건에 따른 하노이 탑이 완성된다.
    }

    

}


int main(){
    Hanoi_tower(3,'A','B','C');

    



    return 0;
}