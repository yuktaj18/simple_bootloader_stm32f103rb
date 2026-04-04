#include "libopencm3/stm32/timer.h"
#include "libopencm3/stm32/rcc.h"

void timer_setup(void);
void timer_pwm_set_duty_cycle(float duty_cycle);