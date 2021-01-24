#include <iostream>
using namespace std;
int a[41] = {0,};
int b[41] = {0,};

int fibonacci(int nn) {
  a[0]=1;
  a[1]=0;
  b[0]=0;
  b[1]=1;
  for(int i=2;i<nn;i++){
    a[i]=a[i-1]+a[i-2];
    b[i]=b[i-1]+b[i-2];
  }
  return 0;
}

int main(){
  int n;
  cin>>n;
  fibonacci(41);
  for(int i=0;i<n;i++){
      int t=0;
      cin>>t;
      cout<<a[t]<<" "<<b[t]<<endl;
  }
  return 0;
}
