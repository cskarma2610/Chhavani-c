int search(char *s ,char item, int n)
{
 int i, c=0;
 for(i=0;s[i];i++)
 {
  if(s[i]==item)
  c++;
  if(c==n)
  return i;
 }
 return -1;
}
/*int secoccurance(char *s,char item)
{
 int i,c,k=0;
 for(i=c=0; s[i]&&c<2; i++)
 if(s[i]==item)
 {
  k=i;
  c++;
 }
 return k;
}

 int search(char *t, char item)
 {
   int i, c=0;
   for(i=0; t[i]; i++)
   if(t[i]==item)
   {
    c++;
    if(c==2)
    return i;
   }
 return -1;
 }*/



 void main()
 {
 char s[100], item;
 int n;
 clrscr();
 puts("Enter the string:");
 gets(s);
 puts("item");
 gets(&item);
 puts("n=");
 scanf("%d",&n);
 printf("%d",search(s,item,n));
// printf("\n %d",secoccurance(s,item));
 getch();
 }

