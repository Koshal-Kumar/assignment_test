#include <bits/stdc++.h>
using namespace std;


int main()
{

    int arr[] = {};

    int sizz;
    cout << "enter the size of the array"<<endl;
    cin >> sizz;
    cout << endl;

    for (int i = 0; i < sizz; i++)
    {
        int arrVal = 0;
        cout << "Enter the value of the array";
        cin >> arrVal;
        arr[i] = arrVal;
    }

    int val = 0;
    for (int i = 0; i < sizz - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            val = i;
            cout << "the index value is " << val << endl;
            break;
        }
    }
    return 0;
}