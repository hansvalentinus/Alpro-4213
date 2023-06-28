#include <iostream>
using namespace std;

struct BangunDatar
{
    double panjang;
    double lebar;
    double r;
};

struct Kerucut
{
    double r;
    double t;
};

struct Bola
{
    double r;
};

double hitungLuasPersegiPanjang(const BangunDatar &persegiPanjang)
{
    return persegiPanjang.panjang * persegiPanjang.lebar;
}

double hitungLuasLingkaran(const BangunDatar &lingkaran)
{
    return (22.0 / 7.0) * lingkaran.r * lingkaran.r;
}

double hitungVolumeKerucut(const Kerucut &kerucut)
{
    return (1.0 / 3.0) * (22.0 / 7.0) * kerucut.r * kerucut.r * kerucut.t;
}

double hitungVolumeBola(const Bola &bola)
{
    return (4.0 / 3.0) * (22.0 / 7.0) * bola.r * bola.r * bola.r;
}

int main()
{
    BangunDatar persegiPanjang;
    persegiPanjang.panjang = 5.0;
    persegiPanjang.lebar = 3.0;

    BangunDatar lingkaran;
    lingkaran.r = 4.0;

    Kerucut kerucut;
    kerucut.r = 3.0;
    kerucut.t = 6.0;

    Bola bola;
    bola.r = 2.0;

    double luasPersegiPanjang = hitungLuasPersegiPanjang(persegiPanjang);
    double luasLingkaran = hitungLuasLingkaran(lingkaran);
    double volumeKerucut = hitungVolumeKerucut(kerucut);
    double volumeBola = hitungVolumeBola(bola);

    cout << "Luas Persegi Panjang: " << luasPersegiPanjang << endl;
    cout << "Luas Lingkaran: " << luasLingkaran << endl;
    cout << "Volume Kerucut: " << volumeKerucut << endl;
    cout << "Volume Bola: " << volumeBola << endl;

    return 0;
}
