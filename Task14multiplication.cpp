#include <iostream>
#include<vector>
using namespace std;

int main()
{
    cout << "Enter the data" << endl;
    float matrixx[4][4];
    vector <float> vec;
    float R[4][1];
    cout << "Input vector";
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
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                R[i][j] = vec[k] * matrixx[i][k];
            }
        }
    }

}

