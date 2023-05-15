#include<stdio.h>

bool is_even(int n)
{
  if(n>0)
  {
    if ( n%2==0)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
}


bool issum(int n)
{
    int sum;
    if(n==0)
    {
        return 0;
    }
    else if(n>0)
    {
        sum = n%10 + issum(n/10);
    }
    return is_even(sum);
}

int main()
{
    
}