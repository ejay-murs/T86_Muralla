#include <stdio.h>
int main(){ 
int selection, price, payment, change;

printf("Please select your order\n"); 
printf("[1]Pepsi (P100)\n[2]Dr.Pepper (P120)\n[3]Coca-cola (P95)\n"); 
printf("Choice: "); 
scanf("%d",&selection); 
switch(selection){ 

case 1: price = 100; 
    printf("Input Payment: "); 
    scanf("%d", &payment);
 if(payment>=price){  
    change = payment-price; 
    printf("Change: %d\n", change);
    printf("You have successfully purchased Pepsi!");
}
 else { printf("Insufficient funds!"); 
} 
break; 

case 2: price = 120; 
    printf("Input Payment: "); 
    scanf("%d", &payment); 
 if(payment>=price){  
    change = payment-price; 
    printf("Change: %d\n", change); 
    printf("You have successfully purchased Dr.Pepper!");
} 
 else { printf("Insufficient funds!"); 
} 
break; 

case 3: price = 95; 
    printf("Input Payment: "); 
    scanf("%d", &payment); 
 if(payment>=price){  
    change = payment-price; 
    printf("Change: %d\n", change); 
    printf("You have successfully purchased Coca-cola!");
} 
 else { printf("Insufficient funds!"); 
} 
break; 
default: printf("No order found!"); 
} 
return 0;}