#include <iostream>
using namespace std;

int main (){
	int n , x , y;
	int max;
	cin >> n >> x >> y ;
	max = y - n + 1 ;
	if ( max*max + n - 1 >= x ) {
		cout << max ;
		for (int i = 1 ; i != n ; i++){
			cout <<endl << "1";
		}
	}else cout << "-1" ;
} 
