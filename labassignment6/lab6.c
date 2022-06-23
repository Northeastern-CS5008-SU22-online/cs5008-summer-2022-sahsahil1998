//Sahil Sah
//sah.sa@northeastern.edu

#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* function to encrypt the data*/
void encrypt(char text[], int key)
{
    //insert your code here
    for (int i = 0; (i < 100 && text[i] != '\0'); i++){
	text[i] = text[i] + key;
    }
}

/*function to decrypt the data*/
void decrypt(char text[],int key)
{
    
    //insert your code here
    for (int i = 0; (i < 100 && text[i] != '\0'); i++){
	text[i] = text[i] - key;
    }   
}


/*----------- Main program---------------*/
int main()
{
    char text[20] ;
    int keyvalue=3;
    /*Input string */
    printf("Enter the message:  ");
    scanf("%s",text);
    printf("text input   = %s\n",text);
    
    /*call function to encrypt the data*/
    encrypt(text,keyvalue);
    printf("Encrypted value = %s\n",text);
    
    /*call function to decrypt the data*/
    decrypt(text,keyvalue);
    printf("Decrypted value = %s\n",text);
    
    return 0;
}
