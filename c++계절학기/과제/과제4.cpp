#include <iostream>
using namespace std;

class Boonsoo{
    int ja;
    int mo;
public:
    void set(int j, int m){
        ja = j;
        mo = m;
    }
    int get_ja(){
        return ja;
    }
    int get_mo(){
        return mo;
    }
    void Add(Boonsoo *b){
        ja = ja * b -> mo + b -> ja * mo;
        mo = mo * b -> mo;
    }
    void print(){
        cout << ja << "/" << mo << endl;
    }
};
Boonsoo* boonMult(Boonsoo &one, Boonsoo &two){
    Boonsoo *result;
    result = new Boonsoo;
    result -> set(one.get_ja() * two.get_ja(), one.get_mo() * two.get_mo());
    return result;
}
int main(){
    Boonsoo boonA, boonB;
    boonA.set(2,3);
    boonB.set(3,5);
    boonA.print();
    boonB.print();
    Boonsoo * boonC = boonMult(boonA, boonB);
    boonC->print();
    boonA.Add(&boonB);
    boonA.print();
}