#include <iostream>

using namespace std;

int main()
{
    int N, i, j, k;
    cin>>N;

    for(i = 1; i <= N; i++)
    {
        for(k = N - i; k > 0; k--)
        {
            cout<<" ";
        }
        for(j = 0; j < (2*i)-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(i = N; i > 0; i--)
    {
        for(k = 0; k < N - i; k++)
        {
            cout<<" ";
        }
        for(j = (2*i)-1; j > 0; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}