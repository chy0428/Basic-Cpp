#include <iostream>

using namespace std;

class Person {
public:
    string name;
    int age ;
    int weight;
    int height ;
    
    void userInfo() {
        cout << "NAME : " << name << endl;
        cout << "AGE : " << age << endl;
        cout << "WEIGHT : " << weight << endl;
        cout << "HEIGHT : " << height << endl;
    }
};
int main(void){
    Person user1, user2;
    user1.age = 25 ;
    user1.weight = 72;
    user1.height = 183;
    user1.name = "Rusian" ;
    
    user2.age = 28;
    user2.weight = 83;
    user2.height = 188;
    user2.name = "Pepe";
    
    user1.userInfo();
    cout << endl;
    user2.userInfo();
    return 0;
}
