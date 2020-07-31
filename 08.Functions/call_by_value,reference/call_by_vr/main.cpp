#include <iostream>

using namespace std;

void call_by_value(int x , int y){
    int temp = x;
    x = y;
    y = temp;
}

void call_by_reference(int &x, int &y){
    int temp = x;
    x = y ;
    y = temp;
}

int main(void){
    int a = 45 ;
    int b = 82 ;
    
    call_by_value(a, b);
    cout << "CALL BY VALUE" << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    
    cout << endl;
    call_by_reference(a, b);
    cout << "CALL BY REFERENCE" << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    
    return 0;
}


