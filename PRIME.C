int isprime(int n)
{
  int i;
  for(i=2; i<=n/2; i++)
  {
   if(n%i==0)
   return 0;
  }
   return 1;
}

/*int allprime(int n)
{
  int i;
  for(i=2; i<=n; i++)
  if(isprime(i))
  printf("%d\n",i);
} */

int atobprime(int a,int b)
{
  int i;
  for(i=a; i<=b; i++)
  if(isprime(i));
  {
  return i;
  }
  else
}
void main()
{
  clrscr();
 printf("%d\n", atobprime(2,10));
  getch();
}