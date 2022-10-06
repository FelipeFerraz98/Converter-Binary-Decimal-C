#include <stdio.h>
#include <math.h>

int main(void) {
  int number, exponent=0, converter, rest, result, decision;
  
  printf("Binary to decimal = 1 || Decimal to binary = 0: ");
  scanf("%d", &decision);
  
  
  if(decision == 1){
    printf("\nEnter a decimal number to convert to binary: ");
    scanf("%d", &number);
    
    converter=number;
    //Calculation from decimal to binary
    while(converter>0){
      converter = number / 2;
      rest = number % 2; 
      result += ( pow(10, exponent) ) * rest;
      
      if(converter>0){
        number=converter;
        exponent++;
      }
      
    }
    
  }
  else{
    printf("\nEnter a binary number to convert to decimal: ");
    scanf("%d", &number);
    
    converter=number;
    //Calculation from binary to decimal
    while(converter>0){
      converter = number / 10;
      rest = number % 10; 
      result += ( pow(2, exponent) ) * rest;
      
      if(converter>0){
        number=converter;
        exponent++;
      }
      
    }
    
  }
  printf("\nResult: %d", result);
  return 0;
}
