#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()
{
    while (true)
    {
        cout << "masukan banyaknya pada array (maksimal 10): ";
        cin >> nPanjang;

        if (nPanjang <=10)
        {
            break;
        }
        else
        {
            cout << "n[!] jumlah elemen tidak boleh lebih dari 10. silakan coba lagi. \n";
        }
    }