#ifndef _VECTOR_H_
#define _VECTOR_H_

#include <iostream>
#include <vector>
using namespace std;

class Vector
{
public:
    Vector();
    ~Vector();
    
    void print();
    int random();
    int addValue(int add);
    int zero(int start, int end);
    void reverse();
    float average();
    void magic();
    void repeat();
    void chop();
    void john();

private:
    vector <int> data;
};
#endif