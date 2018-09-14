#include <stdio.h>
#include <stdlib.h>

void encrypt(char sMessage[], int random) {

   int x = 0;

//encrypt the message by shifting each characters ASCII value
   while ( sMessage[x] ) {
      sMessage[x] += random;
      x++;

   } //end loop

   x = 0;
   printf("\nEncrypted Message is: ");

//print the encrypted message
   while ( sMessage[x] ) {
     printf("%c", sMessage[x]);
     x++;

   } //end loop

}  //end encrypt function

void decrypt(char sMessage[], int random) {

   int x = 0;

   x = 0;

//decrypt the message by shifting each characters ASCII value
   while ( sMessage[x] ) {
      sMessage[x] = sMessage[x] - random;
      x++;

   } //end loop

   x = 0;
   printf("\nDecrypted Message is: ");

//print the decrypted message
   while ( sMessage[x] ) {
     printf("%c", sMessage[x]);
     x++;

   } //end loop

}  //end decrypt function