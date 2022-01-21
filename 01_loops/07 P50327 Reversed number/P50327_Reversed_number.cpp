#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int aux = n;

    if (n < 10){
        cout << n <<endl;
    }else{
        while(aux >= 10){
            cout << aux % 10;
            aux = aux / 10;
        }
        cout << aux << endl;
    }
}