#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s);

int main()
{
	string str;
	cout <<"Please enter a string." << endl;
	cin >> str;
	bool answer = isPalindrome(str);

	if (answer == true)
	{	cout << str <<" is a palindrome!" << endl;	}
	else
	{	cout << str <<" is not a palindrome!" << endl;	}

	system("pause");
	return 0;

}

bool isPalindrome(string s)
{
	int index1 = 0;
	int index2 = s.length()-1;
	bool result = true;

	if(index1 > index2)
	{	return result;	}

	else if(s[index1] == s[index2])
	{ result  = isPalindrome(s.substr( (index1-1),(index2-1) ));	}

	else
	{	return false;	}
}


