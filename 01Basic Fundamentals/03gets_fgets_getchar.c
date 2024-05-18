#include <stdio.h>
#include <string.h>
int main (){

    char name[100];
    char name1[100];
    char name2[100];
    
    // using scanf
    printf("Enter any Name scanf: ");
    scanf("%s", &name);
    fflush(stdin); 
    /*without it using gets after scanf won't work
    , cause scanf leaves a trailing newline character (\n) in the input buffer when reading string input.

    This trailing newline character is read by the next call to gets(). Since gets() reads input until a newline, it sees that leftover newline right away and returns immediately, reading 0 characters.

    To fix this, you need to clean the input buffer after using scanf() by reading and discarding leftover characters before calling gets().*/

    printf("Your name is %s \n", name);

    //using scanf , after space my full name which is string will not print.
    // so we will use gets and puts

    printf("Enter any Name gets: ");
    gets(name1);
    printf("Your name is ");
    puts(name1);


    //checking if gets and puts can be used together
    char name3[100];
    printf("Enter any Name gets&printf: ");
    gets(name3);
    printf("Your name is %s ", name3);

    /*gets() is considered unsafe and should not be used because it can lead to buffer overflow vulnerabilities:

    It does not check for buffer size:
    gets() reads input from stdin into a buffer without checking the size of the buffer.
    It keeps reading input until a newline is encountered.
    This means if the input is larger than the buffer size, gets() will overflow the buffer. */

    /*Safer alternatives exist:
    fgets() is safer as it takes buffer size as a parameter and prevents overflows.
    scanf() can be made safer by specifying field widths for strings.
    gets_s() is a safer version available in some compilers.*/



    //fgets
    printf("Enter any Name fgets: ");
    fgets(name2, sizeof(name), stdin);
    // remove trailing newline 
    name2[strlen(name2) - 1] = '\0'; 
    printf("Your name is ");
    puts(name2);   

    /*Here fgets creates a new line
    The fgets() function reads input from stdin into the provided buffer until either:
        It reaches the end of the line (encounters a newline character '\n')
        It reaches the end of the buffer (length specified as 2nd parameter)
    So when you enter a name and press Enter, fgets() will read the name into the buffer and stop when it sees the '\n' from you pressing Enter.

    This '\n' newline character is also stored in the buffer after your name.

    When you later print the string using puts(), it prints the newline character as well, which moves the cursor to the next line.
    */


   //Now getchar and putchar
    
    //To get input a single character from user we use:
   char character;
   printf("Enter a character scanf ");
    scanf("%c", &character);
    fflush(stdin); // again same reason
    printf("Your character is %c\n", character);

    //we can also use getchar regarding this matter:
       char character1;
   printf("Enter a character getchar ");
    character1 = getchar();
    printf("Your character is ");
    putchar(character1);

    return 0;
}