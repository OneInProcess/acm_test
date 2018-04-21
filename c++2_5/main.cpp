#include <iostream>
#include <sstream>

using namespace std;

void method1(long n);
void method2(string x);

int main() {
    string x;
    cin >> x;
    method2(x);
    return 0;
}

void method1(long n) {
    if (n <= 0) {
        return;
    } else if (n < 10) {
        cout << n << endl;
        string x;
        cin >> x;
        method2(x);
    } else {
        long num = n % 10;
        while (n > 9) {
            n = n / 10;
            num = num + n % 10;
        }
        method1(num);
    }
}
void method2(string x){

    long temp;
    long n = 0;
    for (int i = 0; i < x.size(); i++) {
        stringstream stringstream1;
        stringstream1 << x[i];
        stringstream1 >> temp;
        n = n + temp;
    }
    method1(n);
}

