#include <bits/stdc++.h>

using namespace std;

int already[1000];

int main ()
{
    int h, l, n, a, counter = 0;

    cin >> h >> l >> n;

    memset(already, 0, sizeof(already));

    for (int i = 0; i < n; i++){
        cin >> a;
        if (a >= l && a < l + h){
            if (already[a] != 0){
                if (already[a] == 1)
                    counter += 2;
                else
                    counter++;
            }
            already[a]++;
        }
    }

    cout << counter;
}