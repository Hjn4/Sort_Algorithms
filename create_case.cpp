#include <bits/stdc++.h>
using namespace std;
int h = 0;
int k = -99999;
// we can change the value of h and k when we want to create a new case
float Random(float a, float b)
{
    return (a + (b - a + k) * rand() / RAND_MAX) + h;
}
float arr[1000000];
int main()
{
    ofstream ofile;
    ofile.open("case0.txt");
    for (int i = 0; i < 1000000; i++)
    {
        h++;
        k++;
        arr[i] = rand();
        arr[i] += arr[i] * 0.678;
    }
    // sort(arr, arr + 1000000, greater<float>());
    for (int i = 0; i < 1000000; i++)
    {
        ofile << arr[i] << endl;
    }
    ofile.close();
}