#include <iostream>

using namespace std;

class Animal {
public:
    virtual ~Animal() {}; // 가상 소멸자 선언
    virtual void Cry()=0;
};

class Dog : public Animal {
public:
    virtual void Cry() {
        cout << "Bark Bark !!" << endl;
    }
};

class Cat : public Animal {
public:
    virtual void Cry() {
        cout << "Miaow ~!!" << endl;
    }
};
int main(void){
    // Polymorphism (다형성)
    Animal *dog = new Dog();
    Animal *cat = new Cat();
    
    dog->Cry();
    cat->Cry();
    
    delete dog;
    delete cat;
    return 0;
}