#include<bits/stdc++.h>

using namespace std;

void jumpSearch(int arr[], int n, int key)
{
	sort(arr, arr+n);
	int jump = sqrt(n);
	int prev = 0;
	int count = 0;
	int flag = 0;

	while(jump < n-1)
	{
		if(arr[jump] >= key)
		{
			flag = 1;
			break;
		}
		else
		{
			prev = jump;
			jump += sqrt(n);
		}

		count++;
	}

	if(flag == 1)
	{
		for(int i = prev; i <= jump; i++){
			if(arr[i] == key){
				cout << "Present " << count+1 << endl;
				return;
			}
			else
				count++;
		}
	}

	if(flag == 0)
	{
		for(int i = prev; i < n; i++){
			if(arr[i] == key){
				cout << "Present " << count+1 << endl;
				return;
			}
			else
				count++;
		}
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

		jumpSearch(arr, n, key);
	}

	return 0;
}
