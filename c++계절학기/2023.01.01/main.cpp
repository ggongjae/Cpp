#include "Boy.h"
#include "Girl.h"
int main(){
    Boy *b = new Boy("김철수");
    Girl *g = new Girl("박영은");
    b->setGF(g); g->setBF(b); // 남친/여친을 설정하는 함수
    b->hello(); g->hello();
}