#include<stdio.h>
#include<stdlib.h>
#define Max 5

int Top = -1;
int Stack[Max];

void  PUSH()
{
    int Value = 0;

    printf("Enter Data : ");
    scanf("%d",&Value);

    if(Top == Max -1)
    {
        printf("\n Stack Is Full..\n");
    }
    else
    {
        Top++;
        Stack[Top] = Value;
    }
}
void POP()
{
    if(Top == -1)
    {
        printf("Stack Is Empty..");
    }
    else
    {
        Top--;
        printf("Top of Element Is Remove..");
    }
}
void PEEK()
{
    if(Top == -1)
    {
        printf("Stack Is Empty..");
    }
    else
    {
        printf("\n Top Value Is : %d",Stack[Top]);
    }
}
void DISPALY()
{
    int i = 0;
    if(Top == -1)
    {
        printf("Stack Is Empty..");
    }
    for(i = Top ; i >= 0 ;i--)
    {
        printf("%d\n",Stack[i]);
    }
}
int main()
{
    int  Ch = 0;

    while(1)
    {
        printf("\n 1.PUSH");
        printf("\n 2.POP");
        printf("\n 3.PEEK");
        printf("\n 4.DISPALY");
        printf("\n 5.Exit");

        printf("\n\n Enter Your Choice :");
        scanf("%d",&Ch);

        switch(Ch)
        {
        case 1:
            PUSH();
            _getch();
            system("cls");
            break;
        case 2:
            POP();
            _getch();
            system("cls");
            break;
        case 3:
            PEEK();
            _getch();
            system("cls");
            break;
         case 4:
            DISPALY();
            _getch();
            system("cls");
            break;
         case 5:
             goto dwn;
             exit(0);
             break;
        default:
            printf("\n Invalid Choice \n\n");
            _getch();
            system("cls");
            break;
        }
    }
    dwn:
    system("cls");
    printf("\n\t Thank You !!");

    printf("\n\n Press Any Key For Exit ");
     _getch();

}

