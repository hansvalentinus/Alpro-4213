/**
Nama: Hans Valentinus Butar Butar
NIM: A11.2022.14487
Kelompok: 4213
*/
#include <iostream>
using namespace std;

struct mahasiswa
{
    string nama, nim;
    float nilai[5];

    void printData(){
        cout << "Nama: " << nama << endl;
        cout << "NIM: " << nim << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Nilai: " << nilai[i] << endl;
        }
    }

    void swapData(float *al, float *a2)
    {
        float temp = *al;
        *al = *a2;
        *a2 = temp;
    }

    float sumNilai(float *arr, int len)
    {
        if (len <= 0)
            return 0;
        return sumNilai(arr, len - 1) + arr[len - 1];
    }

    void bubbleSort(float *arr, int len)
    {
        for (int i = 0; i < len - 1; i++)
        {
            for (int j = 0; j < len - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swapData(&arr[j], &arr[j + 1]);
                }
            }
        }
    }
};

int main()
{
    cout << "Program Data Mahasiswa" << endl;

    //Declare m1
    mahasiswa m1 = {"Hans Valentinus Butar Butar", "A11.2022.14487", {70, 60, 40, 20, 30}};
    cout << "\nBefore Swap" << endl;
    m1.printData();

    //After Swap
    cout << "\nAfter Swap" << endl;
    m1.swapData(&m1.nilai[0], &m1.nilai[4]);
    m1.printData();

    //Nilai rata-rata
    int n = sizeof(m1.nilai)/sizeof(m1.nilai[0]);
    cout << "\nNilai rata-rata: " << m1.sumNilai(m1.nilai, n)/n << endl;

    m1.bubbleSort(m1.nilai, n);

    cout << endl;
    cout << "Setelah di Sorting :" << endl;
    cout << endl;
    m1.printData();
    cout << "Nilai Rata Rata: " << m1.sumNilai(m1.nilai, n) / n << endl;

    return 0;
}
