#include "card1.h"
int main(){
    enum suit{spade, diamond, clover, heart};
    Card myCard;
    myCard.setSuitRank(clover,11);
    myCard.show();
    myCard.setSuitRank(heart, 15);
    myCard.show();
    myCard.setSuitRank(4,1);
    myCard.show();
}