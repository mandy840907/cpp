#include <iostream>
using namespace std;

int main()
{
	string s;
	while(getline(cin, s))
	{
		for(int i = 0; i < s.length(); i++)
		{
			cout << static_cast<char>(s[i] - 7);
		}
		cout << endl;
	}
	return 0;
}