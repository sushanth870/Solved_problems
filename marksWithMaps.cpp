#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<int,multiset<string> > m;
    int n, i = 0;
    cin >> n;

    while (i < n)
    {
        string fn;
        int x;
        cin >> fn >> x;
        m[-1*x].insert(fn);
        i++;
    }
    
    for(auto &mark :m){
        auto students = mark.second;
        int marks = mark.first;
        for(auto student :students){
            cout<<student<<" "<<-1*marks<<endl;
        }
    }
}

