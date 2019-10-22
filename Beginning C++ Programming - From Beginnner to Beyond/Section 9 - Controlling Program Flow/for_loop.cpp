#include <iostream>

using namespace std;

int for_loop_example(int max_iteration) {
    for (int i = 1; i <= max_iteration; i++) {
        cout << i << endl;
    }
    return NULL;
}

int main() {

    int max;
    cout << "Enter the max number of iterations: ";
    cin >> max;

    for_loop_example(max);
    return 0;
}