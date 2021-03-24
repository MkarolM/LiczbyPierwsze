#include <iostream>
using namespace std;

int main()
{
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x == 1) cout << "NIE" << endl;
		if (x == 2) cout << "TAK" << endl;
		for (int j = 2; j < x; j++)
		{
			if (x % j == 0)
			{
				cout << "NIE" << endl;
				break;
			}
			if (j == (x - 1)) cout << "TAK" << endl;
		}
	}
	return 0;
}

