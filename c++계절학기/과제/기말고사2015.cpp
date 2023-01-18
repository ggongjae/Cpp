#include <iostream>
#include <string>
#include <iomanip>
#define MAX 5
using namespace std;
class Student {
public:
    int num;
    char name[10];
};

class Lscore : virtual public Student{
public:
    int kor;
    int eng;
};

class Nscore : virtual public Student{
public:
    int math;
    int sci;
};

class Totscore : public Lscore, Nscore{
private:
    int tot;
    double avg;
public:
    Totscore(int n, const char* s_name, int k, int e, int m, int s){
        num = n;
        strcpy(name, s_name);
        kor = k;
        eng = e;
        math = m;
        sci = s;
    }
    friend void Total(Totscore kim[]);
    friend void Print(Totscore *stu);
    Totscore operator++(int);
};
Totscore Totscore::operator++(int){
    kor = kor + 3;
    eng = eng + 3;
    math = math + 3;
    sci = sci + 3;
    return(*this);
}
template <class T>
T Average(T tot){
    return tot / 4.00;
}
void Total(Totscore kim[]){
    for(int i=0; i<MAX; i++){
        kim[i].tot = kim[i].kor + kim[i].eng + kim[i].math + kim[i].sci;
        kim[i].avg = Average<double>(kim[i].tot);
    }
}

kim[i].stu->tot
void Print(Totscore *stu) {
    for (int i = 0; i < MAX; i++) {
        if (stu[i].avg >= 86.00) {
            cout << setw(4) << (stu+i)->num
                 << setw(6) << (stu + i)->name
                 << setw(5) << (stu + i)->kor
                 << setw(5) << (stu + i)->eng
                 << setw(5) << (stu + i)->math
                 << setw(5) << (stu + i)->sci
                 << setw(5) << (stu + i)->tot
                 << setw(7) << (stu + i)->avg << endl;
        }
    }
}
int main(){
    Totscore st[MAX] = {
            Totscore(101,"Kim",85,90,80,77),
            Totscore(102,"Lee",90,95,89,85),
            Totscore(103,"Park",80,70,70,55),
            Totscore(104,"Hong",75,80,90,85),
            Totscore(105,"Kang",85,90,85,85)
    };
    for (int i = 0; i < MAX; i++) {
        st[i] = st[i]++;
    }
    Total(st);
    Print(st);
}