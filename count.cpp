#include <bits/stdc++.h>
using namespace std;
int countDigit(int n)
{
    return n!=0?log10(n)+1:1;
}
int main()
{
    cout << countDigit(0) << endl;
    return 0;
}