#include <iostream>
#include <string>

using namespace std;

int main() {

    string input_str;
    cout << "Enter a string: ";
    cin >> input_str;
    // input_str = "ABC";

    int max_palindrome_length = input_str.size() * 2 - 1;
    int current_palindrome_length = 1;
    string available_char{};

    for (char letter: input_str){
        available_char.push_back(letter);
        int padding_size = (max_palindrome_length - current_palindrome_length) / 2;
        string padding (padding_size, ' ');
        string palindrome_str{};

        for (int i=1; i<=current_palindrome_length; ++i) {
            int index = current_palindrome_length % i;
            
            cout << current_palindrome_length << " % " << i << " = " << index << endl;
            palindrome_str.push_back(available_char.at(index));
        }
        cout <<endl;
        cout << padding + palindrome_str + padding << endl;
        current_palindrome_length += 2;
    }
        
    return 0;
}