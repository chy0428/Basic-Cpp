#include <iostream>
using namespace std ;

void sum ( int a , int b, int c = 3, int d = 4 ){
     int sum = a + b + c + d ;
     cout << "sum: " << sum << endl;
}

int main(void){
    sum ( 1, 2 ); // sum(1,2,3,4) 와 같음  ( sum: 10 )
    sum ( 1, 2, 6, 8 ); // sum(1,2,6,8) 와 같음 ( sum: 17 )
//    sum ( 1, 5, , 9 ); // ERROR
    return 0;
}
