#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num;
    int rev = 0;

    while (num > 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    return original == rev;
}

int main() {
    int min = 100, max = 150;

    for (int i = min; i <= max; i++) {
        if (isPalindrome(i))
            cout << i << " ";
    }

    return 0;
}