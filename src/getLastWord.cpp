/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<malloc.h>
void reversestr(char *input, int begin, int end)/*function to reverse a given string*/
{

	while (begin < end)
	{
		char temp = input[begin];
		input[begin] = input[end];
		input[end] = temp;
		++begin; --end;
	}
}
char * get_last_word(char  *str)
{
	if (str == NULL || str == " ")/*checking for invalid inputs*/
		return NULL;
	char *lastword;
	int len = 0, index = 0;
	lastword = (char *)malloc(20 * sizeof(char));
	for (len = 0; str[len]; len++);/*calculating the length of given string*/
	for (int i = len - 1; i >= 0; i--)
	if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 48 && str[i] <= 57))
		{
			lastword[index++] = str[i];
			if (str[i - 1] == 32)
				break;
		}
    reversestr(lastword, 0, index - 1);
	lastword[index] = '\0';
	return lastword;/*returning the string*/
}
