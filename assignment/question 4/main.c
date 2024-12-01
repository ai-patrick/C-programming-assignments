#include <stdio.h>

int main() {
    double grossPay = 0.0, taxRate = 0.0, taxPayable = 0.0, netPay = 0.0;
    int dependents = 0;

    // Input gross pay
    printf("Enter the gross pay: ");
    scanf("%lf", &grossPay);

    // Input number of dependents
    printf("Enter the number of dependents: ");
    scanf("%d", &dependents);

    // Determine tax rate based on gross pay and dependents
    if (grossPay <= 10000) {
        taxRate = 0.0;
    } else if (grossPay > 10000 && grossPay <= 20000) {
        taxRate = (dependents < 3) ? 0.15 : 0.10;
    } else {
        taxRate = (dependents < 3) ? 0.35 : 0.25;
    }

    // Calculate tax payable and net pay
    taxPayable = grossPay * taxRate;
    netPay = grossPay - taxPayable;

    // Output results with formatted values
    printf("\n--- Employee Pay Summary ---\n");
    printf("Gross Pay: KSh %.2f\n", grossPay);
    printf("Tax Rate: %.0f%%\n", taxRate * 100); // Display as a percentage
    printf("Tax Payable: KSh %.2f\n", taxPayable);
    printf("Net Pay: KSh %.2f\n", netPay);
    return 0;
}
