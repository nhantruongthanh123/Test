#include <bits/stdc++.h>
using namespace std;

int getNum(string s, int l, int r)
{
    int res = 0;
    for (int i = l; i <= r; i++)
    {
        res = res * 10 + (s[i] - '0');
    }
    return res;
}

void check(int curr_sum, string s, int l, int target, bool &flag)
{
    if (l == s.length())
    {
        if (curr_sum == target)
            flag = true;
        return;
    }
    else
    {
        for (; l < s.size(); l++)
        {
            int val = getNum(s, 0, l);
        }
    }
}

bool isPunish(int n)
{
    string num = to_string(n);
}

int main()
{
    int n;
    cin >> n;
    while (n != -1)
    {
        if (isPunish(n))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
        cin >> n;
    }

    return 0;
}