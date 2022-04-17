#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int simple_printf_ver(const char *str)
{
	int i, len = 0; // initialize counter and len//
	// new str is empty
	char *newstr = NULL
		// we need to make copy, so the original array in d function will still be intact, hence its this newstr conten that we will be using, we copied str content to newstr//
		while (str[len] != '\0')
	{
		len++;
	}
	// looped through string to get the length of string//
	newstr = malloc(sizeof(char) * (len + 1));
	// allocate memory to our new string//

	for (i = 0; str[i]; i++)
	{
		newstr[i] = str[i];
	}
	// we copied one afetr the other sontent of str to new str expect our null char//

	newstr[i] = '\0'
		// we need to add the null cahracter to the last string and we know null usully ends the  string//

		write(1, newstr, len)
		// we write to stdo the content of newstr no need to use _putchar since we can directly call write//
		//  for write stdi = 0, stdo =1 stderr = 2, hence why we allocater 1, next arg is where what we want to print is, len of what we print on the std//
		fre(newstr);
	// off course we need to free mem since we already printed
	return (len);
	// we must return d length of the stdo//
}
int main(void)
{
	simple_printf_("hello world\n");
	return (simple_printf)
}
