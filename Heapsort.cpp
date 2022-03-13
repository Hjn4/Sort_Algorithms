#include <bits/stdc++.h>

using namespace std;
#define MAX 1000000
float arr[MAX];
void heapify(float arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}

void heapSort(float arr[], int n)
{

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--)
    {

        swap(arr[0], arr[i]);

        heapify(arr, i, 0);
    }
}

void printArray(float arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    clock_t start, end;
    double time_use;

    ofstream ofile;
    ifstream infile;

    ofile.open("case0.txt");
    infile.open("case1.txt");

    for (int i = 0; i < MAX; i++)
        infile >> arr[i];

    int n = MAX;

    start = clock();
    heapSort(arr, n);
    end = clock();

    cout << "Sorted array  \n";
    infile.close();
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    cout << time_use;

    for (int i = 0; i < 1000000; i++)
        ofile << arr[i] << endl;

    ofile.close();
}
