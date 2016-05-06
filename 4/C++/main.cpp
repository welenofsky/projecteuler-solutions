#include <iostream>

using namespace std;

bool isPalindrome(unsigned int &res);

int main(int argc, char* argv[])
{
    unsigned int result, x, y, largest=0, numbers[2]={100, 100};

    cout << "Now computing the largest palindrome...\n";
    for (x = 100; x <= 999; x++) {
        for (y = 100; y <= 999; y++) {
            result = numbers[0] * numbers[1];
            if(isPalindrome(result) == true)
                if (result > largest)
                    largest = result;
            numbers[1] = y;
        }
        numbers[0] = x;
    }
    cout << largest << " is the largest palindrome\n";
    return 0;
}

bool isPalindrome(unsigned int &res) {
    unsigned int *result = &res;
    int ln, fn;

    if (*result < 99999) {
        ln = *result % 100;
        fn = *result / 1000;
        if ((ln % 10) == (fn / 10)) {
            if((ln / 10) == (fn % 10)) {
                return true;
            }
        }
        return false;
    } else if(*result > 99999 && *result < 998002) {
        ln = *result % 1000;
        fn = *result / 1000;
        if ((fn / 100) == (ln % 10)) {
            fn = fn % 100;
            ln = ln / 10;
            if ((ln % 10) == (fn / 10)) {
                if((ln / 10) == (fn % 10)) {;
                    return true;
                }
            }
        }
        return false;
    } else {
        return false;
    }
    delete result;
}