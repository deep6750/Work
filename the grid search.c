#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int test, flag = 0, i, j, k, l, m, R, C, r, c, final = 0;
    cin>>test;
    for(i = 0; i < test; i++)
    {

        cin>>R>>C;
        char arr[R][C];
        for(j = 0; j < R; j++)
        {
            for(k = 0; k < C; k++)
            {
                cin>>arr[j][k];
            }
        }

        cin>>r>>c;
        char pat[r][c];
        for(j = 0; j < r; j++)
        {
            for(k = 0; k < c; k++)
            {
                cin>>pat[j][k];
            }
        }
        for(j = 0;j < R; j++)
        {    for(k = 0;k < C; k++)
            {

                if(arr[j][k] == pat[0][0])
                {
                    flag=1;
                    if(C - k >= c)
                    for(l = 1;l < r; l++)
                    {
                        if(flag == 0)
                        break;
                        for(m = 0; m < c; m++)
                        {

                            if(pat[l][m] == arr[j+l][k+m])
                            {
                                if(l == r-1 && m == c-1)
                                {
                                    final = 1;
                                    flag = 1;
                                }

                             }
                            else{
                                    flag = 0;
                                    break;

                            }

                        }
                    }
                }
            }
        }

        if(final)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        }



    return 0;
}
