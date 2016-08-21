#include <iostream>

using namespace std;

int main()
{
    int i, j, k, n, a[100], sum = 0, dum = 0, test;
    cin>>test;
    for(i = 0; i < test; i++)
    {
        cin>>n;
        for(j = 0; j < n; j++)
        {
            cin>>a[j];
            sum = sum + a[j]
            dum = a[j] + a[j+1];

        }
        for(k=i+1;i<n;i++)
        {
            dum=dum[j]
        }
        if(sum == dum)
        {
            cout<<"YES";
        }
        else cout<<"No";
    }
    return 0;
}
