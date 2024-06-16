#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> reverse(int l, int r, vector<int> &arr)
{
    int n = arr.size();
    if (l >= n / 2) // if(l>=r)
    {
        return arr;
    }

    swap(arr[l], arr[r]);
    reverse((l + 1), (r - 1), arr);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int l = 0;
    // int r = arr.size() - 1;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int n = arr.size();
    reverse(l, (n - l - 1), arr); // for i we can use n-i-1
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}