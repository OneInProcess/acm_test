#include <iostream>
#include <cstdlib>

using namespace std;

void method1(int y, int x, int n);

void judge(int &y1, int &x1, string **array1, int &count, int y, int x, string **&array2);

void judge2(int y1, int x1, int &count, int y, int x, string **&array2);

int xx = -1;
int yy = -1;
int count1 = 0;

int main() {
    int hang, lie, poi;
    cin >> hang;
    cin >> lie;
    cin >> poi;
    method1(hang, lie, poi);
    return 0;
}

void method1(int y, int x, int n) {
    string **array1 = new string *[y];
    for (int i = 0; i < y; i++) {
        array1[i] = new string[x];
    }
    for (int i = 0; i < y; i++) {
        string string1;
        cin >> string1;
        for (int j = 0; j < x; j++) {
            array1[i][j] = string1[j];
        }
    }
    string **array2 = new string *[y];
    for (int i = 0; i < y; i++) {
        array2[i] = new string[x];
    }
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            array2[i][j] = '0';
        }
    }
    int y1 = 0;
    int x1 = n - 1;
    array2[y1][x1] = '1';
    int count = 0;
    judge(y1, x1, array1, count, y, x, array2);
}

void judge(int &y1, int &x1, string **array1, int &count, int y, int x, string **&array2) {
    if (array1[y1][x1] == "N") {
        y1 = y1 - 1;
        judge2(y1, x1, count, y, x, array2);
        array2[y1][x1] = '1';
        judge(y1, x1, array1, count, y, x, array2);
    }
    if (array1[y1][x1] == "S") {
        y1 = y1 + 1;
        judge2(y1, x1, count, y, x, array2);
        array2[y1][x1] = '1';
        judge(y1, x1, array1, count, y, x, array2);

    }
    if (array1[y1][x1] == "W") {
        x1 = x1 - 1;
        judge2(y1, x1, count, y, x, array2);
        array2[y1][x1] = '1';
        judge(y1, x1, array1, count, y, x, array2);

    }
    if (array1[y1][x1] == "E") {
        x1 = x1 + 1;
        judge2(y1, x1, count, y, x, array2);
        array2[y1][x1] = '1';
        judge(y1, x1, array1, count, y, x, array2);
    }
}

void judge2(int y1, int x1, int &count, int y, int x, string **&array2) {
    count++;
    if (x1 < 0 || y1 < 0 || x1 >= x || y1 >= y) {
        cout << count << " step(s) to exit" << endl;
        int hang, lie, poi;
        cin >> hang;
        cin >> lie;
        cin >> poi;
        xx = -1;
        yy = -1;
        count1 = 0;
        if (hang != 0 && lie != 0 && poi != 0) {
            method1(hang, lie, poi);
        } else {
            exit(0);
        }
    }
    if ((y1 == yy) && (x1 == xx)) {
        cout << count1 - (count - count1) << " step(s) before a loop of " << count - count1 << " step(s)" << endl;
        int hang, lie, poi;
        cin >> hang;
        cin >> lie;
        cin >> poi;
        xx = -1;
        yy = -1;
        count1 = 0;
        if (hang != 0 && lie != 0 && poi != 0) {
            method1(hang, lie, poi);
        } else {
            exit(0);
        }
    }
    if (array2[y1][x1] == "1" && yy < 0 && xx < 0) {
        yy = y1;
        xx = x1;
        count1 = count;
    }
}