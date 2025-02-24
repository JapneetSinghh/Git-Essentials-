// 9. Write a Program to Count the Number of Vowels

#include <iostream>
using namespace std;
char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

// I am modifing this file, trying to cause a merge conflict
bool letsCheckVowels(char ch)
{
    int n = sizeof(vowels) / sizeof(vowels[0]);

    for (int i = 0; i <= n; i++)
    {
        if (vowels[i]==ch)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    char ch = 'g';
    int isVowel = 0;
    string str = "My name is Sidak";
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (letsCheckVowels(str[i]))
        {
            isVowel = isVowel + 1;
        }
    }
    cout<<"Number of vowels are: "<< isVowel<<endl;
}