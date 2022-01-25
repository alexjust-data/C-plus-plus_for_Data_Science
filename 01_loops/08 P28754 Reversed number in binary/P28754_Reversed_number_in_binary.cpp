#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int r;

    while(n > 1){
        r = n % 2;
        cout << r;
        n = n / 2; 
    }
    cout << n << endl;
}