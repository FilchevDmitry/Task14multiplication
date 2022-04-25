#include <iostream>
#include<vector>
using namespace std;

int main()
{
    cout << "Enter the data" << endl;
    float matrixx[4][4];
    vector <float> vec;
    float sum = 0;
    int z = 0;
    float R[4][1];
    cout << "Input vector"<<endl;
    for (int i = 0; i < 4; i++)
    {
        int a = 0;
        cin >> a;
        vec.push_back(a);
    }
    cout << "Input matrixx"<<endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> matrixx[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum += matrixx[i][j] * vec[j];
        }
        R[i][z] = sum;
        sum = 0;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            cout << R[i][j] << " ";
        }
        cout << endl;
    }
}

