#include <iostream>
using namespace std;
int count;
int m=1;
int main() {
    int n;
    cin>>n;
    for (int i = 0; i <n; i++) {
        int num;
        cin>>num;
        for (int j = 0; j <num; j++) {
            string string1;
            cin>>string1;
            if (string1=="sheep"){
                count++;
            }
        }
        cout<<"Case "<<m<<":"<<" This list contains "<<count<<" sheep."<<endl;
        if(m!=n)cout<<endl;
        count=0;
        m++;
    }
    return 0;
}