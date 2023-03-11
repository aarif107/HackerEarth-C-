#include<bits/stdc++.h>
using namespace std;

int main() {
int n,r;
cin>>n>>r;
int a[n];

for(int i=0;i<n;i++){
    cin>>a[i];
}
while(r--){
    int temp;
    temp=a[0];
    for(int i=0;i<n;i++){
        a[i]=a[i+1];
    }
    a[n-1]=temp;
}
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
	return 0;
}
