/*
 * =====================================================================================
 *
 *       Filename:  test.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/20/2011 02:42:37 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */

struct base{
    int a;
    int b;
};

class child:public base{
    int c;
    //child(int i = 10):a(i),b(0),c(0){}
    
public:
    int geta(){return a;};
    void seta(int i){a = i;};
    child(int i = 10){
        a=i;
        b=0;
        c=0;
    }
};

#include <iostream>
using std::cout;using std::endl;

int main()
{
    child test;
    //test.seta(10);
    cout << test.geta() << endl;
    return 0;
}
