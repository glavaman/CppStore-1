#ifndef User_hpp
#define User_hpp

#include<iostream>
#include<string>
using namespace std;

class User {
private:
    string name;
    string adress;
    double balance;
    double spent;
    
public:
    User(string name, string adress, double balance, double spent) {
        this->name = name;
        this->adress = adress;
        this->balance = balance;
        this->spent = spent;
    }
    
    void ReduceBalance(double price) {
        balance -= price;
        spent += price;
    }
    
    void Print() {
        cout << name << "\t" << adress << "\t" << balance << "\t" << spent << endl;
    }
};


#endif /* User_hpp */
