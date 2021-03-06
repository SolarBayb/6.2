#include <iostream>

using namespace std;

void InArr(int* arr, const int size)
{
    for (size_t i = 0; i < size; i++)
        arr[i] = -10 + rand() % 16;
}

void PrArr(const int* const arr, const int size)
{
    cout << "{";
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
            cout << ", ";

    }
    cout << "}" << endl;
}

int SumArr(const int* const arr, const int size)
{
    int S = 0;
    for (size_t i = 0; i < size; i++)
        if (arr[i] % 2 == 0)
        {
            S += arr[i];
        }
    cout << "S = " << S << endl;
    return S;
}
int main()
{
    srand((unsigned)time(NULL));
    const int n = 5;
    int Arr[n];

    InArr(Arr, n);
    PrArr(Arr, n);
    SumArr(Arr, n);

    return 0;
}