#include <iostream>
#include <list>
#include <sstream>
#include <cstdlib>

using namespace std;
string method1(string string3);
int main() {
    string string1[256];
    int num;
    for(int i=0;i<256;i++){
        string string2="";
        getline(cin,string2);
        if(string2.substr(0,2)=="-1"){
            string1[i].append(string2);
//            cout<<string1[i];
            num=i;
            break;
        } else{
            string1[i].append(string2);
//            cout<<string1[i]<<endl;
        }
    }
    int count =0;
    for(int i=0;i<num;i++){
        if(string1[i].size() <=2){
            count++;
        }
    }
    //cout<<count;
    string string3="";
    string sum="";
    for(int i=1;i<=num;i++) {
        if (string1[i].size() >2) {
            string3=string3+","+string1[i];

        } else{
            sum=method1(string3);
            string3="";
        }
    }
    return 0;
}
string method1(string string3){
//    cout<<string3<<endl;
    int length=string3.size();
//    if(string3.substr(string3.size()-3,2)=="10"){
//        int num1=(length-1)/6;
//        string* list2=new string[num1];
//        int sum=0;
//        for(int i=0;i<num1-1;i++){
//            list2[i]=string3.substr(6*i+1,5);
//        }
//        list2[num1-1]=string3.substr(string3.size()-6,6);
//    }
//    int num1=length/6;
//    string* list2=new string[num1];
    int sum=0;
//    for(int i=0;i<num1;i++){
//        list2[i]=string3.substr(6*i+1,5);
////        cout<<list2[i]<<endl;
//    }
    int num1=0;
    for(int i=0;i<length-1;i++){
        if(string3.substr(i,1)==","){
            num1++;
        }
    }
    string* list2=new string[num1];
   int a=0;
        for(int k=0;k<length-1;k++){
            if(string3.substr(k+1,1)!=","){
            list2[a].append(string3.substr(k+1,1));
            } else{
                a++;
            }
        }

    int* nums=new int[num1];
    for(int i=0;i<num1;i++){
//        cout<<list2[i]<<endl;
        int start=list2[i].find(" ");
        int leng=list2[i].size()-start-1;
        string string1=list2[i].substr(start+1,leng);
        stringstream stringstream1;
        int j=0;
        stringstream1<<string1;
        stringstream1>>j;
        nums[i]=j;
//        cout<<nums[i]<<endl;
    }
    for(int i=num1-1;i>0;i--){
        nums[i]=nums[i]-nums[i-1];
//        cout<<nums[i];
    }
    for(int i=0;i<num1;i++){
        int end=list2[i].find(" ");
        string string1=list2[i].substr(0,end);
        stringstream stringstream1;
        int j;
        stringstream1<<string1;
        stringstream1>>j;
        sum=sum+j*nums[i];
    }
//    cout<<sum<<endl;
//    stringstream stringstream2;
//    string strings;
//    stringstream2<<sum;
//    stringstream2>>strings;
//    strings=strings+" "+"miles ";
    cout<<sum<<" miles"<<endl;

    return "";

}
