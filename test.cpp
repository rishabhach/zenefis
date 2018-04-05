#include<bits/stdc++.h>
using namespace std;
#define pb push_back 
#define mp make_pair
#define loop(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
int n,m,k;
vector<string> sch;
vector<vector<int>> store;

int main(){
	int n,k;
	cin>>n>>k;
	vector<int>theorm(n+1);
	vector<int>behav(n+1);
	int sumT=0;
	
	loop(i,1,n+1){
		cin>>theorm[i];
	}
	
	loop(i,1,n+1){
		cin>>behav[i];
	}
	
	//theorm[0]=behav[0]==0?theorm[0]:0;
	loop(i,1,n+1){
		if(behav[i]==1)
			sumT+=theorm[i];
	}
	
	loop(i,1,n+1){
		if(behav[i]==0)
			theorm[i]+=theorm[i-1];
		else
			theorm[i]=theorm[i-1];
	}
	
	
	int maxdrop=INT_MIN;
	loop(i,k,n+1){
		if(maxdrop<(theorm[i]-theorm[i-k]))
				maxdrop=(theorm[i]-theorm[i-k]);
	}
	
	cout<<sumT+maxdrop<<endl;
	
	return 0;
}
