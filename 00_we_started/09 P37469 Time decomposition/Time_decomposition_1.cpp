#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int h = 0;
    int m = 0;
    int s = 0;

    h = n / 3600;
    m = (n % 3600) / 60;
    s = (n % 3600) % 60;

    cout << h <<" " << m <<" " << s <<endl;
}