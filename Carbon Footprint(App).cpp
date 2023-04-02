//*An app in C that helps people reduce their carbon footprint.*//

//Made By Biswadeb Mukherjee On 02nd April,2023//

#include <stdio.h>
#include <stdlib.h>

//function to calculate carbon footprint
float calculateCarbonFootprint(int numPeople){
    float carbonFootprint;
    carbonFootprint = numPeople * 4.6;
    return carbonFootprint;
}

//function to display tips on how to reduce carbon footprint
void displayTips(){
    printf("1. Choose sustainable transportation options.\n");
    printf("2. Reduce your energy consumption.\n");
    printf("3. Cut down on food waste.\n");
    printf("4. Buy energy efficient appliances.\n");
    printf("5. Recycle and compost.\n");
}

int main(){
    int numPeople;
    float carbonFootprint;

    //Accept number of people
    printf("Please enter the number of people in your household: ");
    scanf("%d", &numPeople);

    //Calculate carbon footprint
    carbonFootprint = calculateCarbonFootprint(numPeople);
    printf("Your household's carbon footprint is %f metric tons of CO2.\n", carbonFootprint);

    //Display tips
    printf("Here are some tips on how to reduce your carbon footprint:\n");
    displayTips();

    return 0;
}
