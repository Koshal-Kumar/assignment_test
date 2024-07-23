#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "";
    string ans = "";
    cout << "enter the string ";
    cin >> str;
    cout << endl;

    int k = 0;
    cout << "Enter the value for K";
    cin >> k;

    int sizz = str.length();
    string temp = "";
    for (int i = 0; i < sizz; i++)
    {
        if (i >= k)
        {
            ans += str[i];
        }
        else
        {
            temp += str[i];
        }
    }

    cout << ans << temp << endl;

    return 0;
}