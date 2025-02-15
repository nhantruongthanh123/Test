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

bool check(string s, int curr_sum, int i, int target)
{
    if (i == s.length())
    {
        return curr_sum == target;
    }
    else
    {
        for (int t = i; t < s.length(); t++)
        {
            int val = getNum(s, i, t);
            if (check(s, curr_sum + val, t + 1, target))
            {
                return true;
            }
        }
    }
    return false;
}

bool isPunish(int n)
{
    string num = to_string(n * n);
    return check(num, 0, 0, n);
}

int main()
{

    for (int i = 1; i <= 1000; i++)
    {
        if (isPunish(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}