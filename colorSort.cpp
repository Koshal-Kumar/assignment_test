#include <bits/stdc++.h>
using namespace std;



int main()
{
int color[] = {1,2,1,0};

    int sizz= sizeof(color)/sizeof(color[0]);


    for (int i = 0; i < sizz; i++)
    {

        for (int j = 0; j < sizz-1; j++)
        {
            if (color[j] > color[j + 1])
            {
                swap(color[j], color[j + 1]);    
               }
        }
    }

    cout << "the required array is :" << endl;

    for (int i = 0; i < sizz; i++)
    {
        cout << color[i] << endl;
    }

    return 0;
}