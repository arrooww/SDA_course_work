#include "menu.h"

void OutTable()//таблиц€ дл€ виведенн€ результат≥в вим≥рювань
{
    printf("\t%7.2f \t%7.2f \t %7.2f            |\n", ordered, random, backordered);
    printf("|                                                                           |\n");
}

void v_menu_insert()//виведенн€ результат≥в сортуванн€ вектора методом вставки
{
    int a;
    printf("\n| 1 - ordered         |\n");
    printf("| 2 - random          |\n");
    printf("| 3 - backordered     |\n");
    printf("| 4 - all results     |\n");
    printf("CHOOSE AN OPTION: ");
    scanf("%d", &a);
    if (a>=1 && a<=3)
    {
        srand(time(NULL));
        V_InsertSortMeasurement(a);
        select_choice = MeasurementProcessing();
        printf("\n%4.2f\n", select_choice);
    }
    else
    {
        printf("|\t\t\t Ordered \t Random \t BackOrdered        |\n");
        v_full_insert();
    }
}

void v_menu_select()//виведенн€ результат≥в сортуванн€ вектора методом вибору
{
    int a;
    printf("\n| 1 - ordered         |\n");
    printf("| 2 - random          |\n");
    printf("| 3 - backordered     |\n");
    printf("| 4 - all results     |\n");
    printf("CHOOSE AN OPTION: ");
    scanf("%d", &a);
    if (a>=1 && a<=3)
    {
        srand(time(NULL));
        V_SelectMeasurement(a);
        select_choice = MeasurementProcessing();
        printf("\n%4.2f\n", select_choice);
    }
    else
    {
        printf("|\t\t\t Ordered \t Random \t BackOrdered        |\n");
        v_full_select();
    }
}
void v_menu_shell()//виведенн€ результат≥в сортуванн€ вектора методом Ўелла
{
    int a;
    printf("\n| 1 - ordered         |\n");
    printf("| 2 - random          |\n");
    printf("| 3 - backordered     |\n");
    printf("| 4 - all results     |\n");
    printf("CHOOSE AN OPTION: ");
    scanf("%d", &a);
    if (a>=1 && a<=3)
    {
        srand(time(NULL));
        V_ShellMeasurement(a);
        select_choice = MeasurementProcessing();
        printf("\n%4.2f\n", select_choice);
    }
    else
    {
        printf("|\t\t\t Ordered \t Random \t BackOrdered        |\n");
        v_full_shell();
    }

}

void menu_insert()//виведенн€ результат≥в сортуванн€ масиву методом вставки
{
    int a;
    printf("\n| 1 - ordered         |\n");
    printf("| 2 - random          |\n");
    printf("| 3 - backordered     |\n");
    printf("| 4 - all results     |\n");
    printf("CHOOSE AN OPTION: ");
    scanf("%d", &a);
    if (a>=1 && a<=3)
    {
        srand(time(NULL));
        InsertSortMeasurement(a);
        select_choice = MeasurementProcessing();
        printf("\n%4.2f\n", select_choice);
    }
    else
    {
        printf("|\t\t\t Ordered \t Random \t BackOrdered        |\n");
        full_insert();
    }

}

void menu_select()//виведенн€ результат≥в сортуванн€ масиву методом вибору
{
    int a;
    printf("\n| 1 - ordered         |\n");
    printf("| 2 - random          |\n");
    printf("| 3 - backordered     |\n");
    printf("| 4 - all results     |\n");
    printf("CHOOSE AN OPTION: ");
    scanf("%d", &a);
    if (a>=1 && a<=3)
    {
        srand(time(NULL));
        SelectMeasurement(a);
        select_choice = MeasurementProcessing();
        printf("\n%4.2f\n", select_choice);
    }
    else
    {
        printf("|\t\t\t Ordered \t Random \t BackOrdered        |\n");
        full_select();
    }

}

void menu_shell()//виведенн€ результат≥в сортуванн€ масиву методом Ўелла
{
    int a;
    printf("\n| 1 - ordered         |\n");
    printf("| 2 - random          |\n");
    printf("| 3 - backordered     |\n");
    printf("| 4 - all results     |\n");
    printf("CHOOSE AN OPTION: ");
    scanf("%d", &a);
    if (a>=1 && a<=3)
    {
        srand(time(NULL));
        ShellMeasurement(a);
        select_choice = MeasurementProcessing();
        printf("\n%4.2f\n", select_choice);
    }
    else
    {
        printf("|\t\t\t Ordered \t Random \t BackOrdered        |\n");
        full_shell();
    }
}

void full_insert()//таблиц€ дл€ результат≥в сортуванн€ масиву методом вставки
{
    printf("|Insert sorting: ");
    srand(time(NULL));
    InsertSortMeasurement(1);
    ordered = MeasurementProcessing();
    srand(time(NULL));
    InsertSortMeasurement(2);
    random = MeasurementProcessing();
    srand(time(NULL));
    InsertSortMeasurement(3);
    backordered = MeasurementProcessing();
    OutTable();
}
void full_select()//таблиц€ дл€ результат≥в сортуванн€ масиву методом вибору
{
    printf("|Select sorting: ");
    srand(time(NULL));
    SelectMeasurement(1);
    ordered = MeasurementProcessing();
    srand(time(NULL));
    SelectMeasurement(2);
    random = MeasurementProcessing();
    srand(time(NULL));
    SelectMeasurement(3);
    backordered = MeasurementProcessing();
    OutTable();
}

void full_shell()//таблиц€ дл€ результат≥в сортуванн€ масиву методом Ўелла
{
    printf("|Shell sorting: ");
    srand(time(NULL));
    ShellMeasurement(1);
    ordered = MeasurementProcessing();
    srand(time(NULL));
    ShellMeasurement(2);
    random = MeasurementProcessing();
    srand(time(NULL));
    ShellMeasurement(3);
    backordered = MeasurementProcessing();
    OutTable();
}
void full_package()//виведенн€ результат≥в сортуванн€ масиву за вс≥ма алгоритмами
{
    printf("|\t\t\t Ordered \t Random \t BackOrdered        |\n");
    full_insert();
    full_select();
    full_shell();
}

void v_full_insert()//таблиц€ дл€ результат≥в сортуванн€ масиву методом вставки
{
    printf("|Insert sorting: ");
    srand(time(NULL));
    V_InsertSortMeasurement(1);
    ordered = MeasurementProcessing();
    srand(time(NULL));
    V_InsertSortMeasurement(2);
    random = MeasurementProcessing();
    srand(time(NULL));
    V_InsertSortMeasurement(3);
    backordered = MeasurementProcessing();
    OutTable();
}

void v_full_select()//таблиц€ дл€ результат≥в сортуванн€ вектору методом вибору
{
    printf("|Select sorting: ");
    srand(time(NULL));
    V_SelectMeasurement(1);
    ordered = MeasurementProcessing();
    srand(time(NULL));
    V_SelectMeasurement(2);
    random = MeasurementProcessing();
    srand(time(NULL));
    V_SelectMeasurement(3);
    backordered = MeasurementProcessing();
    OutTable();
}

void v_full_shell()//таблиц€ дл€ результат≥в сортуванн€ вектору методом Ўелла
{
    printf("|Shell sorting:  ");
    srand(time(NULL));
    V_ShellMeasurement(1);
    ordered = MeasurementProcessing();
    srand(time(NULL));
    V_ShellMeasurement(2);
    random = MeasurementProcessing();
    srand(time(NULL));
    V_ShellMeasurement(3);
    backordered = MeasurementProcessing();
    OutTable();
}
void v_full_package()//таблиц€ дл€ результат≥в сортуванн€ вектору за вс≥ма алгоритмами
{
    printf("|\t\t\t Ordered \t Random \t BackOrdered        |\n");
    v_full_insert();
    v_full_select();
    v_full_shell();

}

void main_menu()//д≥алоговий ≥нтерфейс
{
    printf("                                |  Course work                  |\n");
    printf("                                |  Made by Kristina Dahal KV-02 |\n");
    printf("                                |  Variant: 39                  |\n");
    int a, b, c;
    printf("\n|1 - vector menu      |\n|2 - 3D massive menu  |\n|3 - all results      |\n");
    printf("CHOOSE AN OPTION: ");
    scanf("%d",&b);
    printf("\n");
    switch (b)
    {
    case 1:
        printf("| 1 - insert sorting  |\n");
        printf("| 2 - select sorting  |\n");
        printf("| 3 - shell sorting   |\n");
        printf("| 4 - all of them     |\n");
        printf("CHOOSE AN OPTION: ");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            v_menu_insert();
            break;
        case 2:
            v_menu_select();
            break;
        case 3:
            v_menu_shell();
            break;
        case 4:
            v_full_package();
            break;
        }
        break;
    case 2:
        printf("| 1 - insert sorting  |\n");
        printf("| 2 - select sorting  |\n");
        printf("| 3 - shell sorting   |\n");
        printf("| 4 - all of them     |\n");
        printf("CHOOSE AN OPTION: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            menu_insert();
            break;
        case 2:
            menu_select();
            break;
        case 3:
            menu_shell();
            break;
        case 4:
            full_package();
            break;
        }
        break;
    case 3:
        printf("\n___________________________________Vector____________________________________\n");
        v_full_package();
        printf("_____________________________________________________________________________\n\n");
        printf("\n__________________________________3D Array___________________________________\n");
        full_package();
        printf("_____________________________________________________________________________\n");
        break;

    }
}
