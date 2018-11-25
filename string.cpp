#include <iostream>
int strlength(std::string &str)
{
	int i = 0;
	while(str[i]) 
		i++;
	return i;
}

void strupper(std::string &str)
{
	int lenght = strlength(str);
	for(int i = 0; i < lenght; i++)
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}

}
void strlower(std::string &str)
{
	int lenght = strlength(str);
	for(int i = 0; i < lenght; i++)
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}

}
void strreverse(std::string &str)
{
	int lenght = strlength(str);
    for(int i=0; i < lenght/2; i++)
    {
        char temp=str[i];
        str[i]=str[lenght-i-1];
        str[lenght-i-1]=temp;
    }
}

int strcount(std::string &str, char ch)
{
	int k = 0;
	int lenght = strlength(str);
	for(int i = 0; i < lenght; i++)
		if (str[i] == ch)
			k++;
	return k;
}

bool isdigit(std::string &str)
{
	bool t = true;
	int lenght = strlength(str);
	for(int i = 0; i < lenght; i++)
		if(!(str[i] >= 48 && str[i] <= 57 && t))
			t = false;
	return t;
}
bool isalpha(std::string &str)
{
	bool t = true;
	int lenght = strlength(str);
	for(int i = 0; i < lenght; i++)
		if(!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) && t))
			t = false ;
	return t;
}
bool isalnum(std::string &str)
{
	int lenght = strlength(str);
	bool t = true;
	for(int i = 0; i < lenght; i++)
		if(!((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) && t))
			t = false;
	return t;
	
}
bool isprint(std::string &str)
{
	int lenght = strlength(str);
	bool t = true;
	for(int i = 0; i < lenght; i++)
		if(!(str[i] >= 32 && str[i] <= 126) && t)
			t = false;
	return t;
}
bool isgraph(std::string &str)
{
	int lenght = strlength(str);
	bool t = true;
	for(int i = 0; i < lenght; i++)
		if(!(str[i] >= 33 && str[i] <= 126) && t)
			t = false;
	return t;
}
bool islower(std::string &str)
{
	int lenght = strlength(str);
	bool t = false;
	for(int i = 0; i < lenght; i++)
		if(str[i] >= 'a' && str[i] <= 'z')
			t = true;
	return t;
}
bool isupper(std::string &str)
{
	int lenght = strlength(str);
	bool t = true;
	for(int i = 0; i < lenght; i++)
		if(!(str[i] >= 'A' && str[i] <= 'Z') && t)
			t = false;
	return t;
}
bool isblank(char &ch)
{
	if(ch == 32 || ch == 11) return true;
	else return false;

}
void strdel(std::string &str, int n, int k)
{
	int lenght = strlength(str);
	if(n <= lenght && n <= n+k )
	{
		int i = 0;
		int j = 0;
		while(str[i])
		{
			while(j >= n && j < n+k) 			
				j++;
			str[i++] = str[j++];
			
		}		
		
	}
	else return;
}

int strpos(std::string &str, char ch)
{
	int i = 0;
	while(str[i] != ch)
			i++;
	return i;
}
int strlength(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

void strcopy(char *newstr, char *str)
{	
	int i = 0;
	while(str[i] != '\0')
		newstr[i++] = str[i];	
}
void strupper(char *str)
{
	int lenght = strlength(str);
	for(int i = 0; i < lenght; i++)
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}

}
void strlower(char *str)
{
	int lenght = strlength(str);
	for(int i = 0; i < lenght; i++)
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}

}
void strreverse(char *str)
{
	int lenght = strlength(str);
    for(int i=0; i < lenght/2; i++)
    {
        char temp=str[i];
        str[i]=str[lenght-i-1];
        str[lenght-i-1]=temp;
    }
}
void strjoin(char *str1, char *str2, char *str3)
{
	int k = 0;
	int lenght2 = strlength(str2);
	int lenght3 = strlength(str3);
	for(int i = 0; i < lenght2; i++)
		str1[k++] = str2[i];
	for(int i = 0; i < lenght3; i++)
		str1[k++] = str3[i];
}
void strcut(char *newstr, char *str, int n, int k)
{
	int index = 0;
	int lenght = strlength(str);
	if(n <= k && k <= lenght)
		for(int i = n; i <= k; i++)	
			newstr[index++] = str[i];
}
int strcompare(char *str1, char *str2)
{
	bool equal = false;
	bool less = false;
	bool more = false;
	int lenght1 = strlength(str1);
	int lenght2 = strlength(str2);

	if (lenght1 == 0 && lenght2 == 0)
		return 0;

	if(lenght1 == lenght2)
		for(int i = 0; i < lenght1; i++)
			if(str1[i] == str2[i])
				equal = true;
			else
			{
				equal = false;
				break;
			}
	if(equal) return 0;

	if(lenght1 <= lenght2)	 
		for(int i = 0; i < lenght2 + 1; i++)
			if(str1[i] != str2[i] && str1[i] <= str2[i])
			{	
				less = true;
				break;
			}		
	if(less) return -1;
	if(lenght2 <= lenght1)	 
		for(int i = 0; i < lenght1 + 1; i++)
			if(str1[i] != str2[i] && str1[i] <= str2[i])
			{	
				more = true;
				break;
			}
	if(more) return 1;	
}
int strcount(char *str, char s)
{
	int k = 0;
	int lenght = strlength(str);
	for(int i = 0; i < lenght; i++)
		if (str[i] == s)
			k++;
	return k;
}
bool isdigit(char *str)
{
	bool t = true;
	int lenght = strlength(str);
	for(int i = 0; i < lenght; i++)
		if(!(str[i] >= 48 && str[i] <= 57 && t))
			t = false;
	return t;
}
bool isalpha(char *str)
{
	bool t = true;
	int lenght = strlength(str);
	for(int i = 0; i < lenght; i++)
		if( !((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) )
			t = false;
	return t;
}
bool isalnum(char *str)
{
	bool t = true;
	int lenght = strlength(str);
	for(int i = 0; i < lenght; i++)
		if(!((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) && t)
			t = false;
	return t;
	
}
bool isprint(char *str)
{
	bool t = true;
	int lenght = strlength(str);
	for(int i = 0; i < lenght; i++)
		if(!(str[i] >= 32 && str[i] <= 126) && t)
			t = false;
	return t;
}
bool isgraph(char *str)
{
	bool t = true;
	int lenght = strlength(str);
	for(int i = 0; i < lenght; i++)
		if(!(str[i] >= 33 && str[i] <= 126) && t)
			t = false;
	return t;
}
bool islower(char *str)
{
	bool t = true;
	int lenght = strlength(str);
	for(int i = 0; i < lenght; i++)
		if(!(str[i] >= 'a' && str[i] <= 'z') && t)
			t = false;
	return t;
}
bool isupper(char *str)
{
	bool t = true;
	int lenght = strlength(str);
	for(int i = 0; i < lenght; i++)
		if(!(str[i] >= 'A' && str[i] <= 'Z') && t)
			t = false;
	return t;
}
bool isblank(char ch)
{
	if(ch == 32 || ch == 11) return true;
	else return false;

}
void strdel(char *str, int n, int k)
{
	if(n != 0 && n <= k && str != NULL)
	{
		n = n - 1;
		char *p = str;
		char *p1 = &str[n];	
		char *p2 = &str[n+k];	
		while(*str)
		{
			if(!(str >= p1 && str < p2))
				*p++ = *str;
			str++;
		}
		*p = '\0';
		
	}
	else return;

}
int strpos(char *str, char ch)
{
	int i = 0;
	while(*str)
		if(str[i] != ch)
			i++;
		else break;
	return i;
}

int main()
{
	std::string a;

	std::getline(std::cin, a);

	if(isgraph(a))
		std::cout << "graph" << std::endl;
	if(isprint(a))
		std::cout << "print" << std::endl;

	return 0;
}