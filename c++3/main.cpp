#include <iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        bool* flag=new bool[x];
        for(int j=0;j<x;j++){
            flag[j]= false;
        }
        for(int j=1;j<x+1;j++){
            for(int k=1;k<x+1;k++){
                if(k%j==0){
                    flag[k-1]=!flag[k-1];
                }
            }
        }
        int count=0;
        for(int j=0;j<x;j++){
            if(flag[j]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}