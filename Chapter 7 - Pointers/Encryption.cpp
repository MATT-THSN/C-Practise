/* 
* Programming Practise File
* Desc: Pointers Challenge 4 - Encryption Program
* Date Modified: 08/09/2018
* Author: Matthew Thompson
*/

/*
    - Modify the cryptogram program to use a different type of key system or algorithm.
    - Consider using a user-defined key or a different character set.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Function Prototypes
void encrypt(char [], int);
void decrypt(char [], int);

int main() {
    char myString[21] = {0};
    int iSelection = 0;
    int iRand;
    srand(time(NULL));
    iRand = (rand() % 4) + 1; //random #, 1 - 4

    printf("%c", 'C' + 11);

    while (iSelection != 4) {
        printf("\n\n1\tEncrypt Clear Text\n");
        printf("2\tDecrypt Cipher Text\n");
        printf("3\tGenerate New Key\n");
        printf("4\tQuit\n");
        printf("\nSelect a Cryptography Option: ");
        scanf("%d", &iSelection);

        switch(iSelection) {
            case 1:
                printf("\nEnter one word as clear text to encrypt: ");
                scanf("%s", myString);
                encrypt(myString, iRand);
            break;
            
            case 2:
                printf("\nEnter cipher text to decrypt: ");
                scanf("%s", myString);
                decrypt(myString, iRand);
            break;

            case 3:
                iRand = (rand() % 4) + 1; // random #, 1 - 4
                printf("\nNew Key Generated\n");
            break;
        } //End Switch
    } //End Loop
} //End Main

void encrypt(char sMessage[], int random) {
    int x = 0;

    //Encrypt the message by shifting each character's ASCII value
    while (sMessage[x]) {
        sMessage[x] += random;
        x++;
    }

    x = 0;
    printf("\nEncrypted message is: ");

    //Print encrypted message
    while (sMessage[x]) {
        printf("%c", sMessage[x]);
        x++;
    }
}

void decrypt(char sMessage[], int random) {
    int x = 0;
    
    //Decrypt message by shifting each character's ASCII value
    while(sMessage[x]) {
        sMessage[x] = sMessage[x] - random;
        x++;
    }
    x = 0;
    printf("\nDecrypted message is: ");

    //Print decrypted mesage
    while (sMessage[x]) {
        printf("%c", sMessage[x]);
        x++;
    }
}