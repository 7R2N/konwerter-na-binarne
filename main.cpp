#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
	
	int a,c, i;
	vector <int> zamiana;
	cout << ("Podaj liczbe ktora chcesz przekonwertowac\n");
	cin >> a;
	while (a!=0) {
		c = a%2;
		a = a/2;
		zamiana.push_back(c);
	}
	cout << zamiana.size();
	
	for(i=zamiana.size()-1; i!=-1; i--) {
		cout << zamiana[i];
	}
	return 0;
}		
