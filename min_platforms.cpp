#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;
	cin>>n;
	string key;
	vector<pair<ll,ll> > v;

	for(int i=0;i<2*n;i++){
		cin>>key;
		key[key.size()-3]='0';
		v.push_back(make_pair(atoi(key.c_str()),(i%2)));
	}

	sort(v.begin(), v.end());
	ll count=1,max=1;

	for(int i=1;i<2*n;i++){
		if(v[i].second==0) count++;
		else count--;
		if(max<count) max=count;
	}
	cout<<max;
}