#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M, i, k;
    cin >> N >> M;
    int arr[N];
    int res[M] = { };

    for(i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + sizeof(arr) / sizeof(int));

    k = 1;
    i = 0;
    while(i < N && k <= M)
    {
        if(arr[i] == k)
        {
            res[k-1]++;
            i++;
        }
        else
        {
            k++;
        }
    }

    for(i = 0; i < M; i++)
    {
        cout << res[i] << endl;
    }

    return 0;
}
