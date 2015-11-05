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
    
    // print first initial
    printf("%c", toupper(name[0]));
    
}
