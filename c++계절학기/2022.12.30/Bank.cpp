//#include <iostream>
//
//using namespace std;
//
//class BankAccount{
//public:
//    BankAccount(){ m_balance =0; m_irate = 0.05; }
//    BankAccount(int bal){ m_balance = bal ; m_irate = 0; }
//    BankAccount(double rate){ m_balance = 0; m_irate = rate; }
//    void show(){ cout << "잔액 " << m_balance << "\n이자율: "<< m_irate << endl; }
//private:
//    int m_balance;
//    double m_irate;
//};
//
//int main(){
//    BankAccount b1;
//    b1.show();
//    BankAccount b2 = BankAccount(100);
//    b2.show();
//    BankAccount b3 = BankAccount(0.1);
//    b3.show();
//}