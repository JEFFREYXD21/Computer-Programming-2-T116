#include <stdio.h>
float computeChargePerUnit(int unitConsumed)
{
    float chargePerUnit = 0.00;
    if (unitConsumed > 0 && unitConsumed < 250)
    {
        chargePerUnit = 1.50;
    }
    else if (unitConsumed >= 250 && unitConsumed < 450)
    {
        chargePerUnit = 1.60;
    }
    else if (unitConsumed >= 450 && unitConsumed < 600)
    {
        chargePerUnit = 1.85;
    }
    else if (unitConsumed >= 600)
    {
        chargePerUnit = 2.00;
    }
    return chargePerUnit;
}

float computeCharge(int unitConsumed, float chargePerUnit)
{
    float charge;
    charge = unitConsumed * chargePerUnit;
    return charge;
}
float computeSurcharge(float charge)
{
    float surcharge = 0.00;
    if (charge > 400)
    {
        surcharge = charge * 0.1;
    }
    return surcharge;
}
float computeTotalBill(float charge, float surCharge)
{
    float total;
    total = charge + surCharge;
    return total;
}
int main()
{
    int customerId, unitConsumed;
    float chargePerUnit, charge, surCharge, total;
    printf("Input Customer ID: ");
    scanf("%d", &customerId);
    printf("Input the unit consumed by the customer: ");
    scanf("%d", &unitConsumed);
    chargePerUnit = computeChargePerUnit(unitConsumed);
    charge = computeCharge(unitConsumed, chargePerUnit);
    surCharge = computeSurcharge(charge);
    total = computeTotalBill(charge, surCharge);
    if (total > 100)
    {
        printf("[Electricity Bill]\n");
        printf("Customer ID#                    :%d\n", customerId);
        printf("unit Consumed                   :%d\n", unitConsumed);
        printf("unit Charges @P. %.2f per unit  :P %.2f\n", chargePerUnit, charge);
        printf("Surcharge Amount                :P %.2f\n", surCharge);
        printf("Total Customer Bill             :P %.2f", total);
        return 0;
    }
    else
    {
        printf("Total bill must be P 100 atleast.");
        return -1;
    }
}
