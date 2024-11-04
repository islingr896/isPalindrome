#include <stdio.h>
#include <string.h>

int isAlphanum (char c)
{
    return (c >= 'a' && c <= 'z') || (c>= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

int convertAlphaLower(char c)   
{
    return (c >= 'A' && c <= 'Z') ? c + 32: c;
}

int isPalindrome(char *s)
{
	int len;
    int check;
	len = strlen(s) - 1;
	
    check = 0;
    while(check < len)
    {
        if(isAlphanum(s[check]))
        {
            if(isAlphanum(s[len]))
            {
                if(convertAlphaLower(s[check]) != convertAlphaLower(s[len]))
                {
                    return 0;
                }
                check++;
                len--;
            }
            else
            {
                len--;
                
            }
        }
        else
        {
        	check++;
		}
    }
	
	return(1);
}

int main()
{
    char a[100];
    printf("enter: ");
    scanf(" %[^\n]%*c", a);
    ;
    if(isPalindrome(a) == 0)
    {
        printf("\nTrue!");
        
    }
    else
    {
        printf("\nFalse!");
    }
    return 0;
}




