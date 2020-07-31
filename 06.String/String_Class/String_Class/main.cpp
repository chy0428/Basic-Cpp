#include <iostream>

using namespace std;

int main(void){
    string str1;
    string str2;
    
    cout << "INPUT STRING 1: " ;
    getline(cin, str1);
    
    cout << "INPUT STRING 2: " ;
    getline(cin, str2);
    
    cout << "STRING 1:" <<  str1 << endl;
    cout << "STRING 2:" <<  str2 << endl;
    return 0;
}
