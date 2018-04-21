#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;//组数
    cin >> N;
    for (int i = 0; i < N; i++) {
        int leng;//路线长度
        cin >> leng;
        int num;//蚂蚁数量
        cin >> num;
        int *ant = new int[num];//蚂蚁位置
        for (int j = 0; j < num; j++) {
            cin >> ant[j];
        }
        int min;//求时间最短时，最后一个下落的蚂蚁的位置
        if (num > 1) {
            int temp = static_cast<int>(abs(2 * ant[0] - leng));//判断距离中点最近的蚂蚁的位置
            for (int j = 1; j < num; j++) {
                if (static_cast<int>(abs(2 * ant[j] - leng)) < temp) {
                    temp = static_cast<int>(abs(2 * ant[j] - leng));
                    min = ant[j];
                }
            }
        } else{
            min=ant[0];
        }
            if ((leng - min) < min) {//判断距离中点最近的蚂蚁到左边还是右边近
                min = leng - min;
            }

        int max;//时间最长时，最后一个下落的蚂蚁的位置
        for (int j = 0; j < num; j++) {//取每一个蚂蚁到较远边界的距离
            if ((leng - ant[j]) > ant[j]) {
                ant[j] = leng - ant[j];
            }
        }
        max = ant[0];
        for (int j = 1; j < num; j++) {//判断哪一个到边界的距离最远
            if (ant[j] > max) {
                max = ant[j];
            }
        }
        cout << min << " " << max << endl;

    }
    return 0;
}