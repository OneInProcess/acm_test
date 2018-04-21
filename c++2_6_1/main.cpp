#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int leng;cin >> leng;
        int num;cin >> num;
        int *ant = new int[num];
        for (int j = 0; j < num; j++) cin >> ant[j];
        int *ant1 = new int[num];
        for (int j = 0; j < num; j++) ant1[j]= ant[j];
        int min;
        for(int j=0;j<num;j++){
            if((leng-ant1[j])<ant1[j]){
                ant1[j]=leng-ant1[j];
            }
        }
        min=ant1[0];
        for(int j=1;j<num;j++){
            if(ant1[j]>min){
                min=ant1[j];
            }
        }
        int max;
        for (int j = 0; j < num; j++) {
            if ((leng - ant[j]) > ant[j]) {
                ant[j] = leng - ant[j];
            }
        }
        max = ant[0];
        for (int j = 1; j < num; j++) {
            if (ant[j] > max) {
                max = ant[j];
            }
        }
        cout << min << " " << max << endl;
    }
    return 0;
}