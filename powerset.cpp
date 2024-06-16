// printing all subsequences
#include <iostream>
#include <vector>
using namespace std;

void subsequences(vector<int> arr, vector<int> &current, vector<vector<int>> &result, int idx)
{
    if (idx >= arr.size())
    {
        result.push_back(current);
        return;
    }
    int element = arr[idx];
    current.push_back(element);
    subsequences(arr, current, result, idx + 1);
    current.pop_back();
    subsequences(arr, current, result, idx + 1);
}

void print(vector<vector<int>> result)
{
    for (const auto &el : result)
    {
        cout << "[";
        for (auto &it : el)
        {
            cout << it << " ";
        }
        cout << "] ";
    }
}
int main()
{
    vector<int> arr = {3, 1, 2};
    vector<vector<int>> result;
    vector<int> current;
    subsequences(arr, current, result, 0);
    print(result);
    return 0;
}