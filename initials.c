// include libraries
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// main function
int main(void)
{
    // get name as input
    string name = GetString();
    printf("hello, %s\n", name);
    
    // get first initial
    char initialOne = name[0];
    
    // find blankspace
    int i = 0;
    while(i < strlen(name))
    {
        if (name[i] == ' ')
        {
            break;
        }
        i++;
    }
    
    // get second initial
    char initialTwo = name[i + 1];
}
