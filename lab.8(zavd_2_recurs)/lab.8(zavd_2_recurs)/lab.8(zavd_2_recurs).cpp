//Дано літерний рядок, який містить послідовність символів s0, ..., sn, ... .
//2. Замінити кожну пару сусідніх букв “SQ” або ”QS” трійкою зірочок “ * **”.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

char* Change(char* dest, const char* str, char* t, int i)
{
	if (str[i + 1] != 0)
	{
		if ((str[i] == 'S' && str[i + 1] == 'Q') || (str[i] == 'Q' && str[i + 1] == 'S'))
		{
			strcat(t, "***");
			return Change(dest, str, t + 3, i + 2);
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
			return Change(dest, str, t, i);
		}
	}
	else
	{
		*t++ = str[i++];
		*t++ = str[i++];
		*t = '\0';
		return dest;
	}
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	char* dest1 = new char[151];
	dest1[0] = '\0';
	char* dest2;
	dest2 = Change(dest1, str, dest1, 0);
	cout << "Modified string (result): " << dest2 << endl;
	return 0;
}