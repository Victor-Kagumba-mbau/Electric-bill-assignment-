/*
//program to calculate amd display the electric bill for customers
Author:Victor Kagumba
Reg No: CT101/G/23670/24
Date: 08/10/2024
*/
#include<stdio.h>
#include <math.h>
int main () {
	int customerID;
	char customerName;
	float UnitsConsumed;
	// prompt the user to enter the customerID
	printf("Enter the customerID: ");
	scanf("%d", &customerID);
	// prompt the user to  enter customerName
	printf("Enter the customerName: ");
	scanf("%s", &customerName);
	// prompt the user to  enter UnitsConsumed
	printf("Enter the UnitsConsumed: ");
	scanf("%f", &UnitsConsumed);
	float charges_per_unit;
	if(UnitsConsumed<200){
		charges_per_unit=1.20;}else if
(UnitsConsumed <=400){
		charges_per_unit=1.50;} else if (UnitsConsumed<600){
		charges_per_unit=1.80;}else{
			(charges_per_unit=2.00);}
 printf("charges_per_unit is:%f \n", charges_per_unit);
 float Total_bill, surcharge,Total_amount_to_pay;
	//calculate total_bill
	Total_bill = UnitsConsumed*charges_per_unit;
	if (Total_bill> 400){
		surcharge=Total_bill*0.15;}else{
			surcharge=0;}
	//calculate Total_amount_to_pay
	Total_amount_to_pay=Total_bill+surcharge;
	printf("Total_bill is:%f\n", Total_bill );
	if (Total_bill<100){ Total_bill= 100;}
	printf("customerID is:%d", customerID);
	printf("\n customerName is: %s\n", &customerName);
	printf("UnitsConsumed is: %f \n", UnitsConsumed);
	printf("charges_per_unit is: %f\n", charges_per_unit);
	printf("Total_amount_to_pay is: %f\n", Total_amount_to_pay);
	return 0;
}