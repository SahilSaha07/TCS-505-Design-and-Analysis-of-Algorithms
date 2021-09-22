#include<bits/stdc++.h>

using namespace std;

void binarySearch(int arr[], int n, int key)
{
	int start = 0;
	int stop = n-1;
	int mid;
	int count = 0;

	while(start <= stop)
	{
		mid = start + (stop - start)/2;
		if(arr[mid] > key)
			stop = mid - 1;
		else if(arr[mid] < key)
			start = mid + 1;

		else{
			cout << "Present " << count+1 << endl;
			return;
		}

		count++;
	}

	cout << "Not Present " << count << endl;
	return;
}

int main()
{
	int T;
	cin >> T;
	int n;
	int key;
	int pos;

	while(T--)
	{
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		cin >> key;

		binarySearch(arr, n, key);
	}

	return 0;
}
