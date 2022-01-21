#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string s = "ZRIU]HdANdJAGDIAxIAvDDsAyDDq_";
	for (int i = 0; i < s.length(); i++)
	{
		s[i]-=2;
		if (s[i]-13>64 && s[i]-13 <=77)
		{
			s[i]-=13;
		} else {
			if (s[i]-13>96 && s[i]-13 <=109)
			{
				s[i]-=13;
			} else {
				if (s[i]+13>77 && s[i]+13 <=90)
				{
					s[i]+=13;
				} else {
					if (s[i]+13>109 && s[i]+13 <=122)
					{
						s[i]+=13;
					} else {
						s[i]+=32;
					}
				}
			}
		}

	}
	cout << s;
	return 0;
}
