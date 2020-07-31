#include <iostream>

using namespace std;

class Person {
public:
    string name;
    int age ;
    int weight;
    int height ;
    
    Person(string name , int age , int w, int h) { // Constructor
        this->name = name;
        this->age = age;
        weight = w;
        height = h;
    }
    
    void userInfo() {
        cout << "NAME : " << name << endl;
        cout << "AGE : " << age << endl;
        cout << "WEIGHT : " << weight << endl;
        cout << "HEIGHT : " << height << endl;
    }
    
    ~Person();
};

Person::~Person(){
    cout << "the object delete !" << endl;
}

int main(void){
    Person *user1 = new Person("Rusian",25,183,72);
    Person *user2 = new Person("Pepe",28,188,83);
    
    user1->userInfo();
    cout << endl;
    user2->userInfo();
    
    user1->~Person();
    user2->~Person();
    return 0;
}
