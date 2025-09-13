#include<bits/stdc++.h>
using namespace std;
void pr(int p,int s){
	for(int i=0;i<p;i++) cout<<0<<' '<<i<<endl;
	for(int i=1;i<p;i++) cout<<i<<' '<<0<<endl;
	for(int i=1;i*(p-1)<=s-p*2+1;i++) for(int j=1;j<p;j++) cout<<i<<' '<<j<<endl;
	for(int i=1;i<=s-p*2+1-(p-1)*int((s-2*p+1)/(p-1));i++) cout<<int((s-2*p+1)/(p-1))+1<<' '<<i<<endl;
}
void Main(){
	int p,s;
	cin>>p>>s;
	int u=__gcd(p,s);
	p/=u;
	s/=u;
	float r=2*float(s)/float(p-2*s);
	if(r==int(r)&&p>2*s){
		cout<<2*s/(p-2*s)<<endl;
		for(int s1=0;s1<2*s/(p-2*s);s1++) cout<<0<<' '<<s1<<endl;
		return;
	}
	if(p%4==2){p*=2;s*=2;}
	if(p%4!=0){p*=4;s*=4;}
	for(int i=1;s*i<50000;i++){
		//cout<<1;
		//cout<<p*i/2-1<<' '<<s*i<<endl;
		if(p*i/2-1>s*i) {cout<<-1<<endl;return;}
		else if(p*p*i*i/16>=s*i) {cout<<s*i<<endl;pr(p*i/4,s*i);return;}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	//pr(5,25);
	int n;
	cin>>n;
	for(int i=0;i<n;i++) Main();
	return 0;
}
