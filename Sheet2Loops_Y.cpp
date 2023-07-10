#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, i;
    cin >> N;
    int F[N] = { };

    F[1] = 0;
    F[2] = 1;
    for(i = 3; i <= N; i++)
    {
        F[i] = F[i-1] + F[i-2];
    }

    for(i = 1; i <= N; i++)
    {
        cout << F[i] << " ";
    }
    cout << endl;

    return 0;
}