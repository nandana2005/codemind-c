#include <stdio.h>

int main()
{
  int weekday;
  scanf("%d", &weekday);
  
  if (weekday == 1)
  {
  	printf("Monday");  	
  }
  else if ( weekday == 2 )
  {
  	printf("Tuesday");  	
  }  
  else if ( weekday == 3 )
  {
  	printf("Wednesday");  	
  } 
  else if ( weekday == 4 )
  {
  	printf("Thursday");  	
  } 
  else if ( weekday == 5 )
  {
  	printf("Friday");  	
  } 
  else if ( weekday == 6 )
  {
  	printf("Saturday");  	
  }   
  else if ( weekday == 7 )
  {
  	printf("Sunday");  	
  } 
  else{
      printf("Invalid input");
  }
  
  return 0;
}