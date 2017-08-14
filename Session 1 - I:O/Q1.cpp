/*SESSION: Input and Output
Q.1211111: Prime Number?
Question Description
Check the given number is prime or not

TEST CASE ! 
INPUT

9

OUTPUT


NO

TEST CASE 2
INPUT

7
OUTPUT


YES
*/

#include <iostream>
using namespace std;
int main()
{
  int i,n;
  bool a;
  cin >> n;
  for(i=2; i<n; i++){
  
  if (n%i==0){
  cout << "NO";
    a = false;
    break;
  }
      else {
  	a =true;
    continue;
  }}
      if(a){
    cout << "YES";
  }
	return 0;
}