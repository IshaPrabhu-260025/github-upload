#include<stdio.h>
int fun(int n);

int fun(int n);
int main()
{
    int n;
    for(n=1;n<=10;n++)
    {
    int N=fun(n);
    printf("%d\n",N);
    }
    
    

    // signal to operating system everything works fine
    return 0;
}
int fun(int n)
{
   
   
   if (n%2==0)
   {
       return n-1;
   }
   else
   {
       return n+1;
   }
   

}