

int main()
{
    int unit;
    float amount,t_amount, sur_charge,i=0 ;

while(i<10)

	{

    printf("Enter Units To Calculate Electricity Bill: ");
    scanf("%d", &unit);


    if(unit <= 50)
    {
        amount = unit * 0.50;
    }
    else if(unit <= 150)
    {
        amount = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        amount = 100 + ((unit-150) * 1.20);
    }
    else
    {
        amount = 220 + ((unit-250) * 1.50);
    }

    sur_charge = amount * 0.20;
    t_amount  = amount + sur_charge;

    printf("Your Electricity Bill is Rs. %.1f\n\n" ,t_amount);
	}
    return 0;

    
}
