#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string s = "08'5[Z'Y:H3?X2K3V)?D2G3?H,N6?G$R(G]";
	for (int i = 0; i < s.length(); i++)
	{
		s[i]+=32;
		if (155-s[i]>64 && 155-s[i]<=90)
		{
			s[i]=155-s[i];
		} else {
			if (219-s[i]>96 && 219-s[i]<=122)
			{
				s[i]=219-s[i];
			}
		}
	}
	cout << s;
	return 0;
}
