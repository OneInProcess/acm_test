#include <iostream>
using namespace std;
int method1(int n);
int main() {
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        int num =method1(n);
        cout<<"Scenario #"<<i+1<<":"<<endl;
        cout<<num<<endl;
        cout<<endl;
    }
    return 0;
}
int method1(int n){
    int* array=new int[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int count=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(array[i]<array[j]){
                count++;
            }
        }
    }
    return count;
}