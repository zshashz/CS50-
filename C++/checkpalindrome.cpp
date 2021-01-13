#include <iostream>
using namespace std;

// A Palindrome number is a number that reads the same backwards as forwards

int main()
{
     int n, num, digit, rev = 0;

     cout << "Enter a positive number: ";
     cin >> num;

     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } 
     while (num != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << " The number is a Palindrome.";
     else
         cout << " The number is not a pPalindrome.";

cout<<endl;

return 0;
}
