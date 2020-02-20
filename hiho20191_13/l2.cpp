#include <iostream>
using namespace std;

void q_sort(int num[10000], int left, int right)
{
	if (left >= right) return;
	int l1 = left;
	int l2 = right;
	int med = num[left];
	int med_ind = left;
	while (l1 < l2)
	{
		while (num[l2] >= med && l1 < l2)
		{
			l2--;

		}
		num[l1] = num[l2];
		while (num[l1] <= med && l1 < l2)
		{
			l1++;
		}
		num[l2] = num[l1];
	}
}

void main2()
{
	int m, n, k;
	int num[100000];
	cin >> n >> m >> k;
	k = k * 100;
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	q_sort(num, 0, n - 1);
	for (int i = 0; i < m; i++)
	{

	}
}