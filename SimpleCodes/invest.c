#include<stdio.h>

double start_balance(double starts);
double interest_rate(double rates);
double end_balance(double ends);

int main(){

    double initial;
    double rate;
    double rates;
    double endbalance;
    int year;
    double add;
    int start;
    double starts;
    double ends;
    
    

    do 
    {
        printf("Enter initial investment amount: ");
        scanf("%lf", &initial);
        if (initial < 0) printf("Initial investment cannot be negative.\n");

    } while (initial < 0);

     do
    {
        printf("Enter total years: ");
        scanf("%d", &year);
        if (year <= 0) printf("Years must be greater than zero.\n ");

    } while (year <= 0);

    do
    {
        printf("Enter return rate: ");
        scanf("%lf", &rate);
        if (rate < 0) printf("Rate cannot be negative.\n ");

        
    } while (rate < 0);

    do
    {
        printf("Enter additional contribution each year: ");
        scanf("%lf", &add);
        if (add < 0) printf("Contribution cannot be negative.\n ");

    } while (add < 0);

   

    printf("\n\n");
    printf("Year      Start              Interest            Balance\n");
    printf("************************************************************\n");

    
    rates = initial * (rate/ 100);
    starts = initial;
    ends = initial + rates;

    
    
    
    for (start = 1; start <= year; start++)
    {
        
        printf("%-10d%-20.2f%-20.2f%-20.2f\n", 
        start, 
        start_balance(starts), 
        interest_rate(rates), 
        end_balance(ends)
        );
        
        starts = ends + add;
        rates = starts * (rate/ 100);
        ends = starts + rates;


        
        
        
    }

    
        
    printf("\n");

    return 0;
    
}

double start_balance(double starts) {return starts; }

double interest_rate(double rates) { return rates; }

double end_balance( double ends) {return ends; }