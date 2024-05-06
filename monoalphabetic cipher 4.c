Aim – Write a program to perform encryption and decryption using mono-alphabetic substitution cipher.
Code : -

#include<stdio.h>
#include <conio.h>
#include<string.h>
#define pf printf
#define sf scanf
char dc [26]="XDGSZANYOBTMJCEUFHKWPLQURI";
char ec[26]="abcdefghijklmnopqrstuvwxyz";
void e(char*);
void d(char*);
void main()
{
char *p;
clrscr();
pf("\n\nEnter plain text:");
sf("%s",p);
pf ("\nAfter Encryption:\n------------------\n");
e(p);
pf("\n%s",p);
pf("\nAfter Decryption:\n-------\n");
d(p);
pf("\n%s",p);
getch();
}

void e(char *p)
{
int 1=0;
while(*(p+1) != '\0'){
*(p+1)=dc[*(p+1)-97];
1++;
}
}

void d(char *p)
{
int 1=0;
while(*(p+1) != '\0')
{
int i;
for(i=0;i<26;i++)
if (dc[i]==*(p+1))
break;
}
*(p+1)=ec[i];
1++;
}
}