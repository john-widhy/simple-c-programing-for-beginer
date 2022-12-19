#include <stdio.h>
#include <stdlib.h>

int main(){
    char command;
    char transaction_id[20], product[30],price['20'],quenty['20'],name['30'];
    printf("Input This Option : ");
    printf("\n\n+-----------------------------------------------+");
    printf("\n1) ADD New Transaction");
    printf("\n2) About This Application");
    printf("\n+-----------------------------------------------+");
    widhy_loop:
    printf("\n\n Select And Put Your Option Here : ");
    scanf("%c",&command);
    if(command=='2'){
       printf("About This Application ");
       printf("\n\n+---------------------------------------------------------------------+");
       printf("\n1) This Application Creat By John-Widhy");
       printf("\n2) If You Have Question Contact Me With Whatsapp");
       printf("\n3) My Whatsapp : 6281649363404 If You Have Question & Problem Chat Here");
       printf("\n4) This Application Creat At 19 December 2022 By John-Widhy");
       printf("\n+---------------------------------------------------------------------+");
    }else if(command=='1'){
        printf("Input New Transacction : ");
        printf("\n\n+-----------------------------------------------+");
        printf("\n1) Input Your ID Transaction");
        printf("\n2) Input Your Product");
        printf("\n4) Input This Price");
        printf("\n5) Input This Quenty");
        printf("\n6) Input His Name Buyer");
        printf("\n+-----------------------------------------------+");
        printf("\n\nInput ID Transaction Right Now : ");
        scanf("%s",&transaction_id);
        printf("\nInput Product Right Now : ");
        scanf("%s",&product);
        printf("\nInput Price Right Now : ");
        scanf("%s",&price);
        printf("\nInput Quenty Right Now : ");
        scanf("%s",&quenty);
        printf("\nInput His Name Of Buyer Right Now : ");
        scanf("%s",&name);
        printf("\n\n\n+--------------------------------------------------------+");
        printf("\n\n\n Yeah Bro Invoice Has Create");
        printf("\n\n\n ID : %c",transaction_id);
        printf("\n\n\n Product : %c",product);
        printf("\n\n\n Price : %c",price);
        printf("\n\n\n Quenty : %c",quenty);
        printf("\n\n\n Name Buyer : %c",name);
        printf("\n\n\n+--------------------------------------------------------+");

    }
    
    goto widhy_loop;
}
