#include<bits/stdc++.h>

using namespace std;

void solve(int arr[], int key, int n)
{
	for(int i = 0; i < n; i++)
		if(arr[i] == key){
			cout << "Present " << i+1 << endl;
			return;
		}

	cout << "Not Present " << n << endl;
	return;
}

int main()
{
	int T;
	cin >> T;
	int key;
	int n;

	while(T--)
	{
		cin >> n;
		int arr[n];

		for(int i = 0; i < n; i++)
			cin >> arr[i];

		cin >> key;

		solve(arr, key, n);

		cout << endl;
	}

	return 0;
}
