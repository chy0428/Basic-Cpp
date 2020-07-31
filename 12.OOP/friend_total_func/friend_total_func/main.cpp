#include <iostream>

using namespace std;

class A {
private:
    int x = 10;
public:
    friend int getX(const A& t) ;
};
int getX(const A& t){
    return t.x;
}
int main(void){
    A classA;
    int x = getX(classA);
    cout << "x of class named A : " << x << endl;
    return 0;
}
