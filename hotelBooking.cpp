#include <bits/stdc++.h>
using namespace std;

bool booking(vector<int> &a, vector<int> &d, int k)
{
    vector<pair<int, int> > temp(a.size() + d.size());
    for (int i = 0; i < a.size(); i++)
    {
        temp[i].first = a[i];
        temp[i].second = 1;

        // cout << temp[i].second <<"\n";
    }
    for (int i = 0; i < d.size(); i++)
    {
        temp[a.size() + i].first = d[i];
        temp[a.size() + i].second = 0;
        // cout << temp[a.size() + i].second << "\n";
    }
    sort(temp.begin(), temp.end());
    int count = 0;
    for (int i = 0; i < temp.size(); i++)
    {
        if(count>k)
        {
            return false;
        }
        // cout <<temp[i].second <<'\n';
        if (temp[i].second == 1)
        {
            count++;
        }
        else
        {
            if (temp[i].second == 0)
                count--;
        }
        
        
    }
  
    return true;
        
}
int main()
{
    vector<int> arrival;
    arrival.push_back(1);
    arrival.push_back(3);
    arrival.push_back(5);

    vector<int> departure;
    departure.push_back(2);
    departure.push_back(4);
    departure.push_back(8);

    int k = 1;
    // for(int i=0;i<arrival.size();i++)
    // {
    //     cout<< arrival[i];
    // }
    bool result= booking(arrival, departure, k);
    cout <<result;
    return 0;
}