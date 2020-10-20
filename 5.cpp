//5
#include <iostream>
using namespace std;

int max(int y,int w){
	return y>w ? y : w;
}

int main (){
	int y , w;
	cin >> y >> w;
	if ( max(y,w) == 1 )	cout << "1/1";
	if ( max(y,w) == 2 )	cout << "5/6";
	if ( max(y,w) == 3 )	cout << "2/3";
	if ( max(y,w) == 4 )	cout << "1/2";
	if ( max(y,w) == 5 )	cout << "1/3";
	if ( max(y,w) == 6 )	cout << "1/6";
}
