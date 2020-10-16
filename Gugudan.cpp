#include <iostream>
using namespace std;

void Gugudan(int n) {
    for (int i = 1; i < 10; i++) {
        cout << n << " * " << i << " = " << n*i << "\t";
    }
    cout << endl;
}

int main() {
    for (int i = 1; i < 9; i++) {
        Gugudan(i);
    }
    return 0;
}