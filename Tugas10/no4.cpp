#include <iostream>
#include <string>
using namespace std;

struct Person
{
    string nama, jurusan, nim;
    int tahun;
};

int main()
{
    int jumlahOrang;
    cout << "Masukkan jumlah orang: ";
    cin >> jumlahOrang;
    Person orang[jumlahOrang];

    for (int i = 0; i < jumlahOrang; i++)
    {
        cout << "Data orang ke-" << i + 1 << endl;
        cout << "Masukkan nim: ";
        cin >> orang[i].nim;
        cout << "Masukkan nama: ";
        cin >> orang[i].nama;
        cout << "Masukkan jurusan: ";
        cin >> orang[i].jurusan;
        cout << "Masukkan tahun lulus: ";
        cin >> orang[i].tahun;
        cout << endl;
    }

    cout << "Data Orang:" << endl;
    for (int i = 0; i < jumlahOrang; i++)
    {
        cout << "Orang ke-" << i + 1 << endl;
        cout << "NIM: " << orang[i].nim << endl;
        cout << "Nama: " << orang[i].nama << endl;
        cout << "Jurusan: " << orang[i].jurusan << endl;
        cout << "Tahun: " << orang[i].tahun << endl;
        cout << endl;
    }

    return 0;
}
