
#include <stdio.h>

int main()
{
    int input,deposit,withdraw,balance=550,mini[100],i=0,cont;

for(;;){
   printf("\n WELCOME e-ATM \n\nTAP 1 =DEPOSIT \nTAP 2 =WITHDROW \nTAP 3 =MINI STATEMENT\nTAP 4 =BALANCE CHECK \n\n ENTER YOUR CHOICE (1, 2, 3, 4,) :");
   scanf("%d",&input);
  
   switch(input){
       
       case 1 :
     printf(" \nEnter deposit ammount (minimum 500+INR):");
     scanf("%d",&deposit);
     balance=balance+deposit;
     mini[i]=deposit;
     i++;
     printf("\n %d INR deposited successfully credited ",deposit);
     break;
      
      case 2 :
     printf("\n Enter withdrawal ammount (minimum 500+INR ) :");
     scanf("%d",&withdraw);
     printf(" \n %d Withdraw successfully completed",withdraw);
     balance=balance-withdraw;
     mini[i]=(withdraw*-1);
     i++;
     break;
    
     case 3 :
     int k;
         printf("  \n \tMINI STATEMENT");
        
         printf("\n \t A/C=xx5658 \n");
           
           for(k=0;k<i;k++){
        
        
    if (mini[k]> 0){
        printf("\t \nDeposit  = %d INR",mini[k]);
        
    }
    else if(mini[k]<0){
        
       printf("\t \nWithdraw = %d INR",mini[k]);
    }
     }
    printf("\n \n Total a/c balance= %d INR",balance);
    break;
    
    case 4 :
    printf("\n \tA/C=xx5658 \n \n \n  Available Balance is = %d ",balance);
    break;
   
    
    default :
    printf("\n \n\t Enter a valid input  ");
    break;
   }

  printf("\n \n Do you want to Continue  \n TAP 1 = YES  \n TAP 2 = NO \n :");
  scanf("%d",&cont);
    if (cont==2){
      break;
    }
}

    return 0;
}
