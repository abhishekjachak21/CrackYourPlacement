#include <bits/stdc++.h>
using namespace std;

void printDups(string str)
{
    unordered_map<char, int> count;

    // Count the frequency of each character in the string
    for (int i = 0; i < str.length(); i++) {
        count[str[i]]++;
    }

    // Iterate through the unordered_map to find characters with counts > 1
    for (auto it : count) {
        if (it.second > 1)
            cout << it.first << ", count = " << it.second << "\n";
    }
}

int main()
{
    string str = "abhishek jachak";
    printDups(str);
    return 0;
}
