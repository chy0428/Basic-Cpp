#include <iostream>

using namespace std;

int main(void){
    int a = 20 ;
    int b = 30 ;

    int *x = &a;
    int *y = &b;

    cout << "Address of x:" << x << " | " << "Address of y:" << y << endl;
    x = y;

    cout << "Address of x:" << x << " | " << "Address of y:" << y << endl;
    return 0 ;

}
