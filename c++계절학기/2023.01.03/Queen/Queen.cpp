//#include "Queen.h"
//#include <iostream>
//
//using namespace std;
//queen::queen(int col, queen * ngh):m_column(col),m_neighbor(ngh)
//{
//    m_row = 1;
//}
//
//void queen::print()
//{
//    queen * p;
//    p = this;
//    while(p != 0){
//        cout << p->m_column << " " << p->m_row <<endl;
//        p = p->m_neighbor;
//    }
//}
//
//bool queen::canAttack(int testRow, int testColumn)
//{
//    if(m_row == testRow)
//        return true;
//    int columnDifference = testColumn - m_column;
//    if((m_row + columnDifference == testRow) || (m_row - columnDifference == testRow))
//        return true;
//    return m_neighbor &&  m_neighbor ->canAttack(testRow,testColumn);
//}
//
//bool queen::findSolution()
//{
//    while(m_neighbor && m_neighbor ->  m_neighbor ->canAttack(m_row,m_column))
//    {
//        bool result;
//        result = advance();
//        if(result == false){
//            return false;
//        }
//    }
//    return true;
//}
//
//bool queen::advance()
//{
//    if(m_row < 8){
//        m_row++;
//        return findSolution();
//    }
//    if(m_neighbor && m_neighbor->advance()== false){
//        return false;
//    }
//
//    m_row = 1;
//    return findSolution();
//}