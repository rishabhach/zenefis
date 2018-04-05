#include<bits/stdc++.h>
using namespace std;
#define pb push_back 
#define mp make_pair
#define loop(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;

vector<int> letters(26,0);

// find all char which has lower order then char c
ll findLowerOrderLetters(char c){
	ll a=0,b=c-97;
	loop(i,0,b){
		a+=letters[i];
	}
	return a;
}

//find fectorial of n
ll fect(ll n){
	if(n==0)
		return 1;
	return n*fect(n-1);
}

int main(){

	ll n;
	cin>>n;
	//store letters according to their order
	loop(i,0,n){
		char c;
		cin>>c;
		letters[c-97]=1;
	}
	// input string
	string s;
	cin>>s;
	
	//compute permutations
	ll result=0;
	loop(i,0,s.length()){
		// two case
		
		//1st take i th char of string and count all words which has lower order
		result+=findLowerOrderLetters(s[i])*fect(n-i-1);
		//2nd count those words which has s[i] char at ith position and have lower order
		letters[s[i]-97]=0;
	}
	
	cout<<result+1<<endl;
	return 0;
}
