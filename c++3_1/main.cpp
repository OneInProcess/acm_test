#include <iostream>

using namespace std;

void method1(int n);

int main() {
    int n;
    while (cin >> n) {
        int sum = 1;
        for (int j = 0; j < n; j++) {
            sum = sum * 3;
        }
        method1(sum);
        cout<<endl;
    }
    return 0;
}

void method1(int n) {
    if (n == 1) {
        cout << "-";
    } else {
        method1(n / 3);
        for (int i = 0; i < n / 3; i++) {
            cout << " ";
        }
        method1(n / 3);
    }
}