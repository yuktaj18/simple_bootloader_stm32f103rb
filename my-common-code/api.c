
#include "api.h"

volatile uint64_t ticks = 0;

void systick_setup(void)
{
	systick_set_frequency (SYSTICK_FREQ,AHB_FREQ);
	systick_counter_enable();
	systick_interrupt_enable();
}


void sys_tick_handler(void){
	ticks++;
}

uint64_t get_ticks(void)
{
	return ticks;
}


