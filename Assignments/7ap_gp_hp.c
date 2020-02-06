//Program for calculation of AP, GP and HP//

#include<stdio.h>
int main()
{
    //Declaring the vaiables//
    int i,a,r,n,m,ap,gp; 
    float t_hp,hp;

    //Read the a, r and n values from the user//
    printf("Enter the values of a,r and n \n");
    scanf("%d%d%d",&a,&r,&n);

    //Store the a value in variable m for reset//
    m = a;

    //For AP calculation//
    a = m;
    printf("The value of AP is \n");

    //Loop is to check the values upto the given number n//
    for ( i = 1; i <= n; i++ )
    {
	ap = a + r;
	a = ap;
	printf("%d\t",ap);
    }
    printf("\n");


    //For GP calculation//
    a = m;
    printf("The value of GP is \n");

    //Loop is to check the values upto the given number n//
    for ( i = 1; i <= n; i++ )
    {
	gp = a * r;
	a = gp;
	printf("%d\t",gp);
    }
    printf("\n");


    //For HP calculation//
    hp = m;
    printf("The value of HP is \n");

    //Loop is to check the values upto the given number n//
    for ( i = 1; i <= n; i++ )
    {
	hp = hp + r;
	t_hp = ( 1 / hp);
	printf("%f\n",t_hp);
    }
    printf("\n");
}


