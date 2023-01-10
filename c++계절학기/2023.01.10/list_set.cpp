#include <iostream>

using namespace std;
class Link{
public:
    Link(){}
    int m_data;
    Link *next;
    friend class List;
};
class List{
public:
    List():m_first(0){ }
    bool find(int n){
        Link *p;
        for(p=m_first; p; p=p->next){
            if(p->m_data==n) return true;
        }
        return false;
    }
    void insert(int data){
        Link* t = new Link();
        t->next = m_first;
        t->m_data=data;
        m_first = t;
    }
    void printall(){
        Link* p;
        cout << "START: ";
        for(p=m_first;p;p->next){
            cout << p->m_data<<"--> ";
        }
        cout << "END" << endl;
    }
private:
    Link * m_first;
};