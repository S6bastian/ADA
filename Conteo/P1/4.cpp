#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
	
int main() {
	int n;
	
	int cSize = 6;
	
	vector<int> c(cSize);
	
	n = 10;
	
	
	int i = 2;
	c[0]++;
	
	while(i < n){
		c[1]++;
		
		int j = 2;
		c[2]++;
		
		while(j < i){
			c[3]++;
			
			j = j + 1;
			c[4]++;
		}
		c[3]++;
		
		i = i + 1;
		c[5]++;
	}
	c[1]++;
	
	
	int total = 0;
	
	for(auto& u : c) total += u; 
	
	
	for(int i = 0; i < cSize; i++){
		cout << "C" << i << ": " << c[i] << "   ";
	}
	cout << "\nExpected: " << 1 + n-1 + n-2 + (n-2)*(n-1)/2 + (n-3)*(n-2)/2 + n-2 << "\n";
	
	cout << "Obtained: " << total << "\n";
	
	return 0;
}

