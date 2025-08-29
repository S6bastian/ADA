#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int j, n;
	
	int cSize = 5;
	
	vector<int> c(cSize);
	
	n = 10;
	
	j = 1;
	c[0]++;
	
	while(j <= n){
		c[1]++;
		
		for(int i = 0; i <= n; i++){
			c[2]++;
			
			//cout << "i\n";
			c[3]++;
		}
		c[2]++;
		
		j = j * 2;
		c[4]++;
	}
	c[1]++;
	
	int total = 0;
	
	for(auto& u : c) total += u; 
	
	
	for(int i = 0; i < cSize; i++){
		cout << "C" << i << ": " << c[i] << "   ";
	}
	cout << "\nExpected: " << 1 + int(log2(n))+2 + (int(log2(n))+1)*(n+2) + (int(log2(n))+1)*(n+1) + int(log2(n))+1 << "\n";
	
	cout << "Obtained: " << total << "\n";
	
	return 0;
}
