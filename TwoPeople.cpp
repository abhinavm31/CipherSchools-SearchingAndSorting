// Two People will meet or not
#include <bits/stdc++.h>
using namespace std;

bool everMeet(int x1, int x2, int v1, int v2)
{
	if (x1 < x2 && v1 <= v2)
		return false;
	
	if (x1 > x2 && v1 >= v2)
		return false;

	if (x1 < x2)
	{
		swap(x1, x2);
		swap(v1, v2);
	}

	return ((x1 - x2) % (v1 - v2) == 0);
}


int main()
{
	int x1, v1, x2, v2;
	cin>>x1>>v1>>x2>>v2;

	if (everMeet(x1, x2, v1, v2))
		printf("Yes");
	else
		printf("No");
	return 0;
}
