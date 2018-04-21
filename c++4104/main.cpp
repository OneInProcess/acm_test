#include <iostream>
/*
 *
 *
 */
using namespace std;

char str[2][9] = {{"ABEGHJK"},
                  {"ACFGHIK"}};
int f[2505], m, n;
char map[52][52];

int check(int x, int y) {
    if (x >= 0 && x < m && y >= 0 && y < n) {
        return 1;
    }
    return 0;
}

int getFather(int a) {
    while (a != f[a]) {
        a = f[a];
    }
    return a;
}

void Union(int a, int b) {
    int root1 = getFather(a);
    int root2 = getFather(b);
    if (root1 != root2) {
        if (root1 < root2){
            f[root2] = root1;
        }
        else f[root1] = root2;
    }
}

int judge(char c, int flag) {
    int i;
    for (i = 0; i < 7; i++) {
        if (str[flag][i] == c)return i + 1;
    }
    return 0;
}

void process() {
    int i, j, dx, dy;
    char c;
    for (i = 0; i <= n * m; i++){
        f[i] = i;
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {

            c = map[i][j];
            if (c == 'C' || c == 'D' || c == 'E' || c == 'H'
                || c == 'I' || c == 'J' || c == 'K') {
                dx = i + 1;
                dy = j;
                if (check(dx, dy)) {
                    if (judge(map[dx][dy], 0)) {
                        Union(i * n + j, dx * n + dy);
                    }
                }
            }
            if (c == 'B' || c == 'D' || c == 'F' || c == 'G'
                || c == 'I' || c == 'J' || c == 'K') {
                dx = i;
                dy = j + 1;
                if (check(dx, dy)) {
                    if (judge(map[dx][dy], 1)) {
                        Union(i * n + j, dx * n + dy);
                    }
                }
            }
        }
    }
    int result = 0;
    for (i = 0; i < n * m; i++)if (f[i] == i) { result++; }
    cout << result<<endl;
}

int main() {
    int i;
    while (cin >> m && cin >> n) {
        if (m < 0 || n < 0){
            break;
        }
        for (i = 0; i < m; i++) {
            cin >> map[i];
        }
        process();
    }
    return 0;
}
