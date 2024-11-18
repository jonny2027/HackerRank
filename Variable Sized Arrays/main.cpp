#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int entries = 0;
    int queries = 0;

    cin >> entries >> queries;
    vector<int> arrayOfEntries[entries];

    for (int i = 0; i < entries; i++)
    {
        int valueArraySize = 0;
        cin >> valueArraySize;

        int value = 0;
        for(int j = 0; j < valueArraySize; j++){
            cin >> value;
            arrayOfEntries[i].push_back(value);
        }
    }

    int entryPos = 0;
    int ValuePos = 0;
    for(int k = 1; k <= queries; k++)
    {
        cin >> entryPos >> ValuePos;
        cout << arrayOfEntries[entryPos][ValuePos] << endl;
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}