#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int i, n, ch;
char input[20];
FILE *in;
Receiver.c
#include<stdio.h>

#include<conio.h>

#include<string.h>

void main()

{

int i, n,;

char output[20];

FILE *out;

clrscr();

out=fopen(“data_parity.txt”, “r”);

fscanf(out, “%s”, output);

n = strlen(output);

for(i=0; i<n; i++)

if(output[i]==’1’)

one++;

if(one%2==0)

{

printf(“Received Data has Even Parity\n”);

printf(“Data Accepted\n”);

}

else

{

printf(“Received Data has Odd Parity\n”);

printf(“Data Rejected\n”);

}

printf(“Received Data: “);

for(i=0;i<n-1; i++)

printf(“%c”, output[i];

fclose(out);

getch();

}
