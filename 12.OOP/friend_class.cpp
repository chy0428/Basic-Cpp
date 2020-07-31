#include <iostream>

using namespace std ;

class buyer{
private:
    int haveMoney;
public:
    buyer(int money){
        haveMoney = money;
    }
    void showMoney() {
        cout << "Buyer Money: " << haveMoney << endl;
    }
    friend class seller ; // friend class
};

class seller {
private:
    int totalMoney;
public:
    seller(int money){
        totalMoney = money;
    }
    void showMoney() {
        cout << "Seller Money: " << totalMoney << endl;
    }
    void sellProduct(buyer& b , int price){ //
        this->totalMoney += price;
        b.haveMoney -= price;
    }
};
int main(void){
    seller *SELLER = new seller(100000) ;
    buyer *BUYER = new buyer(30000);
    
    SELLER->showMoney();
    BUYER->showMoney();
    
    cout << "buyer bought the book of seller" << endl;
    SELLER->sellProduct(*BUYER, 20000);
    
    SELLER->showMoney();
    BUYER->showMoney();
    
    return 0;
}
