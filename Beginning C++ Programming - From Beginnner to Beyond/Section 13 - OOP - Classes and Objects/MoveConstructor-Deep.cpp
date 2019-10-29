#include <iostream>

using namespace std;

class Move{
private:
    int *data;
public:
    void set_data_value(int d);
    int get_data_value();
    // Constructor
    Move(int d);
    // Copy Constructor
    Move(const Move &source);
    // Move Constructor
    Move(Move &&source) noexcept;
    //
    ~Move();
};

void Move::set_data_value(int d){
    *data = d;
}

int Move::get_data_value(){
    return *data;
}

Move::Move(int d){
    data = new int;
    *data = d;
}

Move::Move(const Move &source):
    Move{*source.data}{
        cout << "Copy Constructor - Move Copy" << endl;
    }

Move::Move(Move &&source) noexcept:
    data{source.data}{
        source.data = nullptr;
        cout << "Move Constructor - moving resource: " << *data << endl;
}

Move::~Move(){
    if (data != nullptr){
        cout << "Destructor releases data for "<< *data << endl;
    }
    else {
        cout << "Destructor releases data for nullptr" << endl;
    }
    delete data;
}

void display_Move(Move s){
    cout << s.get_data_value() << endl;
}

int main(){
    Move obj1 = 100;
    display_Move(obj1);

    Move obj2 = obj1;
    obj2.set_data_value(1000);

    return 0;
}