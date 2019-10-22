#include <iostream>

using namespace std;

int for_loop_pre(int max_iteration) {
    for (int i = 1; i <= max_iteration; ++i) {
        cout << i << endl;
    }
    return NULL;
}

int for_loop_post(int max_iteration) {
    for (int i = 1; i <= max_iteration; i++) {
        cout << i << endl;
    }
    return NULL;
}

int main() {

    int max;
    cout << "Enter the max number of iterations: ";
    cin >> max;

    cout << "Prefix Increment Loop" << endl;
    cout << "=====================" << endl;
    for_loop_pre(max);
    cout << "Postfix Increment Loop" << endl;
    cout << "=====================" << endl;
    for_loop_post(max);
    return 0;
}