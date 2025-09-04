#include<stdio.h>

void choice_menu_dp(void)
{
    printf(" _________________________________\n");//int32_t
    printf("|                                 |\n");
    printf("| ***** STUDENT RECORD MENU ***** |\n");
    printf("|_________________________________|\n");//int32_t
    printf("|                                 |\n");
    printf("| a/A  : add new record           |\n");
    printf("| d/D  : delete a record          |\n");
    printf("| s/S  : show the list            |\n");
    printf("| m/M  : modify a record          |\n");
    printf("| v/V  : save                     |\n");
    printf("| e/E  : exit                     |\n");
    printf("| t/T  : sort the list            |\n");
    printf("| l/L  : delete all the records   |\n");
    printf("| t/T  : reverse the list         |\n");
    printf("|                                 |\n");
    printf("| Enter your choice :             |\n");
    printf("|_________________________________|\n");//int32_t
}

void delete_menu_dp(void)
{
    printf(" _________________________________\n");//int32_t
    printf("|                                 |\n");
    printf("| r/R  : enter roll.no to delete  |\n");
    printf("| n/N  : enter name to delete     |\n");
    printf("|                                 |\n");
    printf("|                                 |\n");
    printf("|                                 |\n");
    printf("|                                 |\n");
    printf("|                                 |\n");
    printf("|                                 |\n");
    printf("|_________________________________|\n");//int32_t
}

void save_menu_dp(void)
{
    printf(" _________________________________\n");//int32_t
    printf("|                                 |\n");
    printf("| Enter                           |\n");
    printf("| s/S  : save and exit            |\n");
    printf("| e/E  : exit without saving      |\n");
    printf("|                                 |\n");
    printf("|                                 |\n");
    printf("|                                 |\n");
    printf("|                                 |\n");
    printf("|                                 |\n");
    printf("|_________________________________|\n");//int32_t
}

void sort_menu_dp(void)
{
    printf(" _________________________________\n");//int32_t
    printf("|                                 |\n");
    printf("| Enter                           |\n");
    printf("| n/N  : sort with name           |\n");
    printf("| p/P  : sort with percentage     |\n");
    printf("|                                 |\n");
    printf("|                                 |\n");
    printf("|                                 |\n");
    printf("|                                 |\n");
    printf("|                                 |\n");
    printf("|_________________________________|\n");//int32_t
}

void modify_menu_dp(void)
{
    printf(" _______________________________________________\n");//int32_t
    printf("|                                               |\n");
    printf("| Enter which record to search for modification |\n");
    printf("| r/R  : to search a roll.no                    |\n");
    printf("| n/N  : to search a name                       |\n");
    printf("| p/P  : percentage based                       |\n");
    printf("|                                               |\n");
    printf("|                                               |\n");
    printf("|                                               |\n");
    printf("|                                               |\n");
    printf("|_______________________________________________|\n");//int32_t
}