/*
//  main.c
//  caesar-cipher
//
//  Created by Louis Huber on 15.10.23.
//
 
 Gibt einen verschlüsselten Text aus, sowie eine Schlüssel zum Entschlüsseln des Textes
 Variabeln:
 char* inputString  =:Text der zu verschlüsseln ist
 int shiftKey       =:Anzahl Buchstaben, um die der Text geshiftet wird
 
 Output:
 Verschlüsselter Text
 shiftKey um den Text wieder zu entschlüsseln
*/
#include <stdio.h>
#include <string.h>


void caesar_cipher(char *inputString,int shiftKey,int length){
    int i;
    int negativeShiftKey = -shiftKey;
    for (i = 0; i < length; ++i)
      {
          printf("%c", inputString[i]+shiftKey);
      }
    printf("\nZum Entschlüsseln folgenden shiftKey verwenden:\n");
    printf("%i \n",negativeShiftKey);

    
}
void initialisation(){
    char* inputString = "Dieser Satz wird nun verschluesselt";
    int shiftKey=3;
    int length = strlen(inputString);
    caesar_cipher(inputString, shiftKey, length);


}
int main(int argc, const char * argv[]) {
    printf("Verschlüsselter Input:\n");
    initialisation();

    return 0;
}
