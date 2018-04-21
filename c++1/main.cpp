#include <iostream>
#include <sstream>

using namespace std;
int main() {
    string str1;
    getline(cin,str1);
//    cout<<str1;
    string list1[3];
    int j[]{0,0,0,0,0};
    list1[0].append(str1.substr(0,3));
    list1[1].append(str1.substr(4,3));
    list1[2].append(str1.substr(8,3));
//    cout<<list1[2];
    for(int i=0;i<3;i++){
        string str2="CRASH ";
        stringstream stringstream1;
        stringstream1<<list1[i];
        stringstream1>>j[i];
        stringstream1.clear();
//        cout<<j[i];
        if(j[i]<=168){
            cout<<str2+list1[i]<<endl;
            break;
        }
    }
    if(j[0]>168&j[1]>168&j[2]>168){
        cout<<"NO CRASH"<<endl;
    }

    return 0;
}