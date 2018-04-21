#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        double num;
        cin>>num;
        double x=log2(num);
        int count;
        if(x-int(x)==0){
            count=int(x);
        } else{
            count=int(x)+1;
        }
        cout<<count<<endl;
    }
    return 0;
}