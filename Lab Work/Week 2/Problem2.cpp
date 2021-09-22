#include<bits/stdc++.h>

using namespace std;

void sequence(vector<int> arr)
{
	int diff;

	for(int i = arr.size(); i > 0; i--)
	{
		diff = arr[i] - arr[i-1];
		auto it = find(arr.begin(), arr.end(), diff);

		if(it != arr.end())
		{
			cout << "Sequence Found ";
			cout << it - arr.begin() + 1 << " " << i << " " << i + 1<< endl; // 1-index based..not 0 based 
			return;
		}
	}

	cout << "Sequence Not Found" <<endl;
	return;
}

int main()
{
	int T;
	cin >> T;
	int n , x;
	while(T--)
	{
		cin >> n;
		vector<int> arr;
		for(int i = 0; i < n; i++)
		{
			cin >> x;
			arr.push_back(x);
		}

		sequence(arr);
	}

	return 0;
}
