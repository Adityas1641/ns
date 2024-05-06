Aim : Design and implement for the insecurity of default password/printed password.

Code

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
char username[15];
char password [12];
printf("Enter your username:\n");
scanf("%s", &username);

printf ("Enter your password:\n");
scanf("%s", &password);

if (strcmp(username, "Abhishek")==0)
{
if (strcmp(password,"Adhau")==0)
{
printf (“\n Welcome.Login Success!");
}
else
{
printf("\nwrong password");
}
}
else
{

printf("\n User doesn't exist");
}
return 0;
}

