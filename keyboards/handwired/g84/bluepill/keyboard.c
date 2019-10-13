#include "ch.h"
#include "hal.h"
#include "util.h"
#include "quantum.h"

void matrix_init_kb(void){
	palSetPadMode(GPIOB, 1, PAL_MODE_OUTPUT_PUSHPULL);
	palSetPadMode(GPIOB, 11, PAL_MODE_OUTPUT_PUSHPULL);
	palClearPad(GPIOB, 1);
	palSetPad(GPIOB, 11);
}
