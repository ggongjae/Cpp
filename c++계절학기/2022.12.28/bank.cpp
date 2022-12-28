//#include <iostream>
//
//using namespace std;
//class Bank_Account{
//private:
//    string BA_number; // 학번
//    string BA_name; // 이름
//    int balance; // 잔고
//
//
//public:
//    void Set_BA_number(string num ){ BA_number = num; }; // 학번
//
//    void Set_BA_name(string name ){ BA_name = name; }; // 이름
//
//    void Set_balance(int bal){ balance = bal; }; // 잔고
//
//    void Deposit(int deposit){ balance = balance + deposit; }; // 입금
//
//    void Withdraw(int withdraw) { balance = balance - withdraw; }; // 출금
//
//    void Print() {
//        cout << "계정 : " << BA_number << endl;
//        cout << "이름 : " << BA_name << endl;
//        cout << "잔액 : " << balance << endl;
//    };
//};
//int main(){
//    Bank_Account kim;
//    kim.Set_BA_number("60192161");
//    kim.Set_BA_name("권용재");
//    kim.Set_balance(1000);
//    kim.Deposit(500);
//    kim.Withdraw(300);
//    kim.Print();
//
//}