#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	while (scanf("%d", &n) != EOF){
		vector<int> Numbers(n);
		int Left = 0;
		int sum = 0;
		int maxLeft = 0;
		int maxRight = 0;
		int maxSum = 0;
		int i = 0;
		while(i<n){
			scanf("%d",&Numbers[i]);
			sum = sum + Numbers[i];
			while ( sum > maxSum )
			{
				maxRight = i;
				maxSum = sum;
				maxLeft = Left;
			}
			while (sum < 0){
				Left = i + 1;
				sum = 0;
			}
			i++;
		}
		printf("%d %d %d\n", maxLeft, maxRight, maxSum);
		Numbers.clear();
	}
	return 0;
}