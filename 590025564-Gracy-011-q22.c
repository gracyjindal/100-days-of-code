#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss, profitPercent, lossPercent;

    // Input cost price and selling price
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);
    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    // Check for profit or loss
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        profitPercent = (profit / costPrice) * 100;
        printf("\nProfit: ₹%.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", profitPercent);
    } 
    else if (costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        lossPercent = (loss / costPrice) * 100;
        printf("\nLoss: ₹%.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", lossPercent);
    } 
    else {
        printf("\nNo Profit, No Loss.\n");
    }

    return 0;
}
