#include<iostream>
#include<math.h>
using namespace std;

int main(){
  
  int a, b ,tmp;
  double ans;

  cin >> a >> b;

  ans = (a + b) / 2;

  if (ans > ans/10*10){
    tmp = ans + 1;
  }
  if (ans = ans/10*10){
    tmp = ans;
  }
      
  cout << ans << endl;
}
