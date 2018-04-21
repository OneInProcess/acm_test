#include <iostream>
using namespace std;
void method1();
void method2();
void method3();

void judge(int n){
    if(n==1){
        method1();
    }
    if(n==2){
        method2();
    }
    if(n==3){
        method3();
    } else{

    }
}
int main() {
    int n;
    cin>>n;
    judge(n);
    return 0;
}
void method1(){
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        for(int j=0;j<x-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    int n;
    cin>>n;
    judge(n);
}
void method2(){
    int num;
    cin>>num;
    int line;
    cin>>line;
    for(int i=0;i<line;i++){
        for(int j=0;j<line-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<num;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    int n;
    cin>>n;
    judge(n);

}
void method3(){
    int num;
    cin>>num;
    int line;
    cin>>line;
    for(int i=0;i<line;i++){
        for(int j=0;j<num;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    int n;
    cin>>n;
    judge(n);

}