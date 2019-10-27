#include <iostream>

using namespace std;
//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION PROTOTYPE BELOW THIS LINE----
void print(const int[], const size_t);

int *apply_all(int[], const size_t);

//----WRITE YOUR FUNCTION PROTOTYPE ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----


int main() {
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    const size_t array1_size = 5;
    const size_t array2_size = 3;

    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {10, 20, 30};

    cout << "Array 1: ";
    print(array1, array1_size);

    cout <<  "Array 2: ";
    print(array2, array2_size);

    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t result_size {array1_size * array2_size};

    cout <<  "Results: ";
    print(results, result_size);

    cout << endl;
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return 0;
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

void print(const int[], const size_t) {
    
}

int *apply_all(int[], const size_t) {
    
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----