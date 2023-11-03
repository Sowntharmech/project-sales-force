#include <stdio.h>
#include <stdlib.h>
int q;
struct empdetails{
    char name[20];                           //global declaration
    long int phonenumber;
    double aadhar;
    char profession[20];
    int experience;
    int salary;
    int password;}e[10];

void menu(int a)
{
    int p;
    system("color 3");
    printf("\n\n                                                                     ***CUSTOMPLOYEE***");
    printf("\n\n\n\n\nEmployee's Corner                 ...press 1");
    printf("\nCustomer's Corner                 ...press 2");
    printf("\n\nEnter 0 to exit");
    printf("\n\nEnter your choice: ");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        system("cls");
        emplo(1);
        break;        //calling function
    case 2:
        system("cls");
        custom(1);
        break;
    case 0:
        exit(0);
        break;
    default:
        printf("\a\a\a");
        system("cls");
        menu(1);
        break;
        }
}
void emplo(int a)
{
    int x;
    printf("\n\n                                                                     ***CUSTOMPLOYEE***");
    printf("\n\n                                             Employee's Corner");
    printf("\n\n press 1 to register as an employee.\n press 2 to login.\n press 3 to change the account details.\n press 4 to exit.\n press 5 to know t&c.\n press 6 to delete the account.\n press 7 to go back.\n ");
    printf("\nEnter your choice:");
    scanf("%d",&x);
    system("cls");
    switch(x)
    {
    case 1:
        regi(1);
        break;
    case 2:
        login(1);
        break;
    case 3:
        change(1);
        break;
    case 4:
        exit(0);
        break;
    case 5:
        tc(1);
        break;
    case 6:
        del(1);
        break;
    case 7:
        menu(1);
        break;
    default:
        printf("\a\a\a");
        system("cls");
        emplo(1);
        break;
    }

}
void custom(int a)
{
    int x;
    printf("\n\n                                                                     ***CUSTOMPLOYEE***");
    printf("\n\n                                             Customer's Corner");
    printf("\n Press 1 to know the employees available.\n Press 2 to know T&C.\n Press 3 for help.\n Press 4 give your feedback here.\n Press 5 to exit.");
    printf("\n\nEnter your choice: ");
    scanf("%d",&x);
    system("cls");
    switch(x)
    {
    case 1:
        search(1);
        break;
    case 2:
        tc1(1);
        break;
    case 3:
        help(1);
        break;
    case 4:
        complain(1);
        break;
    case 5:
        exit(0);
        break;
    default:
        printf("\a\a\a");
        system("cls");
        custom(1);
        break;
    }
}
void regi(int a)
{
    int p;
    system("cls");
    printf("\n\n                                                                     ***CUSTOMPLOYEE***\n\n\n");
    for(int i=0;i<10;i++){
    if(e[i].aadhar==0){
    printf("\nEnter your name: ");
    fflush(stdin);
    gets(e[i].name);
    printf("\nEnter contact number: ");
    scanf("%d",&e[i].phonenumber);
    printf("\nEnter aadhaar card number: ");
    scanf("%d",&e[i].aadhar);
    printf("\nEnter your profession: ");
    scanf("%s",&e[i].profession);
    printf("\nEnter your work experience: ");
    scanf("%d",&e[i].experience);
    printf("\nExpected amount you want from customer (per visit): ");
    scanf("%d",&e[i].salary);
    printf("\nSet your password: ");
    scanf("%d",&e[i].password);
    printf("\n\nYour details are saved.\nTHANK YOU!");
    printf("\n\n Enter 1 to go to main menu.\n enter 0 to exit.\n\n");
    printf("Enter your choice: ");
    scanf("%d",&p);
    break;
      }
    }
    if(p==1)
    {
        system("cls");
        emplo(1);}
    else
        exit(0);
}
void login(int a)
{
    char dj[20];
    int m,p,flag=0;
    system("cls");
    printf("\n\n                                                                     ***CUSTOMPLOYEE***");
    printf("\n\nEnter your name: ");
    fflush(stdin);
    gets(dj);
    printf("\nEnter password: ");
    scanf("%d",&m);
    for(int i=0;i<10;i++)
    {
        if(strcmp(dj,e[i].name)==0&&(m==e[i].password))
        {
            system("cls");
            printf("\n\n                                                                     ***CUSTOMPLOYEE***");
            printf("\n\n Name: %s\n Contact number: %d\n Aadhaar number: %d\n Work experience: %d",dj,e[i].phonenumber,e[i].aadhar,e[i].experience);
            dj[20]='0';
            m=0;
            flag=1;
            break;
        }
    }
        if(flag==0){
            printf("\nPlease enter the correct details.\a\a\a");
            for(int j=0;j<899000000;j++)
            {
                printf("");
            }
            login(1);
            }

    printf("\n\n Enter 1 to go to main menu.\n enter 0 to exit.\n\n");
    printf("Enter your choice: ");
    scanf("%d",&p);
    if(p==1)
    {
        system("cls");
        emplo(1);}
    else
        exit(0);

}
void change(int a)
{
    char dj[20];
    int m,p,flag=0;
    system("cls");
    printf("\n\n                                                                     ***CUSTOMPLOYEE***");
    printf("\n\nEnter your name: ");
    fflush(stdin);
    gets(dj);
    printf("\nEnter password: ");
    scanf("%d",&m);
    for(int i=0;i<10;i++)
    {
        if(strcmp(dj,e[i].name)==0&&(m==e[i].password))
        {
            system("cls");
            printf("\n\n                                                                     ***CUSTOMPLOYEE***");
            printf("\n\n Enter your new contact number: ");
            scanf("%d",&e[i].phonenumber);
            printf("\nEnter your new profession: ");
            scanf("%s",&e[i].profession);
            printf("\nEnter your new work experience: ");
            scanf("%d",&e[i].experience);
            printf("\nEnter the new amount that you expect from you customer: ");
            scanf("%d",&e[i].salary);
            printf("\nEnter your new password: ");
            scanf("%d",&e[i].password);
            flag=1;
            printf("\n\nCONGRATULATIONS!\n your account detail's are successfully changed.");
            printf("\n\n Enter 1 to go to main menu.\n enter 0 to exit.\n\n");
            printf("Enter your choice: ");
            scanf("%d",&p);
            if(p==1)
           {
            system("cls");
            emplo(1);}
            else
            exit(0);
        }

    }
    if(flag==0)
    {
        printf("\nplease enter the correct details.\a\a\a");
        for(int j=0;j<899000000;j++)
            printf("");
        system("cls");
        menu(1);
    }
}
void tc(int a)
{
    int p;
    system("cls");
    printf("\n\n                                                                     ***CUSTOMPLOYEE***");
    printf("\n\n TERMS AND CONDITIONS");
    printf("\n 1.you can not take more than notified amount as mentioned from the customer.");
    printf("\n 2.you will be charged $50 per month.");
    printf("\n 3.If a customer complains about your work then penalty will be taken.");
    printf("\n 4.If you will break any t&c mentioned above then after a few warnings your account will be eleminated.");
     printf("\n\n Enter 1 to go to main menu.\n enter 0 to exit.\n\n");
    printf("Enter your choice: ");
    scanf("%d",&p);
    if(p==1)
    {
        system("cls");
        emplo(1);}
    else
        exit(0);
}
void del(int a)
{
    char dj[20];
    int m,p,flag=0;
    system("cls");
    printf("\n\n                                                                     ***CUSTOMPLOYEE***");
    printf("\n\nEnter your name: ");
    fflush(stdin);
    gets(dj);
    printf("\nEnter password: ");
    scanf("%d",&m);
    for(int i=0;i<10;i++)
    {
        if(strcmp(dj,e[i].name)==0&&(m==e[i].password))
        {
            e[i].name[0]='0';
            e[i].password=0;
            e[i].aadhar=0;
            e[i].experience=0;
            e[i].phonenumber=0;
            e[i].profession[0]='0';
            e[i].salary=0;
            printf("\nyour account has been deleted successfully.");
            flag=1;
         }
    }
    if(flag==0)
    {
        printf("\nNO account found!!\a\a\a");
        for(int j=0;j<899000000;j++)
            printf("");
        system("cls");
        printf("\n\n                                                                     ***CUSTOMPLOYEE***");
    }
                                                                                    //think reasons
    printf("\n\n Enter 1 to go to main menu.\n enter 0 to exit.\n\n");
    printf("Enter your choice: ");
    scanf("%d",&p);
    if(p==1)
    {
        system("cls");
        emplo(1);}
    else
        exit(0);
}
void search(int a)
{
    char dj[20];
    int p,flag=0;
    system("cls");
    printf("\n\n                                                                     ***CUSTOMPLOYEE***");
    printf("\n\nsearch for any work  : ");                 //line change
    scanf("%s",dj);
    for(int i=0;i<10;i++)
    {
        if(strcmp(dj,e[i].profession)==0)
        {
            printf("\nName:           %s",e[i].name);
            printf("\nProfession:     %s",e[i].profession);
            printf("\nContact number: %d",e[i].phonenumber);
            printf("\nFees charged:   %d\n\n",e[i].salary);
            flag=1;
        }
    }
        if(flag==0)
            printf("\n NO details found!!\a\a\a");
    printf("\n\n Enter 1 to go to main menu.\n enter 0 to exit.\n\n");
    printf("Enter your choice: ");
    scanf("%d",&p);
    if(p==1)
    {
        system("cls");
        menu(1);}
    else
        exit(0);

}
void tc1(int a)
{
    int p;
    system("cls");
    printf("\n\n                                                                     ***CUSTOMPLOYEE***");
    printf("\n\n TERMS AND CONDITIONS");
    printf("\n 1.one visit means only 3 hours of particular work. ");
    printf("\n 2.If the product that was repaired(if) damages after 48 hours of work than the worker will not be responsible for that.");
    printf("\n 3.if the worker reaches on customer's house then you have to pay for that work\n whether the work is to be done by worker or not(if previously done by any other). ");
    printf("\n 4.if you have booked any worker and you want to cancel your booking\n then with in half an hour you have to notify our worker.");
    printf("\n\n Enter 1 to go to main menu.\n enter 0 to exit.\n\n");
    printf("Enter your choice: ");
    scanf("%d",&p);
    if(p==1)
    {
        system("cls");
        menu(1);}
    else
        exit(0);
}
void help(int a)
{
    int p;
    system("cls");
    printf("\n\n                                                                     ***CUSTOMPLOYEE***");
    printf("\n\n our email addresss:  wearereadytohelp@gmail.com  ");
    printf("\n our 2nd email address: customployee@gmail.com");
    printf("\n contact number 1: +91-9928783629");
    printf("\n contact number 2: +91-8276307872");
    printf("\n head office(main branches): Mumbai(+91-02989537),Delhi(+91-37657835),Bangalore(+91-3896383)\n\n\n");
    printf("\n\n Enter 1 to go to main menu.\n enter 0 to exit.\n\n");
    printf("Enter your choice: ");
    scanf("%d",&p);
    if(p==1)
    {                                       // isme if nhi daal rahe hai to har kuch hi ho raha hai
        system("cls");
        menu(1);}
    else
       exit(0);

}
void complain(int a)
{
    char dj[1000];
    int p;
    system("cls");
    printf("\n\n                                                                     ***CUSTOMPLOYEE***");
    printf("\n\n                                              *FEEDBACK*  ");
    printf("\nany suggestions and complain for us: \n");
    fflush(stdin);
    gets(dj);
    printf("\n\n THANK YOU!!\n your suggestions and complains are saved.");
    printf("\n\n Enter 1 to go to main menu.\n enter 0 to exit.\n\n");
    printf("Enter your choice: ");
    scanf("%d",&p);
    if(p==1)
    {
        system("cls");
        menu(1);}
    else
        exit(0);

}
int main()
{
   char a[13];
   char b[13]="dm";
   int i,j;
   password:
   {
   system("color 7");
   printf("\n\n                                                                     ***CUSTOMPLOYEE***");
   printf("\n\n\nEnter the password to access the project : ");
   scanf("%s",a);
   if(strcmp(a,b)==0)
   {
     printf("\npassword matched!!\nloading");
     for(i=0;i<5;i++){
        printf(".");
        for(j=0;j<190000000;j++)
            printf("");
   }
   system("cls");
   menu(1);
   }
   else
        {
            printf("\n\nWrong password!!\a\a\a");
            for(i=0;i<199000000;i++)                       // to wait for a movement because next is clear screen
                printf("");
            system("cls");
            goto password;

        }
    }
    return 0;
}
