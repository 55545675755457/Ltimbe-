#include<bits/stdc++.h>
using namespace std;
void horenlarge(int y1,int x1,int y2,int le){
	cout<<x1+(le-1)/2<<' '<<y1<<endl;
	cout<<x1+(le-1)/2<<' '<<y2<<endl;
	for(int i=1;i<(le-1)/2+1;i++) cout<<x1+(le-1)/2-i<<' '<<y2<<endl<<x1+(le-1)/2+i<<' '<<y2<<endl<<x1+(le-1)/2-i<<' '<<y1<<endl<<x1+(le-1)/2+i<<' '<<y1<<endl;
}
void verenlarge(int x1,int y1,int x2,int le){
	cout<<x1<<' '<<y1+(le-1)/2<<endl;
	cout<<x2<<' '<<y1+(le-1)/2<<endl;
	for(int i=1;i<(le-1)/2+1;i++) cout<<x2<<' '<<y1+(le-1)/2-i<<endl<<x2<<' '<<y1+(le-1)/2+i<<endl<<x1<<' '<<y1+(le-1)/2-i<<endl<<x1<<' '<<y1+(le-1)/2+i<<endl;
}
void printsquare(int x,int y,int le){
	if(le!=1){
		printsquare(x+1,y+1,le-2);
		verenlarge(x,y+1,x+le-1,le-2);
		horenlarge(y,x+1,y+le-1,le-2);
		cout<<x<<' '<<y<<endl<<x+le-1<<' '<<y<<endl<<x<<' '<<y+le-1<<endl<<x+le-1<<' '<<y+le-1<<endl;
	}
	else cout<<x<<' '<<y<<endl;
}
void Main(){
	int n,m;
	cin>>n>>m;
	if(n==m) printsquare(1,1,n);
	if(n>m){
		printsquare((n-m)/2+1,1,m);
		for(int i=(n-m)/2;i>0;i--) verenlarge(i,1,n-i+1,m);
	}
	if(n<m){
		printsquare(1,(m-n)/2+1,n);
		for(int i=(m-n)/2;i>0;i--) horenlarge(i,1,m-i+1,n);
	}
	cout<<endl;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++) Main();
	return 0;
}
