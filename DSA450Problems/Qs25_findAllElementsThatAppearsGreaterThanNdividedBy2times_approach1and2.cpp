#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> v) {
	//Approach 1
    
	/*
	int ans=-1;
	for(int i=0;i<v.size();i++)
	{
		int count=0;
		for(int j=0;j<v.size();j++)
		{
			if(v[i]==v[j]) count++;
		}
		if(count>(v.size()/2)) ans= v[i];
	}
	return ans;
	*/

	//Approach 2
	/*
	map<int,int>freq;
	int ans=-1;
	for(int i=0;i<v.size();i++) freq[v[i]]++;

	for(auto it:freq)
	{
		if(it.second>(v.size()/2)) ans=it.first;
	}
	return ans;
	*/
}