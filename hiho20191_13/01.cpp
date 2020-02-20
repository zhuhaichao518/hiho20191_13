#include <iostream>
using namespace std;
int main()
{
	int m, n, k;
	int num[100000];
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++)
	{
		cin >> num[i];
	}
	k = k * 100;
	for (int i = 0; i < m; i++)
	{
		int max_index = 0;
		int max_num = 0;
		for (int j = 0; j < n; j++)
		{
			num[j] += k;
			if (num[j] > max_num)
			{
				max_num = num[j];
				max_index = j;
			}
		}
		num[max_index] = max_num / 2;
	}
	long total = 0;
	for (int i = 0; i < m; i++)
	{
		total += num[i];
	}
	cout << total;
}