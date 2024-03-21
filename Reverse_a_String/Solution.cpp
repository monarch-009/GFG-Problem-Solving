#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWord(string str)
    {
        // Your code goes here
        int n = str.length();
        for (int i = 0; i < n / 2; i++) 
        {
            swap(str[i], str[n - i - 1]);
        }
        return str;
    }
};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.reverseWord(s) << endl;
    }
    return 0;
}
