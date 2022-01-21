#include <iostream>

using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    int max, min;

    if (x > y){
        max = x;
        min = y;
    }else{
        max = y;
        min = x;
    }

    while (max >= min){
        cout << max << endl;
        max -= 1;
    }
}