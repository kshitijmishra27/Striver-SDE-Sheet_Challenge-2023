#include <bits/stdc++.h>
int maximumProduct(vector<int> &arr, int n)
{
	
	int pre = 1, suff = 1, maxi = INT_MIN;

	for(int i=0; i<arr.size(); i++){

		if(pre == 0) pre = 1;
		if(suff == 0) suff = 1;

		pre *= arr[i];
		suff *= arr[n-1-i];

		maxi = max(maxi, max(pre, suff));

	}

	return maxi;

}
