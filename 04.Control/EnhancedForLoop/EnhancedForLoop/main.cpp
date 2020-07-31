#include <iostream>

using namespace std;

int main(void){
    int arr[] = {1,2,3,4,5};
    char str[] = "HELLO";
    for(int i : arr){
        cout << i << " " ;
    }
    
    cout << endl;
    cout << "PRINT STRING : " ;
    for(char i : str){
        cout << i << " ";
    }
    cout << endl;
    cout << "PRINT ASCII CODE VALUE : " ;
    for(int i : str){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
