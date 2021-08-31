#include <bits/stdc++.h>
using namespace std;
#include <vector>;
void Q2(vector<int> &T, vector<vector<int>> &Q)
{
	for (int q = 0; q < Q.size(); q++)
	{
		vector<int> Toys = T;
		int Amount = Q[q][0];
		int brokenToys = Q[q][1];
		int j;
		for (j = 2; j < Q[q].size(); j++)
		{
			Toys[(Q[q][j] - 1)] = 0;
		}

		sort(Toys.begin(), Toys.end());

		int sum = 0;
		int count = 0;
		for (j = Q[q][1]; j < Toys.size(); j++)
		{

			sum = Toys[j] + sum;
			count++;
			if (Amount - (Toys[j] + sum) < 0)
			{
				break;
			}
			if (sum == Amount)
			{
				count++;
				break;
			}
		}

		cout << count << "\n";
	}
}

int main()
{

	vector<int> toysCost{7, 3, 6, 8, 2, 1, 4, 9, 5, 10};

	vector<vector<int>> Q{
		{10, 2, 2, 5},
		{15, 1, 1},
		{20, 3, 1, 2, 3},
		{100, 0}};
	Q2(toysCost, Q);
	return 0;
}
