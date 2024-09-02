//https://www.naukri.com/code360/problems/merge-two-sorted-arrays-without-extra-space_6898839?leftPanelTabValue=SUBMISSION
#include<bits/stdc++.h>
using namespace std;
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	int n=a.size();
	int m=b.size();

	int left=n-1;
	int right=0;

	while(left>=0 && right<m)
	{
		if(a[left]>b[right])
		{
			swap(a[left],b[right]);
			left--;
			right++;
		}
		else{
			break;
		}
	}

	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
}