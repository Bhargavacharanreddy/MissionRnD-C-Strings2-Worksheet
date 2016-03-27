/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/


#include <stdlib.h>
#include<string.h>

	int count_word_in_str_way_1(char *str, char *word)
	{
		int i, j;
		i = 0; j = 0;
		int count = 0;
		int len = strlen(str);
		int wlen = strlen(word);
		for (i = 0; i<len; i++)
		{
			if (str[i] == word[0])
			{
				for (j = 0; j<wlen; j++)
				{
					if (str[i + j] == word[j]);
					else
						break;
				}
				if (j == wlen)
					count++;
			}
		}
           return count;
	}
	
int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

