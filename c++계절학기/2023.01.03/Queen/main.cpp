#include <iostream>
#include "Queen.h"
using namespace std;
int main(){
    queen * lastQueen = 0;

    for(int i = 1; i <= 8; i++){
        lastQueen = new queen(i , lastQueen);
        if(lastQueen -> findSolution() == false)
            cout << "no solution\n";
    }
}