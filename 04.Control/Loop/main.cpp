#include <iostream>
using namespace std;

int main(void){
    int n = 0;
    int fsum = 0 ;
    int wsum = 0 ;
    cin >> n ;

    
    for(int i = 1; i <= n ;i++){
        fsum += i ;
    }
    cout << "For Loop: " << fsum << endl;

    int j = 1;
    while(j <= n){
       wsum += j;
       j++;
    }
   
    cout << "While Loop: " << wsum << endl;
    return 0;
}

