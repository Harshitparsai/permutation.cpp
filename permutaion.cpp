#include<bits/stdc++.h>
using namespace std;
int main()
{
/*	int n;
	cin>>n;
	vector<int> permutation;
for (int i = 1; i <= n; i++) {
permutation.push_back(i);
}
do {
	bool t=true;
	for(int i = 1 ; i<permutation.size();i++)
	{
		if(abs(permutation[i]-permutation[i-1])==1)
		{
			t=false;
		}
	}
	if(t)
	{
		for(int i = 0 ; i<permutation.size();i++)
		{
		cout<<permutation[i]<<" ";
		}
	
		return(0);
	}
} while (next_permutation(permutation.begin(),
permutation.end()));
cout<<"NO SOLUTION";*/

int n;
cin>>n;
int odd;
int even;
if(n == 1)
{
	cout<<1;
	return(0);
}
if(n<=3)
{
	cout<<"NO SOLUTION";
	return(0);
}
if(n%2==0)
{
	even=n;
	odd=n-1;
}
else{
	odd = n;
	even = n-1;
}
while(odd>0)
{
	cout<<odd<<" ";
	odd-=2;
}
while(even>0)
{
	cout<<even<<" ";
	even-=2;
	
}





return(0);


}
