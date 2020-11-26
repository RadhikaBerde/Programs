Program to print 5 times “Hello” on screen.

#include<stdio.h>

int main()
  {
      Display();
      return 0;
  }

  void Display()
  {
      int i=0;
      for(i=1;i<=5;i++)
      {
          printf("Hello\n");
      }
  }
