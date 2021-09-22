#include<bits/stdc++.h>
using namespace std;

void insertion(int arr[], int n)
{
	int key, j;
	int comp = 0; 
	int shift = 0;

	for(int i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		while(j >= 0 && arr[j] > key)
		{
			arr[j+1] = arr[j];
			j--;
			shift++;
			comp++;
		}

		arr[j+1] = key;
		shift++;
	}

	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";

	cout << endl;

	cout << "Number of comparison " << comp << endl;
	cout << "Number of shift "<< shift << endl;
}

int main()
{
	int T, n;
	cin >> T;
	while(T--)
	{
		cin >> n;
		int arr[n];

		for(int  i = 0; i < n; i++)
			cin >> arr[i];

		insertion(arr, n);
	}

	return 0;
}
