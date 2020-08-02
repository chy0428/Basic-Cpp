#include <iostream>

using namespace std;

class Animal {
public:
    void Information() {
        cout << "Animal Class" << endl;
    }
};

class Dog : public Animal {
public:
    void Information(){
        cout << "Dog Class" << endl;
    }
    void Cry() {
        cout << "Bark Bark !!" << endl;
    }
};

class Cat : public Animal {
public:
    void Information(){
        cout << "Cat Class" << endl;
    }
    void Cry() {
        cout << "Miaow ~!!" << endl;
    }
};
int main(void){
    // Polymorphism (다형성)
    
    cout << "<UP CASTING>" << endl;
    Animal *dog = new Dog(); // Up Casting
    Animal *cat = new Cat(); // Up Casting
    
    dog->Information();
    cat->Information();
    
//   dog->Cry(); // Error !!
    
    cout << endl;
    cout << "<DOWN CASTING>" << endl;
    Dog *d = (Dog*)dog; // Down Casting
    Cat *c = (Cat*)cat; // Down Casting
    
    d->Information();
    d->Cry();
    cout << endl;
    c->Information();
    c->Cry();
    
    delete dog;
    delete cat;
    return 0;
}
