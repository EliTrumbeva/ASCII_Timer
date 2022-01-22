#include <iostream>
#include "windows.h"
using namespace std;

const int LENGTH = 11;
const int SIZE_OF_ONE = 2;
char colon[LENGTH][SIZE_OF_ONE];
char str0[LENGTH][LENGTH];
char str1[LENGTH][SIZE_OF_ONE];
char str2[LENGTH][LENGTH];
char str3[LENGTH][LENGTH];
char str4[LENGTH][LENGTH];
char str5[LENGTH][LENGTH];
char str6[LENGTH][LENGTH];
char str7[LENGTH][LENGTH];
char str8[LENGTH][LENGTH];
char str9[LENGTH][LENGTH];


void templateColon(char str[LENGTH][SIZE_OF_ONE])
{
    for (int i = 0; i < 11; i++)
    {
        str[i][0] = ' ';
        str[i][1] = '\0';
    }
}

void template0(char str0[LENGTH][LENGTH])
{
    for (int i = 0; i < 10; i++)
    {
        str0[0][i] = '0';
        str0[0][10] = '\0';
    }

    for (int j = 0; j < 9; j++)
    {
        str0[j + 1][0] = '0';
        for (int i = 0; i < 8; i++)
            str0[j + 1][i + 1] = ' ';
        str0[j + 1][9] = '0';
        str0[j + 1][10] = '\0';
    }

    for (int i = 0; i < 10; i++)
        str0[10][i] = '0';
    str0[10][10] = '\0';
}

void template1(char str1[LENGTH][SIZE_OF_ONE])
{
    for (int i = 0; i < 11; i++)
    {
        str1[i][0] = '1';
        str1[i][1] = '\0';
    }

}

void template2(char str2[LENGTH][LENGTH])
{
    for (int i = 0; i < 10; i++)
        str2[0][i] = '2';
    str2[0][10] = '\0';

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 9; i++)
            str2[j + 1][i] = ' ';
        str2[j + 1][9] = '2';
        str2[j + 1][10] = '\0';

    }

    for (int i = 0; i < 10; i++)
        str2[5][i] = '2';
    str2[5][10] = '\0';

    for (int j = 0; j < 4; j++)
    {
        str2[j + 6][0] = '2';
        for (int i = 0; i < 9; i++)
            str2[j + 6][i+1] = ' ';
        str2[j + 6][10] = '\0';
    }

    for (int i = 0; i < 10; i++)
        str2[10][i] = '2';
    str2[10][10] = '\0';

}

void template3(char str3[LENGTH][LENGTH])
{
    for (int i = 0; i < 10; i++)
        str3[0][i] = '3';
    str3[0][10] = '\0';

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 9; i++)
            str3[j + 1][i] = ' ';
        str3[j + 1][9] = '3';
        str3[j + 1][10] = '\0';
    }

    for (int i = 0; i < 10; i++)
        str3[5][i] = '3';
    str3[5][10] = '\0';

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 9; i++)
            str3[j + 6][i] = ' ';
        str3[j + 6][9] = '3';
        str3[j + 6][10] = '\0';
    }

    for (int i = 0; i < 10; i++)
        str3[10][i] = '3';
    str3[10][10] = '\0';
}

void template4(char str4[LENGTH][LENGTH])
{
    for (int j = 0; j < 5; j++)
    {
        str4[j][0] = '4';
        for (int i = 0; i < 8; i++)
            str4[j][i + 1] = ' ';
        str4[j][9] = '4';
        str4[j][10] = '\0';
    }

    for (int i = 0; i < 10; i++)
        str4[5][i] = '4';
    str4[5][10] = '\0';

    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 9; i++)
            str4[j + 6][i] = ' ';
        str4[j + 6][9] = '4';
        str4[j + 6][10] = '\0';
    }
}

void template5(char str5[LENGTH][LENGTH])
{
    for (int i = 0; i < 10; i++)
        str5[0][i] = '5';
    str5[0][10] = '\0';

    for (int j = 0; j < 4; j++)
    {
        str5[j + 1][0] = '5';
        for (int i = 0; i < 9; i++)
            str5[j + 1][i + 1] = ' ';
        str5[j + 1][10] = '\0';
    }

    for (int i = 0; i < 10; i++)
        str5[5][i] = '5';
    str5[5][10] = '\0';

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 9; i++)
            str5[j + 6][i] = ' ';
        str5[j + 6][9] = '5';
        str5[j + 6][10] = '\0';
    }

    for (int i = 0; i < 10; i++)
        str5[10][i] = '5';
    str5[10][10] = '\0';
}

void template6(char str6[LENGTH][LENGTH])
{
    for (int i = 0; i < 10; i++)
        str6[0][i] = '6';
    str6[0][10] = '\0';

    for (int j = 0; j < 4; j++)
    {
        str6[j + 1][0] = '6';
        for (int i = 0; i < 9; i++)
            str6[j + 1][i + 1] = ' ';
        str6[j + 1][10] = '\0';
    }

    for (int i = 0; i < 10; i++)
        str6[5][i] = '6';
    str6[5][10] = '\0';

    for (int j = 0; j < 4; j++)
    {
        str6[j + 6][0] = '6';
        for (int i = 0; i < 8; i++)
            str6[j + 6][i + 1] = ' ';
        str6[j + 6][9] = '6';
        str6[j + 6][10] = '\0';
    }

    for (int i = 0; i < 10; i++)
        str6[10][i] = '6';
    str6[10][10] = '\0';
}

void template7(char str7[LENGTH][LENGTH])
{
    for (int i = 0; i < 10; i++)
        str7[0][i] = '7';
    str7[0][10] = '\0';

    for (int j = 0; j < 10; j++)
    {
        for (int i = 0; i < 9; i++)
            str7[j + 1][i] = ' ';
        str7[j + 1][9] = '7';
        str7[j + 1][10] = '\0';
    }
}

void template8(char str8[LENGTH][LENGTH])
{
    for (int i = 0; i < 10; i++)
        str8[0][i] = '8';
    str8[0][10] = '\0';

    for (int j = 0; j < 4; j++)
    {
        str8[j + 1][0] = '8';
        for (int i = 0; i < 8; i++)
            str8[j + 1][i + 1] = ' ';
        str8[j + 1][9] = '8';
        str8[j + 1][10] = '\0';
    }

    for (int i = 0; i < 10; i++)
        str8[5][i] = '8';
    str8[5][10] = '\0';

    for (int j = 0; j < 4; j++)
    {
        str8[j + 6][0] = '8';
        for (int i = 0; i < 8; i++)
            str8[j + 6][i + 1] = ' ';
        str8[j + 6][9] = '8';
        str8[j + 6][10] = '\0';
    }

    for (int i = 0; i < 10; i++)
        str8[10][i] = '8';
    str8[10][10] = '\0';
}

void template9(char str9[LENGTH][LENGTH])
{
    for (int i = 0; i < 10; i++)
        str9[0][i] = '9';
    str9[0][10] = '\0';

    for (int j = 0; j < 4; j++)
    {
        str9[j + 1][0] = '9';
        for (int i = 0; i < 8; i++)
            str9[j + 1][i + 1] = ' ';
        str9[j + 1][9] = '9';
        str9[j + 1][10] = '\0';
    }

    for (int i = 0; i < 10; i++)
        str9[5][i] = '9';
    str9[5][10] = '\0';

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 9; i++)
            str9[j + 6][i] = ' ';
        str9[j + 6][9] = '9';
        str9[j + 6][10] = '\0';
    }

    for (int i = 0; i < 10; i++)
        str9[10][i] = '9';
    str9[10][10] = '\0';
}

void whatIsTheDigit(int digit, int index)
{
    switch (digit)
    {
    case 0:
        cout << str0[index];
        break;
    case 1:
        cout << str1[index];
        break;
    case 2:
        cout << str2[index];
        break;
    case 3:
        cout << str3[index];
        break;
    case 4:
        cout << str4[index];
        break;
    case 5:
        cout << str5[index];
        break;
    case 6:
        cout << str6[index];
        break;
    case 7:
        cout << str7[index];
        break;
    case 8:
        cout << str8[index];
        break;
    case 9:
        cout << str9[index];
        break;
    }
}

void printTime(int time, int index)
{
    if (time < 10)
    {
        cout << str0[index];
        cout << colon[index];
        whatIsTheDigit(time, index);
        cout << colon[index];
    }
    else
    {
        whatIsTheDigit(time / 10, index);
        cout << colon[index];
        whatIsTheDigit(time % 10, index);
        cout << colon[index];
    }
}

int main()
{
    int time;
    cin >> time;

    templateColon(colon);
    template0(str0);
    template1(str1);
    template2(str2);
    template3(str3);
    template4(str4);
    template5(str5);
    template6(str6);
    template7(str7);
    template8(str8);
    template9(str9);

   
        int k = time;
        int sec = k % 60;
        k /= 60;
        int min = k % 60;
        k /= 60;
        int hours = k;

        //while (time > 0)
       // {
           // system("CLS");
            cout << hours;

            for (int i = 0; i < LENGTH; i++)
            {
                if (hours > 0)
                {
                    printTime(hours, i);
                    printTime(min, i);
                    printTime(sec, i);
                }
                else if (min > 0)
                {
                    printTime(min, i);
                    printTime(sec, i);
                }
                else
                    printTime(sec, i);
                cout << endl;
            }
         /*   Sleep(1000);
            time--;*/
        //}
    
    return 0;
}
