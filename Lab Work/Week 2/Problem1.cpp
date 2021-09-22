#include<bits/stdc++.h>

using namespace std;

int first(int arr[], int x, int low, int high)
{
	if(high >= low)
	{
		int mid = low + (high-low)/ 2;

		if((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
			return mid;

		else if(x > arr[mid])
			return first(arr, x, (mid+1), high);

		else
			return first(arr, x, low, (mid-1));
	}

	return -1; 
}

int last(int arr[], int x, int low, int high, int n)
{
	if(high >= low)
	{
		int mid = low + (high - low)/2;

		if((mid == (n-1) || x < arr[mid + 1]) && arr[mid] == x)
			return mid;

		else if(x < arr[mid])
			return last(arr, x, low, (mid - 1), n);
		else
			return last(arr, x, (mid + 1), high, n);
	}

	return -1;
}

int main()
{
	int T;
	cin >> T;
	int n, x;

	while(T--)
	{
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];

		cin >> x;

		int first_index = first(arr, x, 0, n-1);
		int last_index = last(arr, x, 0, n-1, n);

		if(first_index == -1)
		{
			cout << "Not Present";
			return 0;
		}

		cout << "Present";
		cout << ((last_index - first_index) + 1) << endl;
		return 0;
	}
}
