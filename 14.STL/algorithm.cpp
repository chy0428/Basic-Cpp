#include <iostream>
#include <algorithm>

using namespace std;

void print(int arr[], int size){
    for(int i = 0 ; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(void){
    int arr[] = { 1, 5, 4, 2, 8, 9, 4, 10};
    int arr2[5];
    int size = 8;
    
    cout << "REVERSE : " ;
    reverse(arr, arr+size);
    print(arr, size);
    
    sort(arr,arr+size);
    
    cout << "SORT : ";
    print(arr, size);
    
    sort(arr,arr+size,greater<int>());
    
    cout << "SORT : ";
    print(arr, size);
    
    cout << "COUNT (4) : " ;
    cout << count(arr, arr+size, 4 ) << endl;
    
    cout << "REPACLE (2->11) : " ;
    replace(arr, arr+size, 2, 11);
    print(arr,size);
    
    cout << "COPY : ";
    copy(arr+2,arr+7, arr2);
    print(arr2, sizeof(arr2)/sizeof(int));
    return 0;
}
