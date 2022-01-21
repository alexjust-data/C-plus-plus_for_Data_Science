#include <iostream>

using namespace std;

int main(){
    int a, a1, b, b1;
    cin >> a >> a1 >> b >> b1;

    int int1, int2;

    if ( (b1 > a1 && b > a) or (b1 < a1 && b < a)){
        cout << "[]" << endl;
    }else{
        if (a >= b){
            int1 = a;
        }else{
            int1 = b;
        }

        if (b1 >= a1){
            int2 = a1;
        }else{
            int2 = b1;
        }
        cout << "[" << int1 << "," << int2 << "]" << endl;
    }
}