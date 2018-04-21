#include <iostream>
#include <sstream>

using namespace std;
string method1(string string1,string string2);
string method2(string string1,int n);
int num=0;
int main() {
    string string1="";
    cin>>string1;
    string string2="";
    cin>>string2;
    if(string2.size()==1&&string2[0]=='0'){
        int k=0;
        while (string1[k]=='0'){
            string1.erase(k,1);
        }
        if(string1.size()==0){
            string1="0";
        }
        for(int i=0;i<string1.size();i++){
            int xxx;
            stringstream stringstream1;
            stringstream1<<string1[i];
            stringstream1>>xxx;
            cout<<xxx;
        }
        cout<<endl;
    } else{
        while(!(string2.size()==1&&string2[0]=='0')){
            string1=method1(string1,string2);
            string2="";
            cin>>string2;
            num=0;
        }
        for(int i=0;i<string1.size();i++){
            int xxx;
            stringstream stringstream1;
            stringstream1<<string1[i];
            stringstream1>>xxx;
            cout<<xxx;
        }
        cout<<endl;
    }
    return 0;
}
string method1(string string1,string string2){
    int k=0;
    while (string1[k]=='0'){
        string1.erase(k,1);
    }
    if(string1.size()==0){
        string1="0";
    }
    int l=0;
    while(string2[l]=='0'){
        string2.erase(l,1);
    }
    if(string2.size()==0){
        string2="0";
    }
    int length1=string1.size();
    int length2=string2.size();
    int length=length2;
    if(length1<length2){
        string temp=string2;
        string2=string1;
        string1=temp;
        length=length1;
        int temp1=length2;
        length2=length1;
        length1=temp1;
    }
    for(int i=0;i<length;i++){
        char x1=string1[length1-1-i];
        char x2=string2[length2-1-i];
        int x,y;
        stringstream stringstream1;
        stringstream1<<x1;
        stringstream1>>x;
        stringstream1.clear();
        stringstream1<<x2;
        stringstream1>>y;
        stringstream1.clear();
        int z=x+y+num;
        int z1=z%10;
        num=z/10;
        char aa;
        stringstream1<<z1;
        stringstream1>>aa;
        string1[length1-1-i]= aa;
        if ((i==length-1)&&num>0){
            string1=method2(string1,length);
        }
    }
    return string1;
}
string method2(string string1,int n){
    int length=string1.size();
    while (num>0){
        char a=string1[length-n-1];
        int x;
        stringstream stringstream1;
        stringstream1<<a;
        stringstream1>>x;
        stringstream1.clear();
        int z=x+num;
        int z1=z%10;
        num=z/10;
        char aa;
        stringstream1<<z1;
        stringstream1>>aa;
        string1[length-n-1]= aa;
        n=n+1;
        if(n==length+1){
            string string2="1";
            string1=string2+string1;
        }
    }
    return string1;
}