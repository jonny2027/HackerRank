#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int vectorSize = 0;
    vector<int> v;

    cin >> vectorSize;

    int temp;
    for (int i = 0; i < vectorSize; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < vectorSize; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
