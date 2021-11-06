#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int n, const int Low, const int High)
{
    for (int i = 0; i < n; i++)
        a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int n)
{
    for (int i = 0; i < n; i++)
        cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
    cout << endl;
}
int Sum(int* a, const int n)
{
    int S = 0;

    for (int i = 0; i < n; i++)
        S += a[i];
    return S;
}
int main()
{
    srand((unsigned)time(NULL));
    const int n = 10;
    int a[n];
    int Low = -50;
    int High = 50;
    Create(a, n, Low, High);
    Print(a, n);
    cout << "S = " << Sum(a, n) << endl;
    return 0;
}