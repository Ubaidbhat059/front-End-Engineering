#include<iostream>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    cout << "Even numbers from 1 to 100:\n";
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << "\n\nPrime numbers from 1 to 100:\n";
    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}



