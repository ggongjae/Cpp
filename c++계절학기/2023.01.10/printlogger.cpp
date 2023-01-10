//#include <iostream>
//
//using namespace std;
//class Logger{
//public:
//    virtual void log(string) = 0;
//};
//class Printer{
//public:
//    void print(string msg){
//        cout << msg <<endl;
//    }
//};
//class PrintLogger : public Logger, public Printer{
//public:
//    void log(string s){
//       print(s);
//    }
//};
//class App{
//    Logger *mylogger;
//public:
//    App(Logger *pl){ mylogger = pl; }
//    void start(){
//        mylogger->log("홍길동: 시스템 이상 무");
//    }
//};
//
//int main(){
//    App *r1;
//    r1 = new App(new PrintLogger);
//    r1 -> start();
//}