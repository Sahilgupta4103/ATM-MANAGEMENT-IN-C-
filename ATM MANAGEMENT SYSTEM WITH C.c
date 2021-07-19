#include<stdio.h>
#include<conio.h>
int list();
void deposite();
void last();
void withdraw();
void transfer();
void checkdetail();
int totalamount=1000,amount,amo,tr,totaldeposited=0,totalwith=0,totaltr=0;
int acc;
char a[100];
void main()
{
  
    printf("\n enter your name:");
    gets(a);
    printf("\n enter your account number:");
    scanf("%d",&acc);
  while(1)
  {
     
   switch(list())
   {
        case 1:
             deposite();
             totaldeposited+=amount;
             break;
        case 2:
            withdraw();
            if(amo<=totalamount)
            totalwith+=amo;
            break;
        case 3:
            transfer();
            if(tr<=totalamount)
            totaltr+=tr;
            break;
        case 4:
            checkdetail();
            break;
        case 5:
            last();
            getch();
            exit(0);
        default:
          printf("\n invalid choice");
   }
    getch();
  }
    getch();
}
int list()
{
    int ch;
    printf("\n1. deposit amount: ");
    printf("\n2. withdraw amount: ");
    printf("\n3. transfer amount: ");
    printf("\n4. check details: ");
    printf("\n5. Exit: ");
    printf("\n Enter your choice: ");
    scanf("%d",&ch);
    return(ch);
}

void deposite()
{
    printf("\n ennter the amount you want to deposite: ");
    scanf("%d",&amount);
    totalamount+=amount;
}
void withdraw()
{
    printf("\n ennter the amount you want you wish to withdraw: ");
    scanf("%d",&amo);
    if(amo<=totalamount)
    totalamount-=amo;
    else
    printf("not suffecient balance");
}
void transfer()
{
    printf("\n ennter the amount you want to transfer: ");
    scanf("%d",&tr);
    if(tr<=totalamount)
    totalamount-=tr;
    else
    printf("transfer is not possible");
}
void checkdetail()
{
    printf(" total amount =%d\n",totalamount);
   printf("total deposited amount=%d\n",totaldeposited);
   printf("total withdrawn amount=%d\n",totalwith);
   printf("total transfered amount=%d\n",totaltr);

}
void last()
{
    printf("\n*****************************************************************\n");

    printf("\n name=%s",a);
    printf("\n acccount number=%d",acc);
    printf("\n total amount =%d",totalamount);
    printf("total deposited amount=%d\n",totaldeposited);
    printf("total withdrawn amount=%d\n",totalwith);
    printf("total transfered amount=%d\n",totaltr);
    printf("\n THANKS FOR BANKING WITH US");
}