#include <iostream>
#include <vector>
using namespace std;

int main() {
	int i, n;
	
	vector<int> c(8);
	
	n = 10;
	
	i = 3;
	c[0]++;
	
	while(i <= n){
		c[1]++;
		
		int k = 1;
		c[2]++;
		
		while(k < n){
			c[3]++;
			
			if(k % 2){
				//cout << "k\n";
				c[5]++;
			}
			c[4]++;
			
			k = k + 1;
			c[6]++;
		}
		c[3]++;
		
		i = i + 1;
		c[7]++;
	}
	c[1]++;
	
	int total = 0;
	
	for(auto& u : c) total += u; 
	
	
	for(int i = 0; i < 8; i++){
		cout << "C" << i << ": " << c[i] << "   ";
	}
	cout << "\nExpected: " << 1 + n-1 + n-2 + (n-2)*n + (n-2)*(n-1) + (n-2)*n/2 + (n-2)*(n-1) + (n-2) << "\n";
	
	cout << "Obtained: " << total << "\n";
	
	return 0;
}
