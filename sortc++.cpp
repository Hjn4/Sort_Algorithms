#include <bits/stdc++.h>

using namespace std;
#define MAX 1000000
float arr[MAX];

int main()
{
    clock_t start, end;
    double time_use;

    ofstream ofile;
    ifstream infile;

    ofile.open("case0.txt");
    infile.open("case10.txt");

    for (int i = 0; i < MAX; i++)
        infile >> arr[i];

    auto arr_size = MAX;

    start = clock();
    sort(arr, arr + MAX);
    end = clock();

    cout << "\nSorted array \n";
    infile.close();

    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    cout << time_use;

    for (int i = 0; i < 1000000; i++)
        ofile << arr[i] << endl;

    ofile.close();
    return 0;
}
