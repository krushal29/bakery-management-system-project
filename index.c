#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define size 100

void detail();
void date_setup();
float bill_ger(int count);
void show_detail(int, int, int, int);

struct personal_detail
{
    unsigned long long int number;
    char name[50];
    char Date[11];
    int order_ID;
};

struct bill
{
    char Order_name[100];
    int quantity;
    float prize;
    float last_prize;
    float sum;
    int count;
};

struct personal_detail etail[size];
struct bill order[size];
int thing, Y_N, repit = 1, c_i = 0;

int main()
{
    int choice_cake, data, Id;
    order[0].count = 0;

    printf("This is our bakery company\n");
    while (1)
    {
        detail();
        date_setup();
        while (1)
        {

            printf("Which Types Of Cake Do You Want?\n1)100%% veg Cake Pastries\n2)Cheese cake(on order)\n3)exist");
            printf("Enter a Your choice(1-2):-");
            scanf("%d", &choice_cake);
            system("cls");
            switch (choice_cake)
            {
            case 1:
                while (1)
                {
                    printf("1)Chocolate Truffle(1kg prize:-520.0)\n");
                    printf("2)Swiss Choto Truffle(1kg prize:-520.0)\n");
                    printf("3)Choco Chip(1kg prize:-520.0)\n");
                    printf("4)Dutch Truffle(1kg prize:-550.0)\n");
                    printf("5)Swiss Truffle(1kg prize:-550.0)\n");
                    printf("6)Choco Nought(1kg prize:-520.0)\n");
                    printf("7)Balgium Nought(1kg prize:-540.0)\n");
                    printf("8)Vanilla Butter Scotch(1kg prize:-480.0)\n");
                    printf("9)Caramel Butter Scotch(1kg prize:-520.0)\n");
                    printf("Which Cake do you want?:-");
                    scanf("%d", &thing);

                    switch (thing)
                    {
                    case 1:
                        strcpy(order[order[c_i].count].Order_name, "Chocolate Truffle(1kg prize:-520.0)");
                        order[order[c_i].count].prize = 520.0;
                        printf("Enter a quantity:-");
                        scanf("%d", &order[order[c_i].count].quantity);
                        order[order[c_i].count].last_prize = order[order[c_i].count].prize * (float)order[order[c_i].count].quantity;
                        order[c_i].count++;
                        break;

                    case 2:
                        strcpy(order[order[c_i].count].Order_name, "Swiss Choto Truffle(1kg prize:-520.0)");
                        order[order[c_i].count].prize = 520.0;
                        printf("Enter a quantity:-");
                        scanf("%d", &order[order[c_i].count].quantity);
                        order[order[c_i].count].last_prize = order[order[c_i].count].prize * (float)order[order[c_i].count].quantity;
                        order[c_i].count++;
                        break;

                    case 3:
                        strcpy(order[order[c_i].count].Order_name, "Choco Chip(1kg prize:-520.0)");
                        order[order[c_i].count].prize = 520.0;
                        printf("Enter a quantity:-");
                        scanf("%d", &order[order[c_i].count].quantity);
                        order[order[c_i].count].last_prize = order[order[c_i].count].prize * (float)order[order[c_i].count].quantity;
                        order[c_i].count++;
                        break;
                    case 4:
                        strcpy(order[order[c_i].count].Order_name, "Dutch Truffle(1kg prize:-550.0)");
                        order[order[c_i].count].prize = 550.0;
                        printf("Enter a quantity:-");
                        scanf("%d", &order[order[c_i].count].quantity);
                        order[order[c_i].count].last_prize = order[order[c_i].count].prize * (float)order[order[c_i].count].quantity;
                        order[c_i].count++;
                        break;
                    case 5:
                        strcpy(order[order[c_i].count].Order_name, "Swiss Truffle(1kg prize:-550.0)");
                        order[order[c_i].count].prize = 550.0;
                        printf("Enter a quantity:-");
                        scanf("%d", &order[order[c_i].count].quantity);
                        order[order[c_i].count].last_prize = order[order[c_i].count].prize * (float)order[order[c_i].count].quantity;
                        order[c_i].count++;
                        break;
                    case 6:
                        strcpy(order[order[c_i].count].Order_name, "Choco Nought(1kg prize:-520.0)");
                        order[order[c_i].count].prize = 520.0;
                        printf("Enter a quantity:-");
                        scanf("%d", &order[order[c_i].count].quantity);
                        order[order[c_i].count].last_prize = order[order[c_i].count].prize * (float)order[order[c_i].count].quantity;
                        order[c_i].count++;
                        break;
                    case 7:
                        strcpy(order[order[c_i].count].Order_name, "Balgium Nought(1kg prize:-540.0)");
                        order[order[c_i].count].prize = 540.0;
                        printf("Enter a quantity:-");
                        scanf("%d", &order[order[c_i].count].quantity);
                        order[order[c_i].count].last_prize = order[order[c_i].count].prize * (float)order[order[c_i].count].quantity;
                        order[c_i].count++;
                        break;
                    case 8:
                        strcpy(order[order[c_i].count].Order_name, "Vanilla Butter Scotch(1kg prize:-480.0)");
                        order[order[c_i].count].prize = 480.0;
                        printf("Enter a quantity:-");
                        scanf("%d", &order[order[c_i].count].quantity);
                        order[order[c_i].count].last_prize = order[order[c_i].count].prize * (float)order[order[c_i].count].quantity;
                        order[c_i].count++;
                        break;
                    case 9:
                        strcpy(order[order[c_i].count].Order_name, "Caramel Butter Scotch(1kg prize:-520.0)");
                        order[order[c_i].count].prize = 520.0;
                        printf("Enter a quantity:-");
                        scanf("%d", &order[order[c_i].count].quantity);
                        order[order[c_i].count].last_prize = order[order[c_i].count].prize * (float)order[order[c_i].count].quantity;
                        order[c_i].count++;
                        break;

                    default:
                        break;
                    }
                    printf("\nDo you contine or exist 0)contiue 1)exist:-");
                    scanf("%d", &Y_N);
                    if (Y_N == 0)
                    {
                         system("cls");
                        break;
                    }
                    else
                    {
                         system("cls");
                        break;
                    }
                }

                break;
            case 2:
                while (1)
                {
                    printf("1)Strawberry(1kg prize:-700)\n");
                    printf("2)Mango(1kg prize:-700\n");
                    printf("3)Bluberry(1kg prize:-700)\n");
                    printf("4)Lemon(1kg prize:-700)\n");
                    printf("5)Tiramisu(1kg prize:-700)\n");
                    printf("6)Tripal Chocolate Cake(1kg prize:-700)\n");
                    printf("Which Cake do you want?:-");
                    scanf("%d", &thing);
                    switch (thing)
                    {
                    case 1:
                        strcpy(order[order[c_i].count].Order_name, "Strawberry(1kg prize:-700)");
                        order[order[c_i].count].prize = 700.0;
                        printf("Enter  a quantity");
                        scanf("%d", &order[order[c_i].count].quantity);
                        order[order[c_i].count].last_prize = order[order[c_i].count].prize * (float)order[order[c_i].count].quantity;
                        order[c_i].count++;
                        break;
                    case 2:
                        strcpy(order[order[c_i].count].Order_name, "Mango(1kg prize:-700)");
                        order[order[c_i].count].prize = 700.0;
                        printf("Enter  a quantity");
                        scanf("%d", &order[order[c_i].count].quantity);
                        order[order[c_i].count].last_prize = order[order[c_i].count].prize * (float)order[order[c_i].count].quantity;
                        order[c_i].count++;
                        break;
                    case 3:
                        strcpy(order[order[c_i].count].Order_name, "Bluberry(1kg prize:-700)");
                        order[order[c_i].count].prize = 700.0;
                        printf("Enter  a quantity");
                        scanf("%d", &order[order[c_i].count].quantity);
                        order[order[c_i].count].last_prize = order[order[c_i].count].prize * (float)order[order[c_i].count].quantity;
                        order[c_i].count++;
                        break;
                    case 4:
                        strcpy(order[order[c_i].count].Order_name, "Lemon(1kg prize:-700)");
                        order[order[c_i].count].prize = 700.0;
                        printf("Enter  a quantity");
                        scanf("%d", &order[order[c_i].count].quantity);
                        order[order[c_i].count].last_prize = order[order[c_i].count].prize * (float)order[order[c_i].count].quantity;
                        order[c_i].count++;
                        break;
                    case 5:
                        strcpy(order[order[c_i].count].Order_name, "Tiramisu(1kg prize:-700)");
                        order[order[c_i].count].prize = 700.0;
                        printf("Enter  a quantity");
                        scanf("%d", &order[order[c_i].count].quantity);
                        order[order[c_i].count].last_prize = order[order[c_i].count].prize * (float)order[order[c_i].count].quantity;
                        order[c_i].count++;
                        break;
                    default:
                        break;
                    }
                    printf("\nDo you contine or exist 0)contiue 1)exist:-");
                    scanf("%d", &Y_N);
                    if (Y_N == 0)
                    {
                         system("cls");
                        break;
                    }
                    else
                    {
                         system("cls");
                        break;
                    }
                }

                break;
            default:
                break;
            }
            if (choice_cake >= 3)
            {
                break;
            }
        }
        printf("%f", bill_ger(order[c_i].count));
        printf("\nDo you Want to anthor data store(1:-Yes and 2:-No):-");
        scanf("%d", &data);
        switch (data)
        {
        case 1:
            repit++;
            c_i++;
            break;
        case 2:
            goto c;
        }
    }
c:
    printf("Enter a your Id:-");
    scanf("%d", &Id);
    show_detail(Id, repit, order[c_i].count, c_i);

    return 0;
}

void detail()
{
    printf("Enter a your name:-");
    scanf("%s", &etail[repit].name);
    printf("Enter a your mobile number:-");
    scanf("%llu", &etail[repit].number);
    printf("Enter a your Order Id:-");
    scanf("%d", &etail[repit].order_ID);
}
void date_setup()
{
    printf("Enter a date(DD/MM/YYYY):-");
    scanf("%s", etail[repit].Date);
    for (int i = 0; i < 10; i++)
    {
        if (etail[repit].Date[2] == '/' && etail[repit].Date[5] == '/')
        {
            continue;
        }
        else
        {
            printf("Plase Enter date in form of DD/MM/YYYY\n");
            date_setup();
        }
    }
     system("cls");
}

float bill_ger(int count)
{
    order[repit].sum = 0.0;

    for (int i = 0; i < count; i++)
    {
        order[repit].sum = order[repit].sum + order[i].last_prize;
    }
    return order[repit].sum;
}

void show_detail(int m, int n, int k, int l)
{
    printf("%d\n", k);
    for (int i = 1; i <= n; i++)
    {
        if (m == etail[i].order_ID)
        {
            printf("This is your name:-%s\n", etail[i].name);
            printf("Date:-%s\n", etail[i].Date);
            printf("number is:-%llu\n", etail[i].number);
            for (int i = 0; i <= c_i; i++)
                if (i == c_i)
                {
                    for (int j = 0; j <= k; j++)
                    {
                        printf("%s\n", order[j].Order_name);
                    }
                }
            printf("Sum:-%f", order[i].sum);
        }
    }
}