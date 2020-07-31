#include <iostream>
#include <string>

using namespace std;

class Person{
private:
    string name;
    int age;
public:
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
    void displayAge(){
        cout << "My age is "<< age << endl;
    }
    void overRidingFunc();
};

void Person::overRidingFunc(){
    cout << "This function exists in Parent class(super class)" << endl;
}

class Student : public Person{
private:
    int student_id;
public:
    Student(int id, string name, int age);
    void overRidingFunc();
};
void Student::overRidingFunc(){
    cout << "This is Overriding." << endl;
    cout << "This function exists in child class(subClass)" << endl;
}

Student::Student(int id, string name, int age):Person(name,age){
    student_id = id;
}
int main(void){
    Student student(12345678,"Pepe", 30);
    
    student.displayAge(); // method of Person class
   
    student.Person::overRidingFunc();
    student.overRidingFunc(); // overriding
}
