#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selection(int arr[], int n)
{
	int min_index;
	int swaps = 0;
	int comp = 0;
	int j;
	for(int i = 0; i < n-1 ; i++)
	{
		min_index = i;
		for(j = i+1; j < n; j++){
			comp++;
			if(arr[j] < min_index){
				min_index = j;
				swaps++;
			}
		}

		swap(&arr[min_index], &arr[i]);	
	}

	for(int i = 0;i < n; i++)
		cout << arr[i] << " ";

	cout << endl;
	cout << "Number of comparison " << comp << endl;
	cout << "Number of swaps " << swaps << endl;
}

int main()
{
	int T, n;
	cin >> T;
	while(T--)
	{
		cin >> n;
		int arr[n];

		for(int i = 0; i < n; i++)
			cin >> arr[i];

		selection(arr, n);
	}
}
