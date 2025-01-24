#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    vector<int> sol(n);
    for(int j=1; j < n + 1; j++)
    {
        for(int i=0; i < n; i++)
        {
            if (p[i] == j)
            {
                sol[j-1] = i + 1;
                break;
            }
        }
    }
    for(int num : sol)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
