#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    int rightpin=2222, pinentered;
    int attempts=0, amount=1, continue_transactions=1;
    int options;
    int available_money=1000000;
   printf("\t\t\t\t ********* #WELCOME TO PRIME ATM BANKING FACILITY# ********* ");
   
   while(rightpin != pinentered){
       printf(" \n enter the four digit pin : ");
       scanf("%d", &pinentered);
       if(rightpin != pinentered){
           printf("\t\t\t\t\t\t\t\t*******invalid pin*********");
       }
       attempts++ ;
        if(attempts == 5 && rightpin != pinentered){
            printf("\n You have completed the number of attempts please try again after some times,\n Thank you");
            exit(0);
        }
      }
      while (continue_transactions != 0 ){
      printf("\n ********* The options available within these ATM banking facality are *********");
      printf("\t\t\t\t\n 1) Available bank balance ");
      printf("\t\t\t\t\n 2) Deposit amount ");
      printf("\t\t\t\t\n 3) Withdraw amount ");
      printf("\t\t\t\t\n 4) LOG OUT ");

      printf("\t\t\t\t\n From the above four option select one by Pressing 1,  2 , 3 , 4 \n");
      scanf("%d", &options);
      // identifying different options with the help of cases
     
    switch(options){
     case 1: 
      printf ("\n\t\t\t The available bank balance is %d",available_money);
      break;

     case 2:
     printf ("\n\t\t\t enter the amount of money you want to deposit \n");
     scanf("%d", &amount);
     available_money+=amount;
     printf("\n\t\t\t you have deposited %d Ruppes, The new available balance is %d",amount,available_money);
     amount=1;
     break;

     case 3:
     while (amount%100 != 0)
     {
        printf("\n\t\t\t enter the amount of money you want to take out \n");
        scanf("%d", &amount);
        if (amount%100 != 0 ){
        printf("The money should be in terms of 100 \n");
        amount++;    
        }
     }
     while (available_money<amount){
        if (available_money<amount)
        {
            printf("\n\t\t\t please enter the amount less than the %d \n",available_money);
             scanf("%d", &amount);
             amount++;
        }
     }
        printf("you have taken out %d \n",amount);
        available_money -= amount  ;
        printf("The new available balance present in your account is %d \n",available_money);
        printf("\t\t\t\t\n *** TAX INCLUDED *** with each transaction \n");
        break;

     case 4: 
      printf("\n\t\t\t you have succesfully logged out from the process");
      printf("\n\t\t\t Thank you for banking with PRIME BANKING ATM FACILITY");
      exit(0);

        default:
        printf("\n\t\t\t Please choose from the options mentioned 1, 2, 3 \n");
        Beep(600,550);
     }

      if (continue_transactions >= 10){
     
      printf("\t\t\t\n !!!! TIME ERROR !!!! The process will run for 10 transaction only. You have succesfully exited from the process \n" );
      printf("\t\t\t\n Try again after sometimes with the PIN entered");
      Beep(600,550);
      exit(0);
          }

     continue_transactions++ ;
     continue;
    }

      if (continue_transactions == 0 ){
         printf("\t\t\t\n Thank you for banking with us. close all the windows for safety puposes");
         Beep(600,550);
         exit(0);
     }
    return 0;
}

