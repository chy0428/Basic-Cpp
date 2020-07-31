#include <iostream>

using namespace std;

void Display (string str, int i, float f){
    cout << "This is the function named \"Display\"" << endl;
    cout << "String Type: " << str << endl ;
    cout << "Integer Type: " << i << endl;
    cout << "Floating Type: " << f << endl << endl;
}

void Display (char c, double d, float f){
    cout << "This is the function named \"Display\"" << endl;
    cout << "Character Type: " << c << endl ;
    cout << "Double Type: " << d << endl;
    cout << "Floating Type: " << f << endl << endl;
}

void Display (int a , char b){
    cout << "This is the function named \"Display\"" << endl;
    cout << "Integer Type: " << a << endl ;
    cout << "Character Type: " << b << endl << endl;
}
int main(void){
    
    Display("TEST", 10, 5.82);
    Display('A', 8.1293, 12.342);
    Display(10,'B');
    return 0;
}


