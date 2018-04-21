#include <iostream>
#include <sstream>
#include <list>

using namespace std;
int method1(int array1[],int length);
int findmin(list<int> list1);
int main() {
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        int* array=new int[x];
        for(int j=0;j<x;j++){
            int y;
            cin>>y;
            array[j]=y;
        }
        int num=method1(array,x);
        string p="Scenario";
        p=p+" "+"#";
        cout<<p<<i+1<<":"<<endl;
        cout<<num<<endl;
        cout<<endl;
    }
    return 0;
}
int method1(int array1[],int length){
    int num=0;
    int x=0;
    int min=array1[0];
    for(int i=1;i<length;i++) {
//        cout<<array1[i]<<endl;
        if (array1[i] < min) {
            min = array1[i];
            num = i;
        }
    }
    x=num;
    //cout<<num<<endl;
    list<int> list1;
    for(int i=0;i<length;i++){
        list1.push_back(array1[i]);
    }
    for(int i=1;i<length;i++){
        list<int>::iterator it=list1.begin();
        advance(it,x);
        list1.erase(it);
        x=findmin(list1);
        num=num+x;
    }

//    cout<<num<<endl;
    return num;
}
int findmin(list<int> list1){
    list<int>::iterator it=list1.begin();
    int* array=new int[list1.size()];
    int i=0;
    int num=0;
    for(;it!=list1.end();it++,i++){
        array[i]=*it;
    }
    int x=array[0];
    for(int j=1;j<list1.size();j++){
        if(array[j]<x){
            x=array[j];
            num=j;
        }
    }
    //cout<<num<<endl;
    return num;
}
