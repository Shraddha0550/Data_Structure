#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

static int Cnt = 0;
static int E_ID = 1;
struct Employee
{
    int Emp_ID;
    char Emp_Name[24];
    int Age;
    char Designation[20];
    int Experience;
    char Mob_No[10];
    float Salary;
    struct Employee *Next;

}*Emp ,*T_Emp ;
void Add_New_Employee()
{
    struct Employee *New_Emp ;


    New_Emp = (struct Employee*)malloc(sizeof(struct Employee));

     printf("\n\t Employee ID : %d\n",E_ID);

     New_Emp -> Emp_ID = E_ID;
     fflush(stdin);

     printf("\n\t Enter Employee Name :");
     scanf("%[^\n]",New_Emp -> Emp_Name );

     printf("\n\t Enter Your Age :");
     scanf("%d",&New_Emp ->Age);

     fflush(stdin);

     printf("\n\t Enter Designation :");
     scanf("%[^\n]",New_Emp ->Designation );

     printf("\n\t Enter Your Experience :");
     scanf("%d",&New_Emp ->Experience);

     Up:

     fflush(stdin);
     printf("\n\t Enter Your Mobile Number :");
     scanf("%[^\n]",New_Emp ->Mob_No);

     long long int Number = 0 , N = 0;
     int c = 0;

     Number = atoll(New_Emp ->Mob_No);

     N = Number;
     while(N > 0)
     {
         c++;
         N= N / 10;
     }
     if(c == 10)
     {
        goto dwn;
     }
     else
     {
          printf("\n\t Please Check Mobile Number\n");
          _getch();
         goto Up;
     }
     dwn:

     printf("\n\t Enter Salary :");
     scanf("%f",&New_Emp ->Salary);

     New_Emp -> Next = NULL;

    if(Emp == NULL)
    {
          Emp = New_Emp;
          T_Emp = New_Emp;
    }
    else
    {
         T_Emp -> Next = New_Emp;
         T_Emp = New_Emp;
    }

    Cnt++;
    printf("\n\t Employee Added SuccessFully !!");

    E_ID++;
}
void Search_Employee_Details()
{
    int Search_ID = 0, k = 0;
    struct Employee *Temp ;

    Temp = Emp;
    if(Emp == NULL)
    {
        printf("\t Employee Are Not Added Yet !!\n");

    }
    else
    {
         printf("\n\t Enter ID You Want To Search :");
         scanf("%d",&Search_ID);
        while(Temp != NULL)
        {
            if(Temp ->Emp_ID == Search_ID)
            {
                printf("\n\t Employee ID   :%d",Temp ->Emp_ID);
                printf("\n\t Employee Name :%s",Temp ->Emp_Name);
                printf("\n\t Age           :%d",Temp ->Age);
                printf("\n\t Designation   :%s",Temp ->Designation);
                printf("\n\t Experience    :%d Years",Temp ->Experience);
                printf("\n\t Mobile Number :%s",Temp ->Mob_No);
                printf("\n\t Salary        :%.2f",Temp ->Salary);

                k++;

            }
            Temp = Temp -> Next;
        }
        if(k == 0)
        {
            printf("\n\t\t This ID Are Not Available In Records..");
        }

    }
}
void Update_Employee_Details()
{
        struct Employee *Temp;
        int ID = 0 , i = 1 , ch = 0 , K = 0;;
        long long int Number = 0 , N = 0;
        int c = 0;

        if(Emp == NULL)
        {
            printf("\n\t Employee Are Not Added..!!");

        }
        else
        {
               printf("\n\t Enter ID You Want To Update Employee :");
               scanf("%d",&ID);

                if(E_ID <= ID)
                {
                    printf("\n\t This ID Are Not Added ..!!");
                }
                else
                {
                     Temp = Emp;
                    while(Temp != NULL)
                    {
                        if(Temp ->Emp_ID == ID)
                        {
                            while(1)
                            {
                                if(K == 0)
                                {
                                    _getch();
                                    system("cls");
                                    K++;

                                }
                                printf("\n\n\t ==================================\n");
                                printf("\n\t 1.Employee Name");
                                printf("\n\t 2.Mobile Number");
                                printf("\n\t 3.Designation");
                                printf("\n\t 4.Experience");
                                printf("\n\t 5.Age");
                                printf("\n\t 6.Salary");
                                printf("\n\t 7.Exit");

                                printf("\n \t ==================================");

                                printf("\n\n\t Enter Choice You Want To Update Details:");
                                scanf("%d",&ch);


                                switch(ch)
                                {
                                    case 1:
                                            fflush(stdin);
                                             printf("\n\t Enter Employee Name :");
                                             scanf("%[^\n]",Temp -> Emp_Name );
                                               printf("\n\t Employee Name Update SuccessFully..");
                                            _getch();
                                            system("cls");
                                            break;

                                    case 2:
                                            Up:
                                             fflush(stdin);
                                            printf("\n\t Enter Your Mobile Number :");
                                            scanf("%[^\n]",Temp ->Mob_No);
                                             c = 0;

                                             Number = atoll(Temp  ->Mob_No);

                                             N = Number;
                                             while(N > 0)
                                             {
                                                 c++;
                                                 N= N / 10;
                                             }
                                             if(c == 10)
                                             {
                                                goto dn;
                                             }
                                             else
                                             {
                                                  printf("\n\t Please Check Mobile Number\n");
                                                  _getch();
                                                 goto Up;
                                             }
                                             dn:
                                              printf("\n\t Employee Mobile Number Update SuccessFully..");
                                            _getch();
                                            system("cls");
                                            break;
                                    case 3:
                                         fflush(stdin);

                                         printf("\n\t Enter Designation :");
                                         scanf("%[^\n]",Temp ->Designation );
                                           printf("\n\t Employee Designation Update SuccessFully..");
                                        _getch();
                                        system("cls");
                                        break;
                                    case 4:
                                            printf("\n\t Enter Your Experience :");
                                            scanf("%d",&Temp ->Experience);
                                            printf("\n\t Employee Experience Update SuccessFully..");
                                            _getch();
                                            system("cls");
                                            break;
                                    case 5:
                                            printf("\n\t Enter Your Age :");
                                            scanf("%d",&Temp ->Age);
                                            printf("\n\t Employee Age Update SuccessFully..");
                                            _getch();
                                            system("cls");
                                            break;
                                    case 6:
                                         printf("\n\t Enter Salary :");
                                         scanf("%f",&Temp ->Salary);
                                         printf("\n\t Employee Salary Update SuccessFully..");
                                        _getch();
                                        system("cls");
                                        break;
                                    case 7:
                                        goto dwn;
                                        break;
                                    default:
                                        printf("\n Invalid Choice !!..");
                                        _getch();
                                        system("cls");
                                        break;

                                    }

                            }
                            dwn:
                                printf("\n\t Press Any Key To Continue !!..");

                        }
                        Temp = Temp -> Next;
                    }
                }

            }

}
void Remove_Employee()
{
    struct Employee *P_Node , *Temp;
    int ID = 0 , i = 1;

    if(Emp == NULL)
    {
        printf("\n\t Employee Are Not Added..!!");

    }
    else
    {
        printf("\n\t Enter ID You Want To Remove Employee :");
        scanf("%d",&ID);

        if(Cnt > 0 && E_ID >= ID)
        {

             if(Emp -> Emp_ID == ID)
            {
                Temp = Emp ;
                Emp = Emp -> Next;
                free(Temp);
                 printf("\n\t Employee Remove SuccessFully..");

            }
            else if(T_Emp -> Emp_ID == ID)
            {
                Temp = Emp;
                while(Temp -> Next != NULL )
                {
                    P_Node = Temp;
                    Temp = Temp -> Next;
                }
                P_Node -> Next = NULL;
                T_Emp = P_Node;
                free(Temp);
                printf("\n\t Employee Remove SuccessFully..");

            }
            else
            {
                 Temp = Emp;
                while(Temp != NULL)
                {
                    if(Temp -> Emp_ID == ID)
                    {
                         P_Node -> Next = Temp -> Next;
                         free(Temp);
                         printf("\n\t Employee Remove SuccessFully..");

                    }
                    P_Node = Temp;
                    Temp = Temp -> Next;

                }
            }
            Cnt--;

        }
        else
        {
            printf("\n\t This ID Are Not Available.. ");
        }
    }
}
void Display_All_Employee_Details()
{
    struct Employee *Temp ;

    if(Emp == NULL)
    {
        printf("\n\t Employee Are Not Added Yet !!\n");
    }
    else
    {
         Temp = Emp;
        while(Temp != NULL)
        {
            printf("\n\t Employee ID   :%d",Temp ->Emp_ID);
            printf("\n\t Employee Name :%s",Temp ->Emp_Name);
            printf("\n\t Age           :%d",Temp ->Age);
            printf("\n\t Designation   :%s",Temp ->Designation);
            printf("\n\t Experience    :%d Years",Temp ->Experience);
             printf("\n\t Mobile Number :%s",Temp ->Mob_No);
            printf("\n\t Salary        :%.2f\n",Temp ->Salary);

            Temp = Temp -> Next;
        }
    }
}
void Total_Employee()
{
    printf("\n\t Total Employee : %d",Cnt);
}
int main()
{
    int N = 0 , Ch = 0;

    while(1)
    {
         printf("\n\n\t =================================\n");
        printf("\n\t 1.Add New Employee");
        printf("\n\t 2.Search Employee Details By ID");
        printf("\n\t 3.Update Employee Details");
        printf("\n\t 4.Remove Employee ");
        printf("\n\t 5.Display All Employee Details");
        printf("\n\t 6.Total Employee Count");
        printf("\n\t 7.Exit");

        printf("\n\t =================================\n");

        printf("\n\n\t Enter Your Choice :");
        scanf("%d",&Ch);

        switch(Ch)
        {
            case 1:
                    Add_New_Employee();
                    _getch();
                    system("cls");
                    break;

            case 2:
                    Search_Employee_Details();
                    _getch();
                    system("cls");
                    break;
            case 3:
                    Update_Employee_Details();
                    _getch();
                    system("cls");
                    break;
             case 4:
                   Remove_Employee();
                    _getch();
                    system("cls");
                    break;

            case 5:
                   Display_All_Employee_Details();
                    _getch();
                    system("cls");
                    break;
            case 6:
                   Total_Employee();
                    _getch();
                    system("cls");
                    break;
            case 7:
                    goto dwn;
                    exit(0);

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

    printf("\n\n Press Any Key To Continue.. ");
     _getch();

}
