#include<cs50.h>
#include<stdio.h>
#include<math.h>
int main(void){
float dollars;
   do{
dollars=get_float("change owed:");
}
   while(dollars<0);
   int cents = round(dollars);
   int quarters = cents / 25 ;
   cents = cents%25 ;
   int dimes = cents /10 ;
    cents = cents%10 ;
 int nickels = cents/5 ;
  cents = cents%5 ;
   int pennies = cents/1 ;
 cents=cents%1 ;
   int total_coins= quarters + dimes + nickels + pennies ;
   printf("%i\n", total_coins);

}
