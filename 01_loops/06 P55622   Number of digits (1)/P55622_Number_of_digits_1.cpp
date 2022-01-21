#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int cont = 1;
    int aux = n;
    while(aux >= 10){
        aux = aux/10;
        ++cont;
    }
    cout << "The number of digits of " << n << " is " << cont << "." <<endl;
}