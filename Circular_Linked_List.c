#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
    int Data;
    struct Node *Next;

}*Head , *Newnode , *Tail;

void Create_NewNode()
{
     Newnode = (struct Node*)malloc(sizeof(struct Node));

     printf("Enter Data OF Node :");
     scanf("%d",&Newnode -> Data);

     Newnode -> Next = NULL;
}
void Create(int N)
{
    int i = 1;

    while( i <= N)
    {
        Create_NewNode();

        if(Head == NULL)
        {
            Head = Newnode;
            Tail = Newnode;
            Tail -> Next = Head;
        }
        else
        {
             Tail -> Next = Newnode;
             Tail = Newnode;
             Tail -> Next = Head;
        }
        i++;
    }

}

void Insert_At_Start()
{
     Create_NewNode();

     Newnode -> Next = Head;
     Head = Newnode;
     Tail -> Next = Head;
     printf("\n Node IS Inserted At Starting Position SuccessFully !!  \n");
}
void Insert_At_Last()
{
     Create_NewNode();

     Tail -> Next = Newnode;
     Newnode -> Next = Head;
     Tail = Newnode;

     printf("\n Node Is Inserted Last Position SuccessFully !!  \n");

}
void Insert_At_Specific_Position()
{
     int i = 1 , Pos = 0;
     struct Node *Temp , *Next_Node;

     Create_NewNode();

     printf("\n Enter Position You Want To Inserted:");
     scanf("%d",&Pos);

     Temp = Head;
     while( i < Pos -1)
     {
            Temp = Temp -> Next;
            i++;
     }
     Newnode -> Next = Temp -> Next;
     Temp -> Next = Newnode;

     printf("\n Node Are SuccessFully Inserted At %d Position",Pos);

}
void Delete_At_Start()
{
    struct Node *Temp;

    Temp = Head;

    Head = Head -> Next;
    Tail -> Next = Head;
    free(Temp);

    printf("\n Node IS Deleted At Starting Position SuccessFully !!  \n");

}
void Delete_At_Last()
{
    struct Node *Temp , *P_Node;

    Temp = Head;

    while(Temp -> Next != Tail -> Next)
    {
        P_Node = Temp;
        Temp = Temp -> Next;
    }
    if(Head == Temp)
    {
        Head = NULL;
        free(Temp);
    }
    else
    {
        P_Node -> Next = Head;
        Tail = P_Node;
        free(Temp);
    }
  printf("\n Node IS Deleted Last Position SuccessFully !!  \n");
}
void Delete_At_Specific_Position()
{
    int i = 1 , Pos = 0;
    struct Node *Temp , *Next_Node;

    printf("Enter Position You Want To Deleted :");
    scanf("%d",&Pos);

    if(Pos == 1)
    {
        Delete_At_Start();
    }
    else
    {
        Temp = Head;
        while( i < Pos-1)
        {
            Temp = Temp -> Next;
            i++;
        }
        Next_Node = Temp -> Next;
        Temp -> Next = Next_Node -> Next;
        free(Next_Node);

        printf("Node %d Deleted SuccessFully",Pos);
    }
}
void Display()
{
    struct Node *Temp;
    if(Head == NULL)
    {
        printf("\t List Is Empty !!\n");
    }
    else
    {
        Temp = Head;
        while(Temp -> Next != Tail -> Next)
        {
            printf("%d\n",Temp -> Data);
            Temp = Temp -> Next;
        }
        printf("%d\n",Temp -> Data);
    }

}
int main()
{
    int N = 0 , Ch = 0;
    printf("Enter Count Of Node :");
    scanf("%d",&N);

    Create(N);

    while(1)
    {
        printf("\n 1.Insert_At_Start");
        printf("\n 2.Insert_At_Last");
        printf("\n 3.Insert_At_Specific_Position");
        printf("\n 4.Delete_At_Start");
        printf("\n 5.Delete_At_Last");
        printf("\n 6.Delete_At_Specific_Position");
        printf("\n 7.Display");
        printf("\n 8.Exit");

        printf("\n\n Enter Your Choice :");
        scanf("%d",&Ch);

        switch(Ch)
        {
        case 1:
            Insert_At_Start();
            _getch();
            system("cls");
            break;

        case 2:
            Insert_At_Last();
            _getch();
            system("cls");
            break;
        case 3:
            Insert_At_Specific_Position();
            _getch();
            system("cls");
            break;
         case 4:
            Delete_At_Start();
            _getch();
            system("cls");
            break;

        case 5:
           Delete_At_Last();
            _getch();
            system("cls");
            break;
        case 6:
             Delete_At_Specific_Position();
             _getch();
            system("cls");
            break;

        case 7:
            Display();
            _getch();
            system("cls");
            break;
         case 8:
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

