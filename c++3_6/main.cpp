#include <iostream>
using namespace std;
void method(string string1);
int method2(string string2);
int main() {
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        string string1;
        cin>>string1;
        method(string1);
    }
    return 0;
}
void method(string string1){
    int sum=0;
    string string2="";
    for(int i=0;i<string1.size();i++){
        if(string1[i]=='O'){
            string2=string2+'O';
        } else{
            sum=sum+method2(string2);
            string2="";
        }
        if(i==string1.size()-1){
            sum=sum+method2(string2);
        }
    }
    cout<<sum<<endl;
}
int method2(string string2){
    int sum=0;
    for(int i=0;i<string2.size();i++){
        sum=sum+i+1;
    }
    return sum;
}