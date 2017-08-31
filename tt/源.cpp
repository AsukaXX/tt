#include<iostream>
#include<vector>
using namespace std;

/*int main() {
	vector<int> grade;
	int n = 0;
	int g = 0;
	int num = 0;
	int max = 0;
	int min = 0;
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		num = 0;
		cin >> g;
		if (g >= max)
		{
			num = 0;
			max = g;
		}
		else if(g <= min){
			min = g;
			num = i;

		}else
			//if (i>0) {
			for (int j : grade)
			{
				if (j > g)
					num++;
			}
			cout << num;
		//}
		//else
			//cout << num;
		if (i < n-1)
			cout << " ";
		grade.push_back(g);
	}
	return 0;
}*/