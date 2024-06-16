#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool isPalindrome(int i, string st)
{
    int n = st.length();
    if (i >= n / 2)
        return true;

    if (st[i] != st[n - i - 1])
        return false;

    return isPalindrome(i + 1, st);
}
int main()
{
    string st;
    getline(cin, st);

    cout << isPalindrome(0, st);

    return 0;
}