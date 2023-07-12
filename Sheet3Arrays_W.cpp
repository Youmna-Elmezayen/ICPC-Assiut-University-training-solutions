#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M, i, j;
    cin >> N >> M;
    int matrix [N][M];
    int res [N][M];

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            res[i][j] = matrix[i][M-1-j];

        }
    }

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
