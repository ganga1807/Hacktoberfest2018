#include<bits/stdc++.h>
using namespace std;


int f(int n){
	if(n==1||n==0)return 1;
	else if(n==2)return 2;
	else return f(n-1)+f(n-2);

}
int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	cout<<f(n);

   

    return 0;
}