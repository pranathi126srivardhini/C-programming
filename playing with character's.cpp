# include <stdio.h>
int main()
{
  char ch;
  char s[1000];
  char sen[10000];
  printf("enter a single character:");
  scanf("%c",&ch);
  printf("\nenter a word:");
  scanf("%s",&s);
  printf("\nenter a sentences:");
  scanf("%[^\n]",sen);
  printf("%c\n%s\n%s",ch,s,sen);
}
