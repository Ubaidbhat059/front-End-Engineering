#include <iostream>
using namespace std;

int main() {
    int a = 4;
    
    
    for (int i = 1; i <= 10; i++) {
        cout << a << " x " << i << " = " << a * i << endl;
    }

    cout << "\nExtra Loop (Multiplying by 4 each time):" << endl;
    for (int i = 4; i < 50; i = i * 4) {
        cout << i << endl;
    }

    return 0;
}
