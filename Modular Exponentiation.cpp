#include <bits/stdc++.h>

long long power(int x, int n, int m)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return x % m;
    long long gg = power(x, n / 2, m) % m;
    gg = (gg * gg) % m;
    if (n % 2)
        return (x * gg) % m;
    else
        return (gg) % m;
}

int modularExponentiation(int x, int n, int m)
{
    // Write your code here.
    return int(power(x, n, m) % m);
}