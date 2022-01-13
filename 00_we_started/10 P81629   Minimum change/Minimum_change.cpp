#include <iostream>

using namespace std;

int main(){
    int e, c;
    cin >> e >> c;

    int b500, b200, b100, b50, b20, b10, b5;
    int p2, p1;
    int cts50, cts20, cts10, cts5, cts2, cts1;

    b500 = e / 500;
    b200 = (e % 500) / 200;
    b100 = ((e % 500) % 200) / 100;
    b50 = (((e % 500) % 200) % 100) / 50;
    b20 = ((((e % 500) % 200) % 100) % 50) / 20;
    b10 = (((((e % 500) % 200) % 100) % 50) % 20) / 10;
    b5 = ((((((e % 500) % 200) % 100) % 50) % 20) % 10) / 5;
    p2 = (((((((e % 500) % 200) % 100) % 50) % 20) % 10) % 5) / 2;
    p1 = ((((((((e % 500) % 200) % 100) % 50) % 20) % 10) % 5) % 2);
    cts50 = c / 50; 
    cts20 = (c % 50) / 20;
    cts10 = ((c % 50) % 20) / 10;
    cts5 = (((c % 50) % 20) % 10) / 5;
    cts2 = ((((c % 50) % 20) % 10) % 5) / 2;
    cts1 = (((((c % 50) % 20) % 10) % 5) % 2);

    cout <<"Banknotes of 500 euros: "<<b500 <<endl;
	cout <<"Banknotes of 200 euros: "<<b200 <<endl;
	cout <<"Banknotes of 100 euros: "<<b100 <<endl;
	cout <<"Banknotes of 50 euros: "<<b50 <<endl;
	cout <<"Banknotes of 20 euros: "<<b20 <<endl;
	cout <<"Banknotes of 10 euros: "<<b10 <<endl;
	cout <<"Banknotes of 5 euros: "<<b5 <<endl;
	cout <<"Coins of 2 euros: "<<p2 <<endl;
	cout <<"Coins of 1 euro: "<<p1 <<endl;
	cout <<"Coins of 50 cents: "<<cts50 <<endl;
	cout <<"Coins of 20 cents: "<<cts20 <<endl;
	cout <<"Coins of 10 cents: "<<cts10 <<endl;
	cout <<"Coins of 5 cents: "<<cts5 <<endl;
	cout <<"Coins of 2 cents: "<<cts2 <<endl;
	cout <<"Coins of 1 cent: "<<cts1 <<endl;
}