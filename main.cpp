    #include <iostream>

    using namespace std;

    int main()
    {
        int N;
        cin>>N;
        int j = 1;
        for(int i = 0; i < N; i++)
        {
            cout<<j<<" "<<j+1<<" "<<j+2<<" "<<"PUM"<<endl;
            j += 4;
        }
        return 0;
    }
