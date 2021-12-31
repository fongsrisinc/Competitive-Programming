#include <bits/stdc++.h>

using namespace std;

int N, len, yes, counter = 0;
string inp[1000];
string outp[1000];

int main()
{
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> inp[i];

    for (int i = 0; i < N; i++)
        cin >> outp[i];

    for (int i = 0; i < N; i++){
        len = inp[i].length();
        for (int j = 0; j < len; j++){
            if (inp[i][j] == outp[i][2 * (j + 1) - 1] && inp[i][j] == outp[i][2 * len - 2 * (j + 1)])
                yes = 1;
            else
                yes = 0;
        }
        if (yes == 1)
            counter++;
    }

    cout << counter;
}