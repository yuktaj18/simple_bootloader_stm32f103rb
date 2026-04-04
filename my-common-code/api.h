#include "libopencm3/stm32/rcc.h"
#include "libopencm3/cm3/systick.h"
#include "libopencm3/cm3/vector.h"
#include "libopencm3/cm3/common.h"
#include "libopencm3/cm3/vector.h"

#define AHB_FREQ  			(8000000)
#define SYSTICK_FREQ 		(1000)


void systick_setup(void);
uint64_t get_ticks(void);