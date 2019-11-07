#include <iostream>
#include <vector>
using namespace std;

void test(int n)
{
	int ret = 1;
	vector<int> m;
	m.resize(n);

	for (int i = 0; i < n; i++)
		cin >> m[i];

	for (int i = 1; i < n - 1; ++i)
	{
		if ((m[i - 1] > m[i] && m[i] < m[i + 1])
			|| (m[i - 1] < m[i] && m[i] > m[i + 1]))
		{
			ret++;
			if (i != n - 3)
				i++;
		}
	}

	cout << ret << endl;

}

int main()
{
	int n = 0;
	cin >> n;

	test(n);

	system("pause");
	return 0;
}
