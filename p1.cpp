#include<stdio.h>
#include<ctype.h>
int main()
{
	 char  s[100],ch;
	 int key,i;
	 printf("Enter the message to be encrypted: ");
	 scanf("%s",s);
	 printf("Enter the key: ");
	 scanf("%d",&key);
	 for(i=0;s[i]!='\0';++i)
	 {
	 	ch=s[i];
	 	if(isalnum(ch))
	 	{
	 		if(islower(ch))
	 		{
	 			ch=(ch-'a'+key)%26+'a';
			}
			if(isupper(ch))
			{
				ch=(ch-'A'+key)%26+'A';
			}
			if(isdigit(ch))
			{
				ch=(ch-'0'+key)%10+'0';
			}
		}
		else
		{
			printf("Invalid message");
		}
		s[i]=ch;
	 }
	 printf("Encrypted message: %s",s);
}
