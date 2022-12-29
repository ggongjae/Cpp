#include <iostream>

using namespace std;

class Rect{
public:
    int m_width;
    int m_height;
    void show(){
        cout << "면적 " << m_width * m_height << endl;
    }
};
int main(){
    Rect *rect;
    rect = new Rect;
    rect -> m_width = 5; rect -> m_height = 6;
    rect->show();
}