#include<iostream>
using namespace std;
int main(){
  int n,A[1000];
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>A[i];
  }
  for(int i=n;i>=1;i--){
    cout<<A[i]<<endl;
  }
}
