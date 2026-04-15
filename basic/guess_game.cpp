#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int target = rand() % 100 + 1; // 1~100
    int guess;

    cout << "欢迎来到猜数字游戏！" << endl;
    cout << "我已经想好了一个 1 到 100 的数字。" << endl;

    while (true) {
        cout << "请输入你的猜测：";
        cin >> guess;

        if (guess > target) {
            cout << "大了！" << endl;
        } else if (guess < target) {
            cout << "小了！" << endl;
        } else {
            cout << "恭喜你，猜对了！" << endl;
            break;
        }
    }

    return 0;
}
