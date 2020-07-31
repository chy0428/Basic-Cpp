#include <iostream>

using namespace std;

int main(void){
    
    char str1[20] ;
    char str2[20];
    
    cout << "INPUT STRING 1 : " ;
    cin.get(str1, 20).get();
    cout << "INPUT STRING 2 : " ;
    cin.get(str2, 20).get();
    
    cout << "STRING 1 : " << str1 << endl;
    cout << "STRING 2 : " << str2 << endl;
    
    return 0;
}
