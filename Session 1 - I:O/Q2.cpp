/*SESSION: Input and Output
Q.1211112: Print Pascals traingle
Question Description
Write a program to print pascal's triangle

Sample Input 1:
5
Output:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

Sample Input 2:
10
Output:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1
1 7 21 35 35 21 7 1
1 8 28 56 70 56 28 8 1
1 9 36 84 126 126 84 36 9 1
TEST CASE ! 
INPUT

5

OUTPUT


1
11
121
1331
14641

TEST CASE 2
INPUT

7
OUTPUT


1
11
121
1331
14641
15101051
1615201561
*/

#include <iostream>
using namespace std;
int main()
{
	int rows;
  	cin >> rows;
  	for(int i=0; i < rows; i++){
    	int val = 1;
      	for(int j=0; j<=i; j++){
        	cout << val;
          	val = val*(i - j)/(j+1);
          	
        }
      cout << endl;
    }
	return 0;
}