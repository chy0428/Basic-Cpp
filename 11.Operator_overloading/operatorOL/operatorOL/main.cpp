#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    int ton ;
    int kg ;
    int speed ;
    string name;
public:
    Car(int t, int kg, int s, string n){ // constructor
        ton = t;
        this->kg = kg;
        speed = s ;
        name = n;
    }
    
//    int operator + (const Car& car);
//    friend int operator+ (const Car& car1, const Car& car2);
    friend int operator+ (const Car& car1, const Car& car2){ // 전역 함수
        int w = car1.ton * 1000 + car1.kg + car2.ton * 1000 + car2.kg;
        return w ;
    }

    void speedUp(){
        speed += 10;
    }
    void speedDown(){
        if(speed >= 0 ){
            speed -= 10;
        }
    }
    int getWeight(){
        int weight = ton * 1000 + kg;
        return weight;
    }
    int getSpeed(){
        return speed;
    }
};

//int operator+ (const Car& car1, const Car& car2){ // 전역 함수
//    int w = car1.ton * 1000 + car1.kg + car2.ton * 1000 + car2.kg;
//    return w ;
//}

//int Car::operator + (const Car &car){ // 멤버 함수
//    int w = getWeight() + car.ton * 1000 + car.kg ;
//    return w;
//}

int main(void){
    Car *car1 = new Car(1,400,60, "BMW");
    Car *car2 = new Car(1,600,40, "Benz");
    
    int weight = *car1+*car2; // 1400 + 1600
    
    cout << weight << endl;
    return 0;
}
