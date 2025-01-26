#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    vector<int> x(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> x[i];
    }
    int min, max;
    for(int i = 0; i < n; ++i)
    {
        if(i == 0)
        {
            min = x[1] - x[0];
            max = x[n-1] - x[0];
        }
        else if (i == n - 1)
        {
            min = x[n-1] - x[n-2];
            max = x[n-1] - x[0];
        }
        else 
        {
            if(x[i+1]-x[i] > x[i]-x[i-1])
                min = x[i] - x[i-1];
            else
                min = x[i+1] - x[i];
            if (x[n-1]-x[i] > x[i] - x[0])
                max = x[n-1] - x[i];
            else 
                max = x[i] - x[0];
        }
        cout << min << " " << max << endl;
    }
    cout << endl;
    return 0;
}