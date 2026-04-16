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
    
    cout << "\n==================================\n";
    cout << "masukan elemen array: \n";
    cout << "==================================\n";

    for (int i = 0; i < nPanjang; i++)
    {
        cout << "data ke-" << i + 1 << ": ";
        cin >> element[i];
    }
}

void bubblesortarray()
{
    int pass = 1;
    do
    {
        for (int j = 0; j <= nPanjang - 1 - pass; j++)
        {
            if (element[j] > element[j + 1])
            {
                int temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
        pass++;
    } while (pass <= nPanjang - 1);
}

void display()
{
    cout << "\n==================================\n";
    cout << "elemen array setelah diurutkan (asc) \n";
    cout << "==================================\n";

    for (int j = 0; j < nPanjang; j++)
    {
        cout << element[j];
        if (j < nPanjang - 1)
        {
            cout << " -> ";
        }
    }
    cout << endl;
}

void binarySearch()
{
    char ulang;
    do
    {
        cout << "\n=============================================\n";
        cout << "            Pencarian Binary Search            \n";
        cout << "==============================================\n";

        cout << "Masukkan element yang ingin dicari: ";
        cin >> x;

        int low = 0;
        int high = nPanjang - 1;
         
        do 
        {
            int mid = (low + high) / 2;

            if (element[mid] == x)
            {
                cout << "\n[✔] elemen " << x << " ditemukan pada indeks " << mid << "\n";
                return;
            }
            if (x < element[mid])
            {
                high = mid - 1;
            }
            if (x > element[mid])
            {
                low = mid + 1;
            }

        } while (low <= high);

        if (low > high)
        {
            cout << "\n[x] elemen " << x << " tidak ditemukan dalam array.\n";
        }

        cout << "\nIngin mencari lagi? (y/n): ";
        cin >> ulang;

    }while (ulang == 'y' || ulang == 'Y');
}