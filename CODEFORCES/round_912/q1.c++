#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;

	while (tc--)
	{
		unsigned long long n, p, l, t;
		cin >> n >> p >> l >> t;
		unsigned long long nt = ceil((double)n / 7);

		if (nt % 2 == 0)
		{
			int bestcase = ceil((double)p / (double(l) + 2 * double(t)));
			int td = nt / 2;

			if (td >= bestcase)
			{
				cout << n - bestcase << endl;
			}
			else
			{
				unsigned long long remp = p - td * (l + 2 * t);
				int lecdays = ceil((double)remp / double(l));
				cout << n - td - lecdays << endl;
			}
		}
		else
		{
			int bestcase = ceil((double)p / (double(l) + 2 * double(t)));
			int td = nt / 2;
			if (td >= bestcase)
			{
				cout << n - bestcase << endl;
			}
			else
			{
				unsigned long long remp = p - td * (l + 2 * t);
				// cout << remp << " " << l << " " << t << "  ";
				int val = remp - l - t;
				if (val <= 0)
				{
					cout << n - td - 1 << endl;
				}
				else
				{
					remp = remp - l - t;
					int lecdays = ceil((double)remp / double(l));
					cout << n - lecdays - td - 1;
				}
			}
		}
	}
	return 0;
}