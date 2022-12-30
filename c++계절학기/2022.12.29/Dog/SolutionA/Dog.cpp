//#include <iostream>
//#include <string>
//
//using namespace std;
//class DogSchool;
//class Dog{
//public:
//    string m_name;
//    DogSchool* m_school;
//    Dog(string n):m_name(n), m_school(0){ }
//    void bark();
//    void setSchool(DogSchool* ds);
//};
//class DogSchool{
//public:
//    int numDogs;
//    string m_school_name;
//    Dog* allDogs[100];
//    DogSchool(string sname):m_school_name(sname), numDogs(0){ }
//    string get_name(){ return m_school_name;}
//    void insert(Dog* d);
//};
//
//void Dog::bark(){
//    cout << "멍멍." << m_name << endl;
//    if(m_school){
//        cout << "나는" << m_school -> get_name() << " 에 다닙니다. \n";
//    }
//}
//void Dog::setSchool(DogSchool* ds){
//    m_school = ds;
//}
//void DogSchool::insert(Dog* d){
//    allDogs[numDogs++] = d;
//    d->setSchool(this);
//}
//int main() {
//    Dog *d1, *d2;
//    d1 = new Dog("철수");
//    d2 = new Dog("영희");
//
//    DogSchool* ds = new DogSchool("명랑 애견학교");
//    ds -> insert(d1);
//    d1 -> bark();
//}
