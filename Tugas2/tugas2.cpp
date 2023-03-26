#include <iostream>
using namespace std;

bool isEven(int n)
{
    return n % 2 == 0;
}

bool isOdd(int n)
{
    return n % 2 != 0;
}

bool isFactor(int n, int f)
{
    return n % f == 0;
}

int MaxArray(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int MinArray(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int Max(int a, int b)
{
    return a > b ? a : b;
}

int Min(int a, int b)
{
    return a < b ? a : b;
}

int SumEven(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (isEven(arr[i]))
        {
            sum += arr[i];
        }
    }
    return sum;
}

int SumOdd(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (isOdd(arr[i]))
        {
            sum += arr[i];
        }
    }
    return sum;
}

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

bool isFound(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    const int SIZE = 5;

    int arr[SIZE];

    cout << "Masukkan " << SIZE << " angka:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
    }

    cout << "\nArray: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n\n";

    cout << "2 adalah nilai genap : " << isEven(2) << endl;

    cout << "3 adalah nilai ganjil : " << isOdd(3) << endl;

    cout << "Masukkan faktor yang ingin dicek: ";
    int f;
    cin >> f;

    cout << "isFactor(" << arr[0] << ", " << f << "): " << isFactor(arr[0], f) << endl;

    cout << "MaxArray(arr, SIZE): " << MaxArray(arr, SIZE) << endl;

    cout << "MinArray(arr, SIZE): " << MinArray(arr, SIZE) << endl;

    cout << "Masukkan dua angka:\n";
    int a, b;
    cin >> a >> b;

    cout << "Nilai Max dari (" << a << ", " << b << "): " << Max(a, b) << endl;

    cout << "Nilai Min dari (" << a << ", " << b << "): " << Min(a, b) << endl;

    cout << "Hasil dari SumEven : " << SumEven(arr, SIZE) << endl;

    cout << "Hasil dari SumOdd : " << SumOdd(arr, SIZE) << endl;

    Swap(arr[0], arr[1]);

    cout << "\nSetalah di Swap:\n";

    cout << "Array: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Masukkan angka yang ingin dicari: ";
    int x;
    int n;
    cin >> x;

    cout << "isFound(arr,n,x): " << isFound(arr, n, x) << endl;

    return 0;
}