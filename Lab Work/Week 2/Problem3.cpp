#include<bits/stdc++.h>
#include<unordered_set>

using namespace std;

void pairs(vector<int> ans, int key)
{
	sort(ans.begin(), ans.end());


	unordered_set<int>res;
	int i = 0;

	while(i < ans.size())
	{
		/*if(res.find(ans[i]) != res.end())
		{
			i++;
			break;
		}
		*/

		int  j = i+1;

		while(j < ans.size())
		{
			if(abs(ans[j] - ans[i]) == key)
			{
				res.insert(i);
				res.insert(j);
				break;
			}
			j++;
		}
		i++;
	}

	if(res.size() == 0)
	{
		cout << "No Pairs" << endl;
		return;
	}

	cout << "Pairs Found ";
	cout << res.size()/2 << endl;
	return;

}

int main()
{
	int T;
	cin >> T;
	int n, key, x;

	while(T--)
	{
		cin >> n;

		vector<int> ans;

		for(int i = 0; i < n; i++)
		{
			cin >> x;
			ans.push_back(x);
		}

		cin >> key;

		pairs(ans, key);
	}

	return 0;
}
