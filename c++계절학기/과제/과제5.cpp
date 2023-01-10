//#include <iostream>
//#include <string>
//#define MAX 5
//using namespace std;
//class Student {
//protected:
//    int num;
//    char name[10];
//};
//class Lscore : public virtual Student {
//protected:
//    int kor;
//    int eng;
//};
//class Nscore : public virtual Student {
//protected:
//    int math;
//    int sci;
//};
//
//class Totscore : public Lscore, public Nscore {
//public:
//    Totscore(int n, const char* na, int ko, int en, int mat, int sc) {
//        num = n;
//        strcpy(name, na);
//        kor = ko;
//        eng = en;
//        math = mat;
//        sci = sc;
//    }
//    Totscore operator +(int k) {
//        return Totscore(num, name, kor + k, eng + k, math + k, sci + k);
//    }
//    friend void Print(Totscore *stu);
//};
//
//void Print(Totscore *stu) {
//    for (int i = 0; i < MAX; i++) {
//        cout << " " << stu[i].num << " " << stu[i].name << " "
//             << stu[i].kor << " " << stu[i].eng << " "
//             << stu[i].math << " " << stu[i].sci << endl;
//    }
//}
//int main() {
//    Totscore st[MAX] = {
//            Totscore(101, "Kim", 85, 90, 80, 77),
//            Totscore(102, "Lee", 90, 95, 89, 89),
//            Totscore(103, "Park", 80, 70, 70, 55),
//            Totscore(104, "Hong", 75, 80, 90, 85),
//            Totscore(105, "Kang", 85, 90, 85, 85)
//    };
//    for (int i = 0; i < MAX; i++) {
//        st[i] = st[i] + 5;
//    }
//    Print(st);
//}