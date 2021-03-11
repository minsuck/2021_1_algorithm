/*
input : 첫 줄에는 테스트케이스의 수 T가 주어집니다. 다음줄부터는 각 테스트케이스마다 포켓몬 카드의 수 N(32비트 정수)이 주어지며, 포켓몬 카드를 나타내는 N개의 정수가 주어진다.
output : 중복된 카드가 존재하면  true를 없으면 false를 출력하시오.
algorithm : 
일단 테스트케이스 입력 받기
입력받은 만큼 반복해서 카드 입력 / 카드번호 입력받기
집합 처리 해버리고 집합의 크기와 테스트 케이스의 크기 비교
같다면 겹치는 카드가 없으니 false, 다르다면 겹치는 카드가 있으니 true.
*/
#include<stdio.h>
#include<set>
using namespace std;
int main(){
    int test_case; //테스트 케이스를 저장
    int number_of_cards; //카드의 갯수 저장
    set<int> card_set; // 카드의 고유번호가 들어가는 집합
    int input; //카드 번호를 잠시 저장해두는 변수

    scanf("%d", &test_case);

    for(int i=0;i<test_case;i++){
        scanf("%d", &number_of_cards);
        for(int j=0;j<number_of_cards;j++){
            scanf("%d", &input);
            card_set.insert(input);
        }
        if(card_set.size() == number_of_cards)  printf("false");
        else    printf("true");
    }

    return 0;
}