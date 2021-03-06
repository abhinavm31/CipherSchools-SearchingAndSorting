//Search in sorted matrix

#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

void binarySearch(int a[][MAX], int n, int m, int k, int x)
{
	int l = 0, r = m - 1, mid;
	while (l <= r)
	{
		mid = (l + r) / 2;

		if (a[x][mid] == k)
		{
			cout<< x << "," << mid << endl;
			return;
		}

		if (a[x][mid] > k)
			r = mid - 1;
		if (a[x][mid] < k)
			l = mid + 1;
	}
	cout <<"Not found"<< endl;
}

void findRow(int a[][MAX], int n, int m, int k)
{
	int l = 0, r = n - 1, mid;
	while (l <= r)
	{
		mid = (l + r) / 2;

		if (k == a[mid][0]) 
		{
			cout << mid << ",0" << endl;
			return;
		}

		if (k == a[mid][m - 1])
		{
			int t = m - 1;
			cout << mid << "," << t << endl;
			return;
		}

		if (k > a[mid][0] && k < a[mid][m - 1])
		{
			binarySearch(a, n, m, k, mid);
			return;
		}

		if (k < a[mid][0])
			r = mid - 1;
		if (k > a[mid][m - 1])
			l = mid + 1;
	}
}

int main()
{
	int n = 4; 
	int m = 5; 

	int a[][MAX] = {{0, 6, 8, 9, 11},
					{20, 22, 28, 29, 31},
					{36, 38, 50, 61, 63},
					{64, 66, 100, 122, 128}};

	int k = 31;
	findRow(a, n, m, k);
	
	return 0;
}
