//#include <iostream>
//#include <string>
//#define MAX 5
//using namespace std;
//class Student {
//protected:
//    int num;
//    char name[10];
//};
//class Lscore {
//protected:
//    int kor;
//    int eng;
//};
//class Nscore{
//protected:
//    int math;
//    int sci;
//};
//
//class Totscore : public Lscore, Nscore,Student {
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
//    friend void Print(Totscore stu[]);
//};
//
//void Print(Totscore stu[]) {
//    for (int i = 0; i < MAX; i++) {
//        cout << " " << stu[i].num << " " << stu[i].name << " "
//             << stu[i].kor << " " << stu[i].eng << " "
//             << stu[i].math << " " << stu[i].sci << endl;
//    }
//}
//int main() {
//    Totscore st[MAX] = {
//            Totscore(101, "kim", 85, 90, 80, 77),
//            Totscore(102, "lee", 90, 95, 89, 89),
//            Totscore(103, "park",80, 70, 70, 55),
//            Totscore(104, "hong",75, 80, 90, 85),
//            Totscore(105, "kang",85, 90, 85, 85)
//    };
//    for (int i = 0; i < MAX; i++) {
//        st[i] = st[i] + 5;
//    }
//    Print(st);
//}