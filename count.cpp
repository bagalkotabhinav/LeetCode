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



// 0-9 ->1
// 10-99 ->2
// 100-999 ->3
// ....any interval ->1+logn