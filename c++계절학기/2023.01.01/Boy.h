#ifndef UNTITLED2_BOY_H
#define UNTITLED2_BOY_H
#include <iostream>
#include <string>
using namespace std;
class Girl;
class Boy {
public:
    string m_boyname;
    Girl *m_girlfriend;
    Boy(string bname):m_boyname(bname), m_girlfriend(0) { }
    string get_boyname();
    void hello();
    void setGF(Girl *ds);
};


#endif //UNTITLED2_BOY_H
