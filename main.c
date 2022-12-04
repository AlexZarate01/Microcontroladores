
#include "mcc_generated_files/system/system.h"


int main(void) {
    SYSTEM_Initialize();
    ADPCH = POT; 
    Timer1_Start(); 

    while (1) {
        
        while (ADCON0bits.ADGO); 
        printf("ADC Result %d \r\n", ADCC_GetFilterValue());
        while (!ADCON0bits.ADGO); 
    }
}

