#include <iostream>
#include <cmath>

using namespace std;

void method1(int x, int y);

int main() {
    int x;
    cin >> x;
    int y;
    cin >> y;
    method1(x, y);
    return 0;
}

void method1(int x, int y) {
    if (x == 0 & y == 0) {
        return;

    } else {
        int j = 0;
        for (int i = 1; i < 11; i++) {
            int num=1;
            for(int a=0;a<i;a++){
                num=10*num;
            }
            int modx = x % num;
            int mody = y % num;
            if (modx + mody >= num) {
                j = j + 1;
            }
        }
        if(j==0){
            cout<<"No carry operation."<<endl;
        } else if(j==1){
            cout<<j<<" carry operation."<<endl;
        } else{
            cout<<j<<" carry operations."<<endl;
        }
    }
    int m;
    cin >> m;
    int n;
    cin >> n;
    method1(m, n);
}