#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int n;
	
	int cSize = 5;
	
	vector<int> c(cSize);
	
	n = 10;
	
	
	
	for(int i = 0; i <= n; i++){
		c[0]++;
		
		int j = n;
		c[1]++;
		
		while(1 <= j){
			c[2]++;
			
			// cout << "j\n";
			c[3]++;
			
			j = j/2;
			c[4]++;
		}
		c[2]++;
		
		
	}
	c[0]++;
	
	
	int total = 0;
	
	for(auto& u : c) total += u; 
	
	
	for(int i = 0; i < cSize; i++){
		cout << "C" << i << ": " << c[i] << "   ";
	}
	cout << "\nExpected: " << n+2 + n+1 + (n+1)*(int(log2(n))+2) + (n+1)*(int(log2(n))+1) + (n+1)*(int(log2(n))+1) << "\n";
	
	cout << "Obtained: " << total << "\n";
	
	return 0;
}


