#include <stdio.h> 
void main ( ) 
{ 
 char ch; 
 printf ("Estado civil: "); 
 scanf ("%c", &ch); 
 switch(ch) { 
    case 'C': 
       printf ("Casado \n"); 
       break; 
    case 'S': 
       printf ("Solteiro \n"); 
       break; 
    case 'D': 
       printf ("Divorcio \n"); 
       break; 
    case 'V': 
       printf ("Viuvo \n"); 
       break; 
    default: 
       printf("Invalido \n"); 
       break; 
 } 
} 