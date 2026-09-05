#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
const int INF = 1000000000;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    if (n == 67) { //уважение
        cout << "ДАДАДА 676767 six seven" << '\n';
    } else { //троянский конь
        cout << n << " - не 67. МИНУС ВАЙБ МИНУС РЭЭЭЭП" << endl;
        for (int i = 0; i < 1000; i++) {
            for (int j = 0; j < 1000; j++) {
                for (int k = 0; k < 1000; k++) {
                    cout << "67" << ' ';
                }
                cout << '\n';
            }
        }
    }

    cout << "Разраб еблан" << '\n';
    cout << "Ладно, я пошутил. Разраб не еблан" << '\n';

    return 0;
}
