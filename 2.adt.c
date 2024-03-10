#include <stdio.h>

//자료형:객체(object)와 이 객체 간의 연산(operation)의 집합으로 정의한다.
//추상 데이터 타입:(abstract data type)은 객체와 연산들의 명세가 구현으로부터 분리된,데이터 타입을 말한다.
//c언어가 제공하는 자료형은 어떤게 있을까? 
//1.정수(0,1,2) //int
//2.실수(3.14)//float,double
//3.문자('a' 'b')//char
//배열(동일의 자료형이 여러개 모인것.)
//포인터.
//구조체(다른 자료형이 여러개 모인것.)
//추상자료형:1. 추상이라는 단어가 들어가는 이유는 데이터늬 정의나 연산의 정의가(추상적) 으로 정의되기 떄문.
//2.데이터나 연산이(what)무엇인가는 정의되지만,데이터나 연산이 어떻게(how)컴퓨터 상에서 구현될것인지는 정의가 되지 않음.
//따라서 자료구조는 이러한 추상  데이터 타입을 프로그래밍 언어로 구현한것.
//ex)int 자료형
//-데이터 = INT_MIN(컴퓨터가 나타낼수 있는 가장 작은정수)~INT_MAX(컴퓨터가 나타낼수 있는 가장 큰수.)
//-연산 = +,-,*,/(나누기),%(나머지 포함 나누기),==(같다),<,>
//따라서 이제부터 자료형이라고 하면 연산자도 포함해야한다.
//추상 자료형 정리.
Nat_number zero() ::=0;
Nat_number susccessor(x) ::=if(x==INT_MAX ) return x
                                else return x+1;
                                //INT MAX값과 x값이 일치할경우 x를 
                                //아닐시 x값에 +1을 더한다.
Boolean is_zero(x) ::= if(x) return FALSE
                            else return TRUE
                            //0이 아닐경우 false 를 반환. 
                            //Boolean=서로 참,거짓을 비교하는것. 
Boolean equal(x,y) ::= if(x==y) return TRUE
                        else return FALSE 
                        //equal= x와 y값이 같은지 비교하는것.
Nat_Number add(x,y) ::=if((x+y)<= INT_MAX)
//INT_MAX가 int X+Y보다 크거나 같다면 
                        return x+y
                        //x+y를 반환
                        else return FALSE
                        //x+y가 INT MAX보다 크면 INT MAX를 반환.
Nat_Number sub(x,y) ::=if(x<y) 
                        return 0
                        else return x-y; 
                        //y값이 x보다 클 경우 0을 반환 아닐시에는 x-y를 실시.
//Q.Nat_No 추상 데이터 타입에 is_greater(x,y)연산을 추가해보기.
//greater:첫번째 인자가 두번째 인자보다 크면 true 반환.
is_greater(x,y) ::= if(x>y) return TRUE;
//x가 y보다 클경우 true 
                        else return FALSE;
                        //아니면 FALSE.

