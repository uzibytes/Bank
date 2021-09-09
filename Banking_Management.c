#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

struct customer_info
{
    char ID_NUMBER[15];
    char NAME[20];
    char IFSC[15];
    char ADDRESS[70];
    char MOBILE_NUMBER[15];
    char DATE_OF_BIRTH[15];
    char AADHAR_NUMBER[15];

} d1, e1;

// struct transection_info
// {
//     int year;
//     int month;
//     int date;
//     float money;
//     char from;
//     char to;
//     long mobile;

// } t1;

void transection_details()
{
    int id;
    printf("Enter Customer's ID-NUMBER : ");
    scanf("%d", &id);
}

void holiday_details()
{
    int date;
    printf("Enter '1' for checking holiday's in upcoming month\n");
    printf("Enter '2' for checking holiday's in upcoming 3 months\n");
    printf("Enter '3' for checking holiday's in upcoming 6 months\n");
    printf("Enter '4' for checking holiday's in upcoming 9 months\n");
    printf("Enter '5' for checking holiday's in upcoming 12 months\n");
    scanf("%d", &date);
    switch (date)
    {
    case 1:

        printf("1 Jnauary 2021 : New Year's Day\n");
        printf("14 January 2021 : Makar Sankranti/Pongal\n");
        printf("26 January 2021 : Repubic Day\n");

        break;

    case 2:
        printf("1 Jnauary 2021 : New Year's Day\n");
        printf("14 January 2021 : Makar Sankranti/Pongal\n");
        printf("26 January 2021 : Repubic Day\n");
        printf("11 March 2021 : Maha Shivratri\n");
        printf("29 March 2021 : Holi\n");
        break;

    case 3:
        printf("1 Jnauary 2021 : New Year's Day\n");
        printf("14 January 2021 : Makar Sankranti/Pongal\n");
        printf("26 January 2021 : Repubic Day\n");
        printf("11 March 2021 : Maha Shivratri\n");
        printf("29 March 2021 : Holi\n");
        printf("2 April 2021 : Good Friday\n");
        printf("6 April 2021 : Mahavir Javanti\n");
        printf("1 May 2021 : May Day\n");
        printf("13 May 2021 : Idul Fitr\n");
        break;

    case 4:
        printf("1 Jnauary 2021 : New Year's Day\n");
        printf("14 January 2021 : Makar Sankranti/Pongal\n");
        printf("26 January 2021 : Repubic Day\n");
        printf("11 March 2021 : Maha Shivratri\n");
        printf("29 March 2021 : Holi\n");
        printf("2 April 2021 : Good Friday\n");
        printf("6 April 2021 : Mahavir Javanti\n");
        printf("1 May 2021 : May Day\n");
        printf("13 May 2021 : Idul Fitr\n");
        printf("20 July 2021 : EID al Adha\n");
        printf("21 July 2021 : Bakrid\n");
        printf("24 July 2021 : Guru Purnima\n");
        printf("15 August 2021 : Independence Day\n");
        printf("19 August 2021 : Muharram\n");
        printf("22 August 2021 : Raksha Bandhan\n");
        printf("30 August 2021 : Janamashtami\n");
        printf("11 September 2021 : Ganesh Chaturthi\n");
        break;

    case 5:
        printf("1 Jnauary 2021 : New Year's Day\n");
        printf("14 January 2021 : Makar Sankranti/Pongal\n");
        printf("26 January 2021 : Repubic Day\n");
        printf("11 March 2021 : Maha Shivratri\n");
        printf("29 March 2021 : Holi\n");
        printf("2 April 2021 : Good Friday\n");
        printf("6 April 2021 : Mahavir Javanti\n");
        printf("1 May 2021 : May Day\n");
        printf("13 May 2021 : Idul Fitr\n");
        printf("20 July 2021 : EID al Adha\n");
        printf("21 July 2021 : Bakrid\n");
        printf("24 July 2021 : Guru Purnima\n");
        printf("15 August 2021 : Independence Day\n");
        printf("19 August 2021 : Muharram\n");
        printf("22 August 2021 : Raksha Bandhan\n");
        printf("30 August 2021 : Janamashtami\n");
        printf("11 September 2021 : Ganesh Chaturthi\n");
        printf("2 October 2021 : Mahatma Gandhi Jayanti\n");
        printf("6 October : Mahalaya\n");
        printf("12 October : Maha Saptami\n");
        printf("13 October : Maha Ashtami\n");
        printf("14 October 2021 : Maha Navami\n");
        printf("15 October 2021: Vijaya Dashami/Dussehra\n");
        printf("19 October 2021: Id-e-Milad\n");
        printf("20 October 2021 : Lakshmi Puja\n");
        printf("04 November 2021 : Diwali\n");
        printf("06 November 2021 : Chhath Puja\n");
        printf("25 December 2021 : Christmas Day\n");
        break;
    default:
        printf("INVALID INPUT\n");
        break;
    }
}
void branch_details()
{
    int state;
    printf("Press '1' for Checking Branches is Andhra Pradesh\n");
    printf("Press '2' for Checking Branches is Arunachal Pradesh\n");
    printf("Press '3' for Checking Branches is Assam\n");
    printf("Press '4' for Checking Branches is Bihar\n");
    printf("Press '5' for Checking Branches is Chhattisgarh\n");
    printf("Press '6' for Checking Branches is Goa\n");
    printf("Press '7' for Checking Branches is Gujrat\n");
    printf("Press '8' for Checking Branches is Haryana\n");
    printf("Press '9' for Checking Branches is Himachal Pradesh\n");
    printf("Press '10' for Checking Branches is Jharkhand\n");
    printf("Press '11' for Checking Branches is Karnataka\n");
    printf("Press '12' for Checking Branches is Kerala\n");
    printf("Press '13' for Checking Branches is Madhya Pradesh\n");
    printf("Press '14' for Checking Branches is Maharashtra\n");
    printf("Press '15' for Checking Branches is Manipur\n");
    printf("Press '16' for Checking Branches is Meghalaya\n");
    printf("Press '17' for Checking Branches is Mizoram\n");
    printf("Press '18' for Checking Branches is Nagaland\n");
    printf("Press '19' for Checking Branches is Odisha\n");
    printf("Press '20' for Checking Branches is Punjab\n");
    printf("Press '21' for Checking Branches is Rajasthan\n");
    printf("Press '22' for Checking Branches is Sikkim\n");
    printf("Press '23' for Checking Branches is Tamil Nadu\n");
    printf("Press '24' for Checking Branches is Telangana\n");
    printf("Press '25' for Checking Branches is Tripura\n");
    printf("Press '26' for Checking Branches is Uttar Pradesh\n");
    printf("Press '27' for Checking Branches is Uttarakhand\n");
    printf("Press '28' for Checking Branches is West Bengal\n");
    printf("Press '29' for Checking Branches is Delhi\n");
    printf("Press '30' for Checking Branches is J&K\n");
    scanf("%d", &state);
    switch (state)
    {
    case 1:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 2:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 3:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 4:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 5:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 6:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 7:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 8:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 9:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 10:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 11:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 12:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 13:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 14:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 15:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 16:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 17:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 18:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 19:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 20:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 21:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 22:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 23:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 24:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 25:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 26:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 27:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 28:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 29:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;
    case 30:
        printf("INFORMATION WILL UPLOADED SOON!\n");
        break;

    default:
        printf("INVALI INPUT\n");
        break;
    }
}

void seven(){
    char ch;
    FILE *fp;
    fp = fopen("seven.txt", "r");
    if (fp == NULL)
    {
        printf("Can't open\n");
    }
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    fclose(fp);
}

void thirty(){
    char ch;
    FILE *fp;
    fp = fopen("thirty.txt", "r");
    if (fp == NULL)
    {
        printf("Can't open\n");
    }
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    fclose(fp);
}

void quatar(){
    char ch;
    FILE *fp;
    fp = fopen("quatar.txt", "r");
    if (fp == NULL)
    {
        printf("Can't open\n");
    }
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    fclose(fp);
}

void yearly(){
    char ch;
    FILE *fp;
    fp = fopen("yearly.txt", "r");
    if (fp == NULL)
    {
        printf("Can't open\n");
    }
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    fclose(fp);
}

void verification_customer(char *login_info, char *pass_info)
{
    char result[20] = "rajnishpuri";
    char pass_result[20] = "password";
    int value;
raj:
    fflush(stdin);
    printf("Enter Your Username : ");
    gets(login_info);
    fflush(stdin);

    value = strcmp(login_info, result);

    if (value == 0)
    {
        goto raj2;
    }
    else
    {
        printf("INVALID INPUT\n");
        goto raj;
    }

raj2:

    printf("Enter Your Password : ");
    for (int i = 0; i < 8; i++)
    {
        pass_info[i] = getch();
        printf("*");
    }
    pass_info[8] = '\0';
    fflush(stdin);
    value = strcmp(pass_info, pass_result);
    if (value == 0)
    {
        return;
    }
    else
    {
        printf("\n");
        printf("INVALID PASSWORD\n");
        goto raj2;
    }
}
void verification_employe(char *login_info, char *pass_info)
{
    int value;
    char result[20] = "RAJNISHPURI";
    char pass_result[20] = "PASSWORD";
emp_part1:
    fflush(stdin);
    printf("Enter Your Username : ");
    gets(login_info);
    fflush(stdin);
    value = strcmp(login_info, result);
    if (value == 0)
    {
        goto emp_part2;
    }
    else
    {
        printf("INVALID INPUT\n");
        goto emp_part1;
    }
emp_part2:
    fflush(stdin);
    printf("Enter Your Password : ");
    for (int i = 0; i < 8; i++)
    {
        pass_info[i] = getch();
        printf("*");
    }
    pass_info[8] = '\0';
    fflush(stdin);
    value = strcmp(pass_info, pass_result);
    if (value == 0)
    {
        return;
    }
    else
    {
        printf("\n");
        printf("INVALID PASSWORD\n");
        goto emp_part2;
    }
}
void customer_writting()
{

    FILE *fp;

    fp = fopen("Customer_Info.txt", "w");
    if (fp == NULL)
    {
        printf("FILE IS NOT AVAILABLE\n");
    }
    fflush(stdin);
    printf("Enter Customer's Name : ");
    gets(e1.NAME);
    fflush(stdin);
    printf("Enter Customer's D-O-B : ");
    gets(e1.DATE_OF_BIRTH);
    fflush(stdin);
    printf("Enter Customer's Address : ");
    gets(e1.ADDRESS);
    fflush(stdin);
    printf("Enter Customer's Mobile Number : ");
    gets(e1.MOBILE_NUMBER);
    fflush(stdin);
    printf("Enter Customer's IFSC Number : ");
    gets(e1.IFSC);
    fflush(stdin);
    printf("Enter Customer's Aadhar number : ");
    gets(e1.AADHAR_NUMBER);
    strcpy(e1.ID_NUMBER, "7846457684");

    fprintf(fp, "Name : ");
    fputs(e1.NAME, fp);
    fputs("\n", fp);
    fprintf(fp, "ID-NUMBER - %s\n", e1.ID_NUMBER);
    fprintf(fp, "IFSC CODE : ");
    fputs(e1.IFSC, fp);
    fprintf(fp, "\n");
    fprintf(fp, "D-O-B : ");
    fputs(e1.DATE_OF_BIRTH, fp);
    fprintf(fp, "\n");
    fprintf(fp, "Address : ");
    fputs(e1.ADDRESS, fp);
    fprintf(fp, "\n");
    fprintf(fp, "Mobile Number : %s\n", e1.MOBILE_NUMBER);
    fprintf(fp, "Aadhar Number : %s\n", e1.AADHAR_NUMBER);

    fclose(fp);
};

int main()
{
    int hard;
    char login_info[20];
    char pass_info[9];
part1:

    printf("                                                                            WELCOME TO RP BANK\n");
    printf("Please Give your Login Credentials \n");
    printf("Enter '1' for login as customer\n");
    printf("Enter '2' for login as Employe\n");
    int what;
    scanf("%d", &what);
    switch (what)
    {
    case 1:

    raj3:
        printf("\e[1;1H\e[2J");

        printf("                                                                        Hello, Welcome to RP Bank\n");
        printf("                                                                                    HOME\n");
        int a;
        verification_customer(login_info, pass_info);
    raj10:
        printf("\e[1;1H\e[2J");
        printf("                                                                      Welcome Rajnish Puri to RP BANK\n");
        printf("\nPress '1' for Customer Information\n");
        printf("Press '2' for Transection Information\n");
        printf("Press '3' for Holidays\n");
        printf("Press '4' for Branches\n");
        printf("Press '5' for Logout\n");
        scanf("%d", &a);
        switch (a)
        {
        case 1:

            printf("\e[1;H\e[2J");
            strcpy(d1.ID_NUMBER, "7384676767");
            // fflush(stdin);
            strcpy(d1.NAME, "Rajnish Puri");
            strcpy(d1.IFSC, "GDHFE23245");
            strcpy(d1.ADDRESS, "Gobarsahi, Prashan nagar colony, Muzaffarpur, bihar, 843146");
            strcpy(d1.MOBILE_NUMBER, "7683543564");
            strcpy(d1.AADHAR_NUMBER, "564564434465");
            strcpy(d1.DATE_OF_BIRTH, "15-11-2002");
            printf("                                                                          Customer Information\n");
            printf("ID-NUMBER : %s\n", d1.ID_NUMBER);
            printf("NAME : ");
            puts(d1.NAME);
            printf("IFSC Code : ");
            puts(d1.IFSC);
            printf("ADDRESS : ");
            puts(d1.ADDRESS);
            printf("MOBILE NUMBER : %s\n", d1.MOBILE_NUMBER);
            printf("D-O-B : ");
            puts(d1.DATE_OF_BIRTH);
            printf("AADAHAR NUMBER : %s\n", d1.AADHAR_NUMBER);
            int check, otp;
            printf("press '1' for change Mobile Number : \n");
            scanf("%d", &check);
            if (check == 1)
            {
                printf("Enter Your new mobile number : ");
                fflush(stdin);
                gets(d1.MOBILE_NUMBER);
                printf("Enter the OTP : ");
                scanf("%d", &otp);
                if (otp == 123456)
                {
                    printf("Your Mobile Information is successfully changed\n");
                }
                else
                {
                    printf("INVALID OTP\n");
                    goto raj10;
                }
            }
            else
            {
                goto raj3;
            }

        case 2:
            printf("                                                                        Transection Information\n");
            printf("\n");
            printf("Enter '0' for checking transection info of last seven days\n");
            printf("Enter '1' for checking transection info of last month\n");
            printf("Enter '2' for checking transection info of last quater\n");
            printf("Enter '3' for checking transection info of last year\n");

            int time;
            scanf("%d", &time);
            switch (time)
            {
            case 0:
                printf("\e[1;1H\e[2j");
                printf("Transection History For Last 7 Days : \n");
                seven();
                printf("Enter '1' for go back : ");
                scanf("%d", &hard);
                if (hard == 1)
                {
                    goto raj10;
                }
                else
                {
                    goto part1;
                }
            
            case 1:
                printf("\e[1;1H\e[2j");
                printf("Transection History For Last 30 Days : \n");
                thirty();
                printf("Enter '1' for go back : ");
                scanf("%d", &hard);
                if (hard == 1)
                {
                    goto raj10;
                }
                else
                {
                    goto part1;
                }

            case 2:
                printf("\e[1;1H\e[2j");
                printf("Transection History For Last 180 Days : \n");
                quatar();
                printf("Enter '1' for go back : ");
                scanf("%d", &hard);
                if (hard == 1)
                {
                    goto raj10;
                }
                else
                {
                    goto part1;
                }

            case 3:
                printf("\e[1;1H\e[2j");
                printf("Transection History For Last 365 Days : \n");
                yearly();
                printf("Enter '1' for go back : ");
                scanf("%d", &hard);
                if (hard == 1)
                {
                    goto raj10;
                }
                else
                {
                    goto part1;
                }
                
                

            default:
                break;
            }
        case 3:
            holiday_details();

            printf("Enter '1' for go back : ");
            scanf("%d", &hard);
            if (hard == 1)
            {
                goto raj10;
            }
            else
            {
                break;
            }

        case 4:
            branch_details();

            printf("Enter '1' for go back : ");
            scanf("%d", &hard);
            if (hard == 1)
            {
                goto raj10;
            }
            else
            {
                break;
            }

        case 5:
            printf("\e[1;1H\e[2J");
            int press;
            printf("Press '1' for Logout\n");
            printf("press any key to back\n");
            scanf("%d", &press);
            if (press == 1)
            {
                printf("\e[1;1H\e[2J");
                goto part1;
                
            }
            else
            {
                printf("\e[1;1H\e[2J");
                goto raj10;
                
            }
      
        default:
            break;
        }
        break;

    case 2:
        verification_employe(login_info, pass_info);
    emp_part3:
        printf("\e[1;1H\e[2J");
        printf("                                                                                        RP Bank\n");
        printf("                                                                                Department of Information\n");
        printf("                                                                                          HOME\n");
        int new1;
        printf("Press '1' for New Customer Information\n");
        printf("Press '2' for checking Transection Information\n");
        printf("Press '3' for checking Holidays\n");
        printf("Press '4' for checking Branches\n");
        printf("Press '5' for Logout\n");
        scanf("%d", &new1);
        printf("\e[1;1H\e[2J");
        switch (new1)
        {
        case 1:
            customer_writting();

            printf("Enter '1' for go back : ");
            scanf("%d", &hard);
            if (hard == 1)
            {
                goto emp_part3;
            }
            else
            {
                break;
            }
        
        case 2:
            

        case 3:
            holiday_details();

            printf("Enter '1' for go back : ");
            scanf("%d", &hard);
            if (hard == 1)
            {
                goto emp_part3;
            }
            else
            {
                break;
            }
        case 4:
            branch_details();

            printf("Enter '1' for go back : ");
            scanf("%d", &hard);
            if (hard == 1)
            {
                goto raj10;
            }
            else
            {
                break;
            }

        case 5:
            printf("\e[1;1H\e[2J");
            int press;
            printf("Press '1' for Logout\n");
            printf("press any key to back\n");
            scanf("%d", &press);
            if (press == 1)
            {   
                printf("\e[1;1H\e[2J");
                goto part1;

            }
            else
            {   
                printf("\e[1;1H\e[2J");
                goto emp_part3;
            }

        default:
            printf("INVALID INPUT\n");
            break;
        }

        break;
    default:
        printf("INVALID INPUT\n");
        goto part1;

        break;
    }

    return 0;
}
