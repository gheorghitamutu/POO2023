#include <iostream>

#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:4996)

int MyAtoi(char* str)
{
    int result = 0;
    for (int i = 0; str[i] <= '9' && str[i] >= '0'; ++i)
    {
        result = result * 10 + str[i] - '0';
    }

    return result;
}

void ex_1()
{
    FILE* fp = fopen("in.txt", "r");
    if (!fp)
    {
        perror("File opening failed");
        return;
    }

    int sum = 0;
    char line[1024]{ 0 };
    while (fgets(line, 1024, fp))
    {
        sum += MyAtoi(line);
    }

    printf("Ex 1: Sum is <%d>.\n", sum);
}


int main()
{
    ex_1();

    return 0;
}

