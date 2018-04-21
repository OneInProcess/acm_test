#include <iostream>
using namespace std;
int main() {

    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int num;
        cin>>num;
        int temp;
        for(int j=0;j<num;j++){
            if((j+1)*(j+2)/2>=num){
                temp=j+1;
                break;
            }
        }
        cout<<temp<<endl;
    }
    return 0;
}