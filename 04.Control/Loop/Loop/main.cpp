#include <iostream>

using namespace std;

int main(void){
    int sum = 0 ;
    int num = 0 ;
    
    cout << "Enter a number: ";
    cin >> num;
    
    for(int i = 1 ; i <= num ; i++){
        sum += i;
    }
    
    cout << "SUM : " << sum << endl;
    
    return 0;
}
