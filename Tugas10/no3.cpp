#include <iostream>
#include <cmath>
using namespace std;

struct LuasPersegiPanjang
{
    int LuasPP(int x, int y)
    {
        int luas = x * y;
        return luas;
    }
};

struct LuasLingkaran
{
    float LuasL(float r)
    {
        float phi = 3.14;
        float luas = pow(r, 2.0) * phi;
        return ceil(luas);
    }
};

struct VolumeKerucut
{
    float VolK(float r, float t)
    {
        float phi = 3.14;
        float luas = ceil(0.3 * t) * ceil((pow(r, 2.0) * phi));
        return luas;
    }
};

struct VolumeBola
{
    float VolB(float r)
    {
        float phi = 3.14;
        float luas = ceil(pow(r, 3.0) * phi) * 1.3;
        return ceil(luas);
    }
};

int main()
{
    LuasPersegiPanjang lp;
    cout << "Luas persegi panjang p=10 l=5 adalah " << lp.LuasPP(5, 10) << endl;
    LuasLingkaran ll;
    cout << "Luas lingkaran jari jari 7 adalah " << ll.LuasL(7.0) << endl;
    VolumeKerucut vk;
    cout << "volume kerucut r=7 t=3 adalah " << vk.VolK(7.0, 6.0) << endl;
    VolumeBola vb;
    cout << "volume bola dengan r=7 adalah " << vb.VolB(7.0) << endl;

    return 0;
}
