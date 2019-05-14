#include <stdio.h>

void main() {
   int c = 0;
   char ch;
   FILE *fp;



   fp = fopen("s.txt", "r"); // 'r' opens the file in read mode

      while((ch = fgetc(fp)) != EOF) {
   	  if(ch == 'a' || ch == 'A' || ch== 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
   	  	c++;
   	  }

      printf("%c", c);
   }

   printf("\n");

   printf("NUMBER OF VOWELS: %d \n", c);

   fclose(fp);
  
}
