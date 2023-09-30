#include <stdio.h>
#include <stdbool.h>

int stringLength(char *str)
{
  int length = 0;
  while (str[length] != '\0')
  {
    length++;
  }
  return length;
}

bool checkIfStringIsPalindrome(char *str)
{
  int length = stringLength(str);

  // Caso base
  if (length <= 1)
    return true;

  int start = 0;
  int end = length - 1;

  while (start < end)
  {
    if (str[start] != str[end])
      return false;
    start++;
    end--;
  }

  return true;
}

int main()
{
  char word[] = "larutanatural";
  bool isPalindrome = checkIfStringIsPalindrome(word);

  if (isPalindrome)
    printf("Es Palindromo\n");
  else
    printf("No Es Palindromo\n");

  return 0;
}
