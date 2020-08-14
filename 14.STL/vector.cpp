#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> a, vector<int>::iterator p) {
    cout << " ";
    for(p = a.begin(); p != a.end(); p++){
        cout << *p << " ";
    }
}
int main(void) {
    // insert code here...
    int tmp[] = {1,4,2,6};
    vector<int> a (tmp, tmp+4);
    vector<int>::iterator p ;
    
    cout << "< INSERT >" << endl;
    a.insert(a.begin()+2,33);
    print(a,p);
    cout << endl;
    
    a.insert(a.begin()+4, 2, 99);
    print(a,p);
    cout << endl;
    
    a.insert(a.begin(), a.begin(), a.begin()+2); // [a.begin(), a.begin()+2) // a.begin() a.begin()+1
    print(a,p);
    cout << endl;
    
    cout << "< ERASE > " << endl;
    a.erase(a.begin(), a.begin()+3);
    print(a,p);
    cout << endl;
    
    cout << "< PUSH_BACK > " << endl;
    a.push_back(7);
    print(a,p);
    cout << endl;
    
    cout << "< FRONT > " << endl;
    cout << " First Element: " << a.front() << endl;
    
    cout << "< CLEAR > " << endl;
    a.clear();
    cout << " SIZE: " << a.size() << endl;
    return 0;
}
