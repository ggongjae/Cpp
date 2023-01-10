#include <iostream>

using namespace std;
class Parent{
public:
    virtual void example(){ cout << "Parent" << endl;}
};

class Child : public Parent{
public:
    void example(){ cout << "Child" << endl; }
};

int main(){
    Parent* p = new Parent();
    p->example();

    Child* c = new Child();

    c -> example();
    p = c;
    p -> example();
}