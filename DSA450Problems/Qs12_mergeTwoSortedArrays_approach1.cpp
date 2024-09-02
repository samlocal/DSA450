//https://www.naukri.com/code360/problems/merge-two-sorted-arrays-without-extra-space_6898839?leftPanelTabValue=SUBMISSION
#include<vector>
using namespace std;
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	int n=a.size();
	int m=b.size();
	vector<int>ans(n+m);
	int index=0;

	int left=0;
	int right=0;

	while(left<n && right<m)
	{
		if(a[left]<=b[right])
		{
			ans[index++]=a[left++];
		}
		else{
			ans[index++]=b[right++];
		}
	}

	while(left<n)
	{
		ans[index++]=a[left++];
	}

	while(right<m)
	{
		ans[index++]=b[right++];
	}

	for(int i=0;i<n+m;i++)
	{
		if(i<n)
		{
			a[i]=ans[i];
		}
		else{
			b[i-n]=ans[i];
		}
	}
	
}