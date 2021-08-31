#include <bits/stdc++.h>
using namespace std;
// bool cheackIfAlreadyTook(map<int, int> m, int k)
// {
//     bool a = true;
//     for (auto i : m)
//     {
//         if (i.second == k)
//         {
//             return true;
//         }
//     }
//     return false;
// }
string cheackDb(vector<pair<int, int> > p, int R)
{
    map<int, int> m1, m2;
    for (int i = 0; i < R; i++)
    {
        if (m2.find(p[i].second) == m2.end())
        {
            cout << "ck1\n";
            m1[p[i].first] = p[i].second;
            m2[p[i].second] = p[i].first;
        }
        else
        {
            cout << "ck2\n";
            auto it = m2.find(p[i].second);
            if ((*it).second != p[i].first){
                cout << "ck3\n";
            return "impossiable";
        }
    }
}
return "Possiable";
}

int main()
{
    int T, N, R;
    vector<pair<int, int>> p;

    cin >> T;
    for (int j = 0; j < T; j++)
    {
        cin >> N >> R;
        for (int i = 0; i < R; i++)
        {
            int id, db;
            cin >> id >> db;
            p.push_back(make_pair(id, db));
        }
        string v = cheackDb(p, R);
        cout << "Scenario #" << j + 1 << ": " << v << endl;
    }
}