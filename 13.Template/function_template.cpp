#include <iostream>
using namespace std;
template <typename DTYPE> void swap(DTYPE &x, DTYPE &y);

int main() {
    string cherry = "cherry", peach = "peach";
    cout << "Befor swap" << endl;
    cout << "fruit1 : " << cherry  << ", fruit2 : " << peach << "\n" << endl;
    swap(cherry, peach);
    cout << "After swap" << endl;
    cout << "fruit1 : " << cherry  << ", fruit2 : " << peach << endl;

    return 0;
}

template <typename DTYPE> 
void swap(DTYPE &x, DTYPE &y) {
    DTYPE tmp;
    tmp = x;
    x = y;
    y = tmp;
}


