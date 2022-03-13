#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
float arr[MAX];
int n = MAX;
void quickSort(float arr[], int low, int high)
{
    int i = low;
    int j = high;
    float pivot = arr[(i + j) / 2];
    float temp;

    while (i <= j)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        quickSort(arr, low, j);
    if (i < high)
        quickSort(arr, i, high);
}

int main()
{
    clock_t start, end;
    double time_use;

    ifstream infile;
    ofstream ofile;
    ofile.open("case0.txt");
    infile.open("case10.txt");

    for (int i = 0; i < MAX; i++)
        infile >> arr[i];

    start = clock();
    quickSort(arr, 0, n);
    end = clock();

    cout << "Sorted array  \n";
    infile.close();
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    cout << time_use;

    for (int i = 0; i < 1000000; i++)
        ofile << arr[i] << endl;

    ofile.close();
}