#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<string> stackback;
    stack<string> stackfor;
    stackback.push("http://www.acm.org/");
    string temp;
    cin >> temp;
    while (temp != "QUIT") {
        if (temp == "VISIT") {
            string string1;
            cin >> string1;
            stackback.push(string1);
            cout << stackback.top() << endl;
            while (stackfor.size() != 0) {
                stackfor.pop();
            }
            cin >> temp;
        } else if (temp == "BACK") {
            if (stackback.size() > 1) {
                stackfor.push(stackback.top());
                stackback.pop();
                cout << stackback.top() << endl;
                cin >> temp;
            } else{
                cout<<"Ignored"<<endl;
                cin >> temp;
            }
        } else{
            if(stackfor.size()==0){
                cout<<"Ignored"<<endl;
                cin >> temp;
            } else{
                stackback.push(stackfor.top());
                stackfor.pop();
                cout << stackback.top() << endl;
                cin >> temp;
            }
        }
    }
    return 0;
}