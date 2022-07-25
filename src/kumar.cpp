
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void kurbanSec(int son_sayi){
    srand(time(0));
    cout<<"---- Kaybeden Kisi-----\n";
	cout <<"--- ( "<< ( rand() % son_sayi)  <<" ) numara -----\n";
	cout<<"-----------------------\n"; 

}