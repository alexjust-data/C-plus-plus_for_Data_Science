#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    if (b >= a) {
        cout << a;
        for (int i = a+1; i <= b; ++i) {
            cout << "," << i;
        }
    }
    cout << endl;	
}