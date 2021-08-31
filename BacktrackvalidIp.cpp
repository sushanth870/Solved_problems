#include <bits/stdc++.h>
using namespace std;

bool isvalid(string str)
{

    string temp = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '.')
        {
            if (temp.size() > 1 && temp[0] == '0')
                return false;
            if (temp.size() > 3 || temp.size() < 0 || stoi(temp) > 255 || stoi(temp) < 0)
                return false;

            temp = "";
        }
        else
        {
            temp += str[i];
        }
    }
    if (temp.size() > 1 && temp[0] == '0')
        return false;
    if (temp.size() > 3 || temp.size() < 0 || stoi(temp) > 255 || stoi(temp) < 0)
        return false;

    return true;
}

void recFun(string &s, vector<string> &result, int index, int dc)
{
    // cout << "in rec\n";

    if (dc == 3)
    {
        if (isvalid(s))
        {
            // cout << "in isvalid\n";
            // cout << s << endl;
            result.push_back(s);
            return;
        }
        else
        {
            return;
        }
    }
    for (int i = 1; i < 4; i++)
    {
        if (s[index + i] != '\0')
        {
            string tempStr = s;
            s = s.substr(0, index + i) + "." + s.substr(index + i);
            // cout << s << endl;
            recFun(s, result, index + i + 1, dc + 1);
            s = tempStr;
            // cout << "after back: " << s << endl;
        }
        else
        {
            return;
        }
    }
}

vector<string> genIp(string &s)
{

    vector<string> result;
    int dotCount = 0, index = 0;
    recFun(s, result, index, dotCount);
    return result;
}
int main()
{
    string Q;
    cin >> Q;

    vector<string> ans = genIp(Q);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}