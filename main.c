#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);
        int dice_toss[100];
    int dice_1 = 0;
    int dice_2 = 0;
    int dice_3 = 0;
    int dice_4 = 0;
    int dice_5 = 0;
    int dice_6 = 0;
    int sum = 0;
    for(int i = 0; i < 100; i++){
        dice_toss[i] = (rand() % 6) +1;
        sum += dice_toss[i];
        switch (dice_toss[i]){
            case 1:
                dice_1 += 1;
            break;
            case 2:
                dice_2 += 1;
            break;
            case 3:
                 dice_3 += 1;
            break;
            case 4:
                 dice_4 += 1;
            break;
            case 5:
                 dice_5 += 1;
            break;
            case 6:
                 dice_6 += 1;
            break;
            default:
            break;
        }
    }
    printf("\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", dice_1, dice_2, dice_3, dice_4, dice_5, dice_6, sum);
    float average_value = sum / 100.0;
    printf("%.1f", average_value);

   
    // Your code goes here

    return 0;
}
