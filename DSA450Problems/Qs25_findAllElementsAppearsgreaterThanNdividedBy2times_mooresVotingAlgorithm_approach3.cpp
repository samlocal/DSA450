#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> v) {
	int ele=-1;
	int count=0;

	for(int i=0;i<v.size();i++)
	{
		if(count==0)
		{
			ele=v[i];
			count=1;
		}
		else if(ele==v[i]) count++;
		else count--;
	}

	int chechingCount=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==ele) chechingCount++;
	}

	if(chechingCount>(v.size()/2)) return ele;
	return -1;
}