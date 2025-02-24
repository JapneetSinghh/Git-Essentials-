// 9. Write a Program to Count the Number of Vowels

#include <iostream>
using namespace std;
char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

bool checkVowel(char ch)
{
    int n = sizeof(vowels) / sizeof(vowels[0]);

    for (int i = 0; i <= n; i++)
    {
        if (ch == vowels[i])
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
        if (checkVowel(str[i]))
        {
            isVowel++;
        }
    }

    cout<<"Number of vowels are: "<< isVowel<<endl;
}