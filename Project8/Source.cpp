#include <iostream>
using namespace std;
void palindrome(char arr[100]);

int main()
{
	char phrase[100];
	cout << "Enter a phrase here: " << endl;
	cin.getline(phrase, 100);

	palindrome(phrase);

	system("pause");
}
void palindrome(char arr[100])
{
	int i, j;
	j = strlen(arr) - 1;
	bool a = 0;
	for (i = 0; i < j; i++, j--)
	{
		if (arr[i] == arr[j])
		{
			a = 1;
		}
		else
		{
			a = 0;
			break;
		}
	}
	
	if (a == true)
	{
		cout << "The word or phrase you entered is a palindrome" << endl;
	}
	else 
		cout << "The word or phrase you entered is a not a palindrome" << endl;

}

