#include <iostream>
#include <string>
using namespace std;

struct Sepeda
{
    string merk;
    string type;
    int tahun;
    string harga;
};

int main()
{
    Sepeda sepeda;
    sepeda.merk = "Polygon";
    sepeda.type = "Sepeda Gunung";
    sepeda.tahun = 2013;
    sepeda.harga = "2.000.000";

    cout << "Merk: " << sepeda.merk << endl;
    cout << "Type: " << sepeda.type << endl;
    cout << "Tahun: " << sepeda.tahun << endl;
    cout << "Harga: " << sepeda.harga << endl;

    return 0;
}
