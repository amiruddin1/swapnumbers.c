#include<stdio.h>
int main() 
{
      int no1=10, no2=20;
      int temp;
      temp=no2;
      no2=no1;
      no1=temp;
      print ("Numbers after swaping: Number 1 is=%d Number 2 is=%d", no1, no2);
      return 100;
}
