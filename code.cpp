
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
srand((unsigned)time(NULL));

int i, j;
int lowerCase;   // if j == 0 
int upperCase;   // if j != 0

printf("\n\n1. Choose any two-digit number in the table above.\n");
printf("2. Subtract its two digits from itself (e.g. 45 - 4 - 5 = 36).\n");
printf("3. Find this new number (e.g. 36) and remember the letter next to it.\n");
printf("4. Now press the return key and I'll read your mind ...\n\n");
getchar();


//while(1){
int magicLetter =  'a' + rand()%26;
  for(i=99; i>-1; i--){

    lowerCase = 'a' + rand()%26;   //  randomly create a lowercase letter
    upperCase = 'A' + rand()%26;   //  randomly create a uppercase letter
    j = rand()%2;           //  randomly creates an even or odd mod
    

    if(i%10 == 9){   // start new line
      printf("\n ");
    }
    if(i<10){       // Even out the bottom row to allign columns
    printf(" ");
    }    
    if(i%9==0){     // makes the magic happen  
    printf("%d. %c\t", i, magicLetter);    
    }
    else if(j==0){  //  Desides to be cape or lower case
    printf("%d. %c\t", i, lowerCase);
    }
    else    
    printf("%d. %c\t", i, upperCase);

  }  //ends for loop
 
//  getchar();

//  Give the directions to user
    
printf("\nYour letter is: %c", magicLetter);
printf("\n");

} // end main
