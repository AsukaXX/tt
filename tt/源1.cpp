#include<iostream>
using namespace std;
/*int main() {
	//定于最大成绩 -- 用于存放前面出现的成绩中最小值
	int max = 0;
	int n;
	cin >> n;
	//定义用于存放成绩的数组
	int grade[200];
	for (int i = 0; i<n; i++) {
		cin >> grade[i];
	}
	//定义用于存放大于当前成绩个数的人数
	int g[200];
	//计数，用于统计g[]数组中元素值
	int count = 0;
	for (int i = 0; i<n; i++) {
		//如果当前成绩小于max  -- 则进行成绩比较 随后将该值赋值给max
		//反正count 计数为0
		if (grade[i]<max) {
			for (int j = 0; j<i; j++) {
				//如果当前成绩小于它之前的成绩 -- 则 count+1 
				if (grade[i] < grade[j]) {
					count++;
				}
				 
			}
			g[i] = count;
			count = 0;
		}
		else {
			max = grade[i];
			g[i] = count;
		}
	}
	for (int i = 0; i<n; i++) {
		if (i == n - 1) {
			cout << g[i];
		}
		else {
			cout << g[i] << " ";
		}
	}
	return 0;
}*/