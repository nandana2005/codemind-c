#include <stdio.h>
int main()
{
  int array[100], size, c, location = 0;

  
  scanf("%d", &size);

  

  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);

  for (c = 1; c < size; c++)
    if (array[c] < array[location])
      location = c;

  printf("%d
",array[location]);
  return 0;
}