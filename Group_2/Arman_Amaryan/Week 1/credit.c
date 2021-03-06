#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long credit;
    do
    {
        credit = get_long("Credit: ");
    }
    while (credit < 0);
    int count = 0;
    int sum = 0;
    long n = credit;
    int mnacord;
    int b;
    int c = 0;
    while (n > 0)
    {
        mnacord = n % 10;
        n = n / 10;
        count++;
        if (count % 2 == 0)
        {
            int temp = mnacord * 2;
            if (temp > 9)
            {
                sum += 1;
                sum += (temp % 10);
            }
            else
            {
                sum += temp;
            }
        }
        else
        {
            sum += mnacord;
        }

    }
    if (count == 15)
    {
        while (c < 14)
        {
            b = credit % 10;
            credit = credit / 10;
            c++;
        }
    }
    else
    {
        while (c < 15)
        {
            b = credit % 10;
            credit = credit / 10;
            c++;
        }
    }
    if ((count == 16 || count == 13) && sum % 10 == 0 && mnacord == 4)
    {
        printf("VISA\n");
    }
    else if (count == 15 && sum % 10 == 0 && mnacord == 3 && (b == 4 || b == 7))
    {
        printf("AMEX\n");
    }
    else if (count == 16 && sum % 10 == 0 && mnacord == 3)
    {
        printf("JCB\n");
    }
    else if (count == 16 && sum % 10 == 0 && (mnacord == 5 || mnacord == 2) && (b == 1 || b == 2 || b == 3 || b == 4 || b == 5))
    {
        printf("MASTERCARD\n");
    }
    else if (count == 14 & sum % 10 == 0 && mnacord == 3)
    {
        printf("DINERS CLUB\n");
    }
    else if (count == 16 & sum % 10 == 0 && mnacord == 6)
    {
        printf("DISCOVER\n");
    }
    else
    {
        printf("INVALID\n");
    }
}

