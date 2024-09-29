#include <stdio.h>

typedef struct {
    float total_rain;
    float highest_temperature;
    float lowest_temperature;
} Weather;

void struct_input(Weather *A);

int main(){
    Weather Arr[12];
    float total_rain = 0, highest_temp = -40, lowest_temp = 50;
    
    printf("Input data for each month of the year:\n");
    for(int i = 0; i < 12; i++){
        printf("----- * %d * -----\n", i+1);
        struct_input(&Arr[i]);
    }

    for (int i = 0; i < 12; i++)
    {
        total_rain += Arr[i].total_rain;
        if (highest_temp < Arr[i].highest_temperature)
            highest_temp = Arr[i].highest_temperature;
        if (lowest_temp > Arr[i].lowest_temperature)
            lowest_temp = Arr[i].lowest_temperature;
    }

    printf("Total rain: %f.\n", total_rain);
    printf("Average rain: %f.\n", total_rain / 12);
    printf("The highest temperature: %f.\n", highest_temp);
    printf("The lowest temperature: %f.\n", lowest_temp);

    return 0;
}

void struct_input(Weather *A){
    // input total rain
    printf("total_rain = ");
    scanf("%f", &A->total_rain);
    while(A->total_rain < 0){
        printf("Error!!! Total rain must be greater or equal to zero.\n");
        printf("Reinput, total_rain = ");
        scanf("%f", &A->total_rain);
    }
    // input highest temperature
    printf("highest_temperature = ");
    scanf("%f", &A->highest_temperature);
    while(A->highest_temperature < -40 || A->highest_temperature > 50){
        printf("Error!!! Highest temperature must be in range [-40,50].\n");
        printf("Reinput, highest_temperature = ");
        scanf("%f", &A->highest_temperature);
    }
    // input lowest temperature
    printf("lowest_temperature = ");
    scanf("%f", &A->lowest_temperature);
    while(A->lowest_temperature < -40 || A->lowest_temperature > A->highest_temperature){
        printf("Error!!! Lowest temperature must be in range [-40,50] and lower that the highest temperature.\n");
        printf("Reinput, lowest_temperature = ");
        scanf("%f", &A->lowest_temperature);
    }
}