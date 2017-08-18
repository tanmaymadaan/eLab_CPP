/*SESSION: Input and Output
Q.1211113: Print Floyds
Question Description
Write a program to print Floyds triangle upto the given n rows

TEST CASE ! 
INPUT

5

OUTPUT


1
23
456
78910
1112131415

TEST CASE 2
INPUT

4
OUTPUT


1
23
456
78910*/

#include <iostream>
using namespace std;
int main()
{
	int n, i, c, a = 1;
  	cin >> n;
  
  	for(i = 1; i <= n; i++){
    	
      for(c = 1; c <= i; c++){
		cout << a;
        a++;	
      }
      cout << endl;
    }
	return 0;
}