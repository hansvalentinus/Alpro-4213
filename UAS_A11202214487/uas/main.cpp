/**
Nama: Hans Valentinus Butar Butar
NIM: A11.2022.14487
Kelompok: 4213
*/
#include <iostream>
using namespace std;

// Struktur data mahasiswa
struct Mahasiswa {
    string nama;
    int nim;
    int nilai[5];
};

// Fungsi untuk mencetak data mahasiswa
void cetakDataMahasiswa(const Mahasiswa& mhs) {
    cout << "Nama   : " << mhs.nama << endl;
    cout << "NIM    : " << mhs.nim << endl;
    cout << "Nilai  : ";
    for (int i = 0; i < 5; i++) {
        cout << mhs.nilai[i] << " ";
    }
    cout << endl;
}

// Fungsi untuk menukar dua nilai menggunakan pointer
void tukarNilai(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fungsi rekursif untuk menghitung total nilai
int hitungTotalNilai(const int* nilai, int index = 0, int total = 0) {
    if (index == 5) {
        return total;
    }
    return hitungTotalNilai(nilai, index + 1, total + nilai[index]);
}

// Fungsi untuk melakukan sorting (pengurutan) deret nilai menggunakan bubble sort
void bubbleSort(int* nilai, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (nilai[j] > nilai[j + 1]) {
                tukarNilai(&nilai[j], &nilai[j + 1]);
            }
        }
    }
}

int main() {
    // Membuat objek Mahasiswa
    Mahasiswa mhs;
    mhs.nama = "Hans Valentinus";
    mhs.nim = 14487;
    mhs.nilai[0] = 80;
    mhs.nilai[1] = 90;
    mhs.nilai[2] = 75;
    mhs.nilai[3] = 85;
    mhs.nilai[4] = 95;

    // Menampilkan data mahasiswa
    cout << "Data Mahasiswa:" << endl;
    cetakDataMahasiswa(mhs);

    // Menukar dua nilai
    int a = 10;
    int b = 20;
    cout << "Sebelum ditukar: a = " << a << ", b = " << b << endl;
    tukarNilai(&a, &b);
    cout << "Setelah ditukar: a = " << a << ", b = " << b << endl;

    // Menghitung total nilai
    int totalNilai = hitungTotalNilai(mhs.nilai);
    cout << "Total Nilai: " << totalNilai << endl;

    // Melakukan sorting deret nilai
    bubbleSort(mhs.nilai, 5);
    cout << "Setelah diurutkan: ";
    for (int i = 0; i < 5; i++) {
        cout << mhs.nilai[i] << " ";
    }
    cout << endl;

    return 0;
}


