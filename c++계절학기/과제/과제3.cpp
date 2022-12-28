//#include <iostream>
//
//using namespace std;
//class Student{
//private:
//    string STU_number; // 학번
//    string STU_name; // 이름
//    int korea, english, total;
//    double average;
//
//public:
//    void Set_STU_number(string number ){ STU_number = number; }; // 학번
//
//    void Set_STU_name(string name ){ STU_name = name; }; // 이름
//
//    void Korea(int kor){ korea = kor; }; // 국어
//
//    void English(int eng){ english = eng; }; // 영어
//
//    void Total() { total = korea + english; }; // 총점
//
//    void Average() { average = total / 2; }; //평균
//
//    void Print() {
//        cout << "학번 : " << STU_number << endl;
//        cout << "이름 : " << STU_name << endl;
//        cout << "국어 : " << korea << endl;
//        cout << "영어 : " << english << endl;
//        cout << "총점 : " << total << endl;
//        cout << "평균 : " << average << endl;
//    };
//};
//int main(){
//    Student kim;
//    kim.Set_STU_number("본인학번");
//    kim.Set_STU_name("본인이름");
//    kim.Korea(100);
//    kim.English(95);
//    kim.Total();
//    kim.Average();
//    kim.Print();
//
//}