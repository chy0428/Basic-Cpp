#include <iostream>
#include <string>

using namespace std;

int main(void){
    string str = "Hello World";
    string str2 = "Hello world!!!";
    cout << "문자열 길이: " << str.length() << endl;
    
    cout << "문자열 사이즈: " << str.size() << endl;
    
    cout << "Existing String : "<< str << endl;
    
    str.append("!!!");
    
    cout << "< append Method > : " << str << endl;
    
    str.replace(6, 1, "w");
    
    cout << "< replace Method > " << str << endl;
    
    cout << "< find Method > : " << str.find("ll") << endl;
    
    cout << "< compare Method > : ";
    if( str.compare(str2) == 0) {
        cout << "The str is same with str2" << endl;
    }
    
    cout << endl;
    cout << "< String Compare > ";
    if( str == str2) {
        cout << "This is correct !" << endl;
    }
    return 0;
}
