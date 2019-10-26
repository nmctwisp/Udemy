#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>

using namespace std;

int main() {

    int score = 100; // container
    int *score_ptr = &score;

    // *pointer.value = container.value
    cout << "pointer.dereferenced_value = " << *score_ptr << endl; // 100
    cout << "container.value = " << score << endl; // 100
    
    // pointer_value = container.address 
    cout << "container.address = " << &score << endl;
    cout << "pointer.value = " << score_ptr << endl;
    
    // the pointer has it's own memory address
    cout << "pointer.address = " << &score_ptr << endl;

    *score_ptr = 200;

    cout << "\npointer.dereferenced_value = " << *score_ptr << endl; // 22100
    cout << "score.value = " << score << endl; // 200
    cout << "score.address = " << &score << endl;
    cout << "Pointer.value = " << score_ptr << endl;
    cout << "pointer.address = " << &score_ptr << endl;
    cout << endl;
    // EXAMPLE 2
    double lowtemp = 37.4;
    double hightemp = 100.7;
    double *temp_ptr = &hightemp;


    double lukewarmtemp = 65; 

    cout << "temp_ptr.dereferenced_value = " << *temp_ptr << endl; // 100
    cout << "hightemp.value = " << hightemp << endl; // 100
    cout << "hightemp.address = " << &hightemp << endl;
    cout << "temp_ptr.value = " << temp_ptr << endl;
    cout << "temp_ptr.address = " << &temp_ptr << endl;
    cout << "lowtemp.value = " << lowtemp << endl;
    cout << "lowtemp.address = " << &lowtemp << endl;
    cout << "lukewarmtemp.value = " << lukewarmtemp << endl;
    cout << "lukewarmtemp.address = " << &lukewarmtemp << endl;

    temp_ptr+=1; // increments the address. this should only ever be done if you know what is in the immediate memory block 

    cout << "\ntemp_ptr.dereferenced_value = " << *temp_ptr << endl; // 100
    cout << "hightemp.value = " << hightemp << endl; // 100
    cout << "hightemp.address = " << &hightemp << endl;
    cout << "temp_ptr.value = " << temp_ptr << endl;
    cout << "temp_ptr.address = " << &temp_ptr << endl;
    cout << "lowtemp.value = " << lowtemp << endl;
    cout << "lowtemp.address = " << &lowtemp << endl;
    cout << "lukewarmtemp.value = " << lukewarmtemp << endl;
    cout << "lukewarmtemp.address = " << &lukewarmtemp << endl;

    *temp_ptr = lowtemp;

    cout << "\ntemp_ptr.dereferenced_value = " << *temp_ptr << endl; // 100
    cout << "hightemp.value = " << hightemp << endl; // 100
    cout << "hightemp.address = " << &hightemp << endl;
    cout << "temp_ptr.value = " << temp_ptr << endl;
    cout << "temp_ptr.address = " << &temp_ptr << endl;
    cout << "lowtemp.value = " << lowtemp << endl;
    cout << "lowtemp.address = " << &lowtemp << endl;
    cout << "lukewarmtemp.value = " << lukewarmtemp << endl;
    cout << "lukewarmtemp.address = " << &lukewarmtemp << endl;

    hightemp+=1;
    
    cout << "\ntemp_ptr.dereferenced_value = " << *temp_ptr << endl; // 100
    cout << "hightemp.value = " << hightemp << endl; // 100
    cout << "hightemp.address = " << &hightemp << endl;
    cout << "temp_ptr.value = " << temp_ptr << endl;
    cout << "temp_ptr.address = " << &temp_ptr << endl;
    cout << "lowtemp.value = " << lowtemp << endl;
    cout << "lowtemp.address = " << &lowtemp << endl;
    cout << "lukewarmtemp.value = " << lukewarmtemp << endl;
    cout << "lukewarmtemp.address = " << &lukewarmtemp << endl;

    lowtemp+=1;

    cout << "\ntemp_ptr.dereferenced_value = " << *temp_ptr << endl; // 100
    cout << "hightemp.value = " << hightemp << endl; // 100
    cout << "hightemp.address = " << &hightemp << endl;
    cout << "temp_ptr.value = " << temp_ptr << endl;
    cout << "temp_ptr.address = " << &temp_ptr << endl;
    cout << "lowtemp.value = " << lowtemp << endl;
    cout << "lowtemp.address = " << &lowtemp << endl;
    cout << "lukewarmtemp.value = " << lukewarmtemp << endl;
    cout << "lukewarmtemp.address = " << &lukewarmtemp << endl;

    temp_ptr = &lukewarmtemp;

    cout << "\ntemp_ptr.dereferenced_value = " << *temp_ptr << endl; // 100
    cout << "hightemp.value = " << hightemp << endl; // 100
    cout << "hightemp.address = " << &hightemp << endl;
    cout << "temp_ptr.value = " << temp_ptr << endl;
    cout << "temp_ptr.address = " << &temp_ptr << endl;
    cout << "lowtemp.value = " << lowtemp << endl;
    cout << "lowtemp.address = " << &lowtemp << endl;
    cout << "lukewarmtemp.value = " << lukewarmtemp << endl;
    cout << "lukewarmtemp.address = " << &lukewarmtemp << endl;
    return 0;
    //reinterpret_cast
}
