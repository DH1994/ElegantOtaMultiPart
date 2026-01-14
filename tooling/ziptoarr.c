#include <stdio.h>
#include <stdint.h>

int main()
{
  FILE * fptr;
  
  fptr = fopen("elegantota.zip", "r");
  
  if (fptr == NULL) {
      printf("file failed to open.");
  }
  else {
  
      int ch;
      int ct = 0;
      while ((ch = getc(fptr)) != EOF) 
      {
        printf("%d,", ch);
        if (!(ct++ % 30) && ct > 1)
          printf("\n");
      }

      printf("\n arrCt: %d", ct);

      fclose(fptr);
  }
  return 0;
} 
