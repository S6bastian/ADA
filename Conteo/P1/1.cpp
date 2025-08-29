#include <iostream>
#include <vector>
using namespace std;

int main() {
	int i, j, n;
	
	vector<int> c(6);
	
	n = 10;
	
	i = 3;
	c[0]++;
	j = 4;
	c[0]++;
	
	while(i < n){
		c[1]++;
		
		j = i;
		c[2]++;
		
		while(j <= 2*n){
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
	
	
	for(int i = 0; i < 6; i++){
		cout << "C" << i << ": " << c[i] << "   ";
	}
	cout << "\nExpected: " << 2 + (n-3)+1 + (n-3)*3 + (2*n+2-3)*(2*n+1-3)/2 + (2*n+2-3)*(2*n+1-3)/2 - 2*(n+2)*(n+1)/2 << "\n";
	
	cout << "Obtained: " << total << "\n";
	
	return 0;
}
