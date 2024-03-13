#include <iostream>

using namespace std;

int main()
{

	int tc;
	cin >> tc;

	while (tc--)
	{
		string str;

		cin >> str;
		// int c = str[1] - 48;
		// cout << c;
		for (char i = '1'; i < '9'; i++)
		{
			if (i != str[1])
			{

				cout << str[0] << i << endl;
			}
		}

		int i = 1;
		for (char ch = 'a'; ch <= 'h'; ch++)
		{
			if (ch != str[0])
			{
				cout << ch << str[1] << endl;
			}
			i++;
		}
	}
}