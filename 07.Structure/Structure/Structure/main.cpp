#include <iostream>
#include <string>
using namespace std;

struct student{
    int s_id ;
    int age;
    string name;
    void introduce (){
        cout << "My name is " << name << endl;
        cout << "I\'m " << age << " years old "<< endl;
    }
};
int main(void){
    student s1 ;
    s1.age = 20;
    s1.s_id = 22029312;
    s1.name = "Linus";
    s1.introduce();
    
    cout << endl;
    
    student s2 = {22,21808437,"Tuzz"};
    s2.introduce();
    
    cout << endl;
    
    student *s3= new student;
    s3->age = 21;
    s3->s_id = 21904853;
    s3->name = "Tobarz";
    s3->introduce();
    
    return 0;
}
