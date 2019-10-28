#include <iostream>
#include <string>

using namespace std;

class Player {

private:
    //attributes
        string name;
        int health;
        int experience_points;
public:
    //methods
        void talk(string message){

            cout << name << " says " << message << endl;
        }
        bool is_dead();
};

class Account {

private:
    //attributes
        string name;
        double balance;
public:
    //methods
        void set_balance(double bal){
            
            balance = bal;
        }
        double get_balance(){
            
            return balance;
        }
        void deposit(double amount){

            balance += amount;
        }
        void withdraw(double amount){

            balance -= amount;
        }
};