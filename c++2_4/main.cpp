#include <iostream>
#include <bitset>
#include <list>

using namespace std;
int main() {
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int n;
        bitset<20> nb;
        cin>>n;
        nb=n;
        list<int> list1;
        for(int i=0;i<nb.size();i++){
            if(nb.test(i)){
                list1.push_back(i);
            }
        }
        list<int>::iterator it=list1.begin();
        for(;it!=(--list1.end());it++){
            cout<<*it<<" ";
        }
        cout<<list1.back()<<endl;

    }
    return 0;
}