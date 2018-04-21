#include <iostream>
using namespace std;
void judge(int n);
static int count=1;
int main() {
    int n;
    cin>>n;
    judge(n);

    return 0;
}
void judge(int n){
    if(n==0){
        return;
    }
    if(n==1){
        cout<<count<<endl;
        count=1;
        int x;
        cin>>x;
        judge(x);
    }
    else if(n%2==0){
        n=n/2;
        count++;
        judge(n);
    } else{
        n=3*n+1;
        count++;
        judge(n);
    }
}