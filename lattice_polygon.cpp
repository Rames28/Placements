#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,boarder=0,inside,area=0;
		cin>>n;
		int x[n+1],y[n+1];

		for(int i =0;i<n;i++){
			cin>>x[i]>>y[i];
		}
		x[n]=x[0];
		y[n]=y[0];
		for(int i=0;i<n;i++){
			area=area+(x[i]*y[i+1]-x[i+1]*y[i]);
			boarder=boarder+abs(__gcd(x[i]-x[i+1],y[i]-y[i+1]));
		}
		cout<<"inside is "<<(abs(area)-boarder+2)/2<<endl;
	}	
}