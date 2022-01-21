#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string s = "*9J<qiEUoEkU]EjUc;U]EEZU`EEXU^7fFoU^7Y*_D]s";
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i]==42)
		{
			s[i]=65;
		}
		s[i]+=10;

	}
	cout << s;
	return 0;
}
