#include <stack>
#include <iostream>
#include <cstdlib>

using namespace std;

void judge(int n);

void method1(int n);

int main() {
    int n;
    cin >> n;
    judge(n);
    return 0;
}

void judge(int n) {
    if (n == 0) {
        cout << endl;
        int x;
        cin >> x;
        if (x == 0) {
            exit(0);
        } else {
            judge(x);
        }
    } else {
        method1(n);
    }
}

void method1(int n) {
    int x;
    cin >> x;
    if (x == 0) {
        cout << endl;
        int a;
        cin >> a;
        if (a == 0) {
            exit(0);
        } else {
            method1(a);
        }
    } else {
        stack<int> s1;
        int *array = new int[n];
        array[0] = x;
        for (int i = 1; i < n; i++) {
            cin >> array[i];
        }
        int temp;
        int count = n;
        s1.push(0);
        s1.push(array[n - 1]);
        int i = n - 2;
        while (i >= 0) {
            while (array[i] < s1.top()) {
                temp = s1.top();
                s1.pop();
                if (count != temp) {
                    cout << "No" << endl;
                    method1(n);
                }
                count--;
            }
            s1.push(array[i]);
            i--;
        }
        while (s1.size() != 1) {
            temp = s1.top();
            s1.pop();
            if (count != temp) {
                cout << "No" << endl;
                method1(n);
            }
            count--;
        }
        cout << "Yes" << endl;
        method1(n);
    }
}
