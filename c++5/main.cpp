#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int method1(string string1);

int main() {
    int N;
    string a;
    stringstream stringstream1;
    getline(cin, a);
    stringstream1 << a;
    stringstream1 >> N;
    for (int i = 0; i < N; i++) {
        string x;
        getline(cin, x);
        int n = method1(x);
        cout << i + 1 << " "<<n<<endl;
    }
    return 0;
}

int method1(string string1) {
    int leng = string1.size();
    int count = 0;
    int x = 0;
    for (int i = 0; i < leng; i++) {
        if (string1[i] == '[') {
            count++;
        }
        if (string1[i] == ']') {
            count--;
        }
        if (x < count) {
            x = count;
        }
    }
    int result = pow(2, x);
    return result;
}