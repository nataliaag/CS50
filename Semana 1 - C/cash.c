#include <cs50.h>
#include <stdio.h>
#include <math.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);


int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("amount %i\n", coins);
}

int get_cents(void)
{
    //get user to imput the change owed
    int change;
    do
    {
        change = get_int("change owed: ");
    }
    while (change < 0);
    return (change);
    
}

int calculate_quarters(int cents)
{
    // as long as change owed is more than 25c
    int quarters = 0;
    if (cents >= 25)
    {
        quarters = cents / 25;
    }
    return quarters++;
}

int calculate_dimes(int cents)
{
    // as long as change owed is more than 10c
    int dimes = 0;
    if (cents >= 10)
    {
        dimes = cents / 10;
    }
    return dimes++;

}

int calculate_nickels(int cents)
{
    // as long as the change owed is more than 5c
    int nickels = 0;
    if (cents >= 5)
    {
        nickels = cents / 5;
    }
    return nickels++;

}

int calculate_pennies(int cents)
{
    // as long as the change owed is more than 1c
    int pennies = 0;
    if (cents >= 1)
    {
        pennies = cents / 1;
    }
    return pennies++;

}