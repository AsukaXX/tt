#include<iostream>
using namespace std;
/*int main() {
	//�������ɼ� -- ���ڴ��ǰ����ֵĳɼ�����Сֵ
	int max = 0;
	int n;
	cin >> n;
	//�������ڴ�ųɼ�������
	int grade[200];
	for (int i = 0; i<n; i++) {
		cin >> grade[i];
	}
	//�������ڴ�Ŵ��ڵ�ǰ�ɼ�����������
	int g[200];
	//����������ͳ��g[]������Ԫ��ֵ
	int count = 0;
	for (int i = 0; i<n; i++) {
		//�����ǰ�ɼ�С��max  -- ����гɼ��Ƚ� ��󽫸�ֵ��ֵ��max
		//����count ����Ϊ0
		if (grade[i]<max) {
			for (int j = 0; j<i; j++) {
				//�����ǰ�ɼ�С����֮ǰ�ĳɼ� -- �� count+1 
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