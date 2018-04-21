#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int N;
    string a;
    getline(cin,a);
    stringstream stringstream1;
    stringstream1<<a;
    stringstream1>>N;
    for (int i = 0; i < N ; i++) {
        string x = "";
        getline(cin, x);
        if(x.find(" ")<0){

        } else {
            int k = 0;
            x.append(" ");
            int l = x.find(" ", k);
            while (x.find(" ", k) >= 0) {
                int l = x.find(" ", k);
                int length = (l + k) / 2;
                for (int m = k; m < length; m++) {
                    char temp = x[m];
                    x[m] = x[l - (m - k) - 1];
                    x[l - (m - k) - 1] = temp;

                }
                k = l + 1;
                if (l < 0) {

                    break;
                }
            }
            int longth=x.size();
            x.erase(longth-1,1);
            cout << x << endl;
        }
    }
    return 0;
}