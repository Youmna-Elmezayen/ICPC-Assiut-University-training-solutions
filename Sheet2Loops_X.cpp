#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, i, num, counter, j;
    cin >> N;
    int res [N] = { };

    for(i = 0; i < N; i++)
    {
        counter = 0;
        cin >> num;
        while(num > 0)
        {
            if(num % 2 == 1)
            {
                counter++;
            }
            num = num / 2;
        }
        for(j = 0; j < counter; j++)
        {
            res[i] += pow(2, j);
        }
    }

    for(i = 0; i < N; i++)
    {
        cout << res[i] << endl;
    }

    return 0;
}

