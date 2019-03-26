#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	while (scanf("%d", &n) != EOF){//輸入array裏面有多少個數字
		vector<int> Numbers(n);//新定義一個Numbers(n)的vector容器來儲存數組
		int Left = 0; //定義一個臨時的儲存left的索引值
		int sum = 0;//定義一個臨時的儲存sum的索引值
		int maxLeft = 0;//定義一個儲存左邊最大的索引值maxLeft
		int maxRight = 0;//定義一個儲存右邊最大的索引值maxRight
		int maxSum = 0;//定義一個儲存最大的和的值maxSum
		int i = 0;
		while(i<n){//當i<n時，執行while循環
			scanf("%d",&Numbers[i]);//依次向Numbers容器輸入值
			sum = sum + Numbers[i];//將輸入Numbers容器的值相加
			while ( sum > maxSum )//當sum>maxSum時,
			{
				maxRight = i;  //把maxRight設成當前的i值
				maxSum = sum;  //把當前的sum值儲存進maxSum
				maxLeft = Left;  //把當前的Left索引值儲存進maxLeft
			}
			while (sum < 0){  //當sum<0時
				Left = i + 1; //把當前i值+1儲存進Left
				sum = 0;	//把當前的sum值置0
			}
			i++; //執行完后，i自加1
		}
		printf("%d %d %d\n", maxLeft, maxRight, maxSum);//依次輸出maxLeft、maxRight、maxSum
		Numbers.clear();//清空容器Numbers
	}
	return 0;//置0
}