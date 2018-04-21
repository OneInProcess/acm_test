#include <iostream>
#include <cstdlib>

using namespace std;
void judge(string string1);
void method1(string string1);
int main() {
    string string1;
    getline(cin,string1);
    judge(string1);
}
void judge(string string1){
    if(string1[0]=='#'){
        exit(0);
    } else{
        method1(string1);
    }
}
void method1(string string1){
    int sum=0;
    for(int i=0;i<string1.size();i++){
        if(string1[i]==' '){

        } else{
            sum=sum+(i+1)*((int)string1[i]-64);
        }
    }
    cout<<sum<<endl;
    string1="";
    getline(cin,string1);
    judge(string1);
}