//#include <iostream>
//#include <string>
//#define MAX 5
//using namespace std;
//
//class Register{
//public:
//    int num;
//    char name[10];
//};
//
//class Subject{
//public:
//    int kor, eng, math, sci;
//    float tot, avg;
//    Subject(){
//        kor = 0;
//        eng = 0;
//        math = 0;
//        sci = 0;
//    }
//    Subject(int k, int e, int m, int s){
//        kor = k;
//        eng = e;
//        math = m;
//        sci = s;
//    }
//};
//class Student:public Register{
//private:
//    Subject *sp;
//public:
//    Student(){
//        sp = 0;
//    }
//    Student(int n, const char* s_name, int k, int e, int m, int s){
//        num = n;
//        strcpy(name,s_name);
//        sp = new Subject(k,e,m,s);
//    }
//    friend void Print(Student *stu);
//    friend void Total(Student kim[]);
//    const Student operator++(int);
//};
//const Student Student::operator++(int){
//    sp->kor +=1;
//    sp->eng +=1;
//    sp->math +=1;
//    sp->sci +=1;
//    return(*this);
//}
//template <class T>
//T Average(T tot){
//    return tot / 4.00;
//}
//void Total(Student kim[]){
//    for(int i=0; i<MAX; i++){
//        (kim[i].sp -> tot = kim[i].sp->kor +kim[i].sp->eng + kim[i].sp-> math + kim[i].sp-> sci);
//        (kim[i].sp -> avg = Average<double>((kim[i].sp)->tot));
//    }
//}
//
//void Print(Student *stu){
//    cout << "연번" << "    학번" << "  이름" << "  국어" << "  영어" << "  수학"
//         << "  과학" << "  총합" << "    평균" << endl;
//    cout << "-------------------------------------------------------------------------" << endl;
//    for(int i=0; i<MAX; i++){
//        cout << "  " << (stu + i)->num;
//        cout << "  " << (stu + i)->name;
//        cout << "  " << (stu[i].sp)->kor;
//        cout << "  " << (stu[i].sp)->eng;
//        cout << "  " << (stu[i].sp)->math;
//        cout << "  " << (stu[i].sp)->sci;
//        cout << "  " << (stu[i].sp)->tot;
//        cout << "  " << (stu[i].sp)->avg << endl;
//    }
//}
//int main() {
//    Student st[MAX] = {
//            Student(101, "Kim", 85, 90, 80, 77), //점수들 입력값 그대로 입력
//            Student(102, "Lee", 90, 95, 89, 85),
//            Student(103, "Park", 80, 70, 70, 55),
//            Student(104, "Hong", 75, 80, 90, 85),
//            Student(105, "Kang", 85, 90, 85, 85)
//    };
//    for (int i = 0; i < MAX; i++) {
//        st[i] = st[i]++;
//    }
//    Total(st);
//    Print(st);
//}