#include <iostream>

using namespace std;

int main(){
    int h, m, s;
    cin >> h >> m >> s;

    int j = s + 1;

    if (j > 59){
        j = 0;
        m += 1;
        if (m > 59){
            m = 0;
            h += 1;
            if (h >= 24){
                h = 0;
                m = 0;
                j = 0;
            }
        }
    }
    if (h < 10) cout << 0;
    cout << h << ":";
    if (m < 10) cout << 0;
    cout << m << ":";
    if (j < 10) cout << 0;
    cout << j << endl;
}