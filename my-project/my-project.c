#include "api.h"
#include "api-asm.h"
#include"nucleof103_timer.h"

#include "libopencm3/stm32/gpio.h"
#include "libopencm3/cm3/scb.h"

#define BOOTLOADER_SIZE   (0x4000)


static void vector_setup(void)
{

SCB_VTOR = BOOTLOADER_SIZE;

}

static void gpio_setup(void)
{
	rcc_periph_clock_enable(RCC_GPIOA);
	gpio_set_mode(GPIOA,GPIO_MODE_OUTPUT_2_MHZ,GPIO_CNF_OUTPUT_ALTFN_PUSHPULL,GPIO0);

}


int main(void)
{
	vector_setup();
	gpio_setup();
	timer_setup();
	systick_setup();
	uint64_t start_time = get_ticks();
	float dutycycle = 0.0f;

	timer_pwm_set_duty_cycle(dutycycle);

	while(1)
	{
		if (get_ticks()-start_time >= 10)
		{
				dutycycle += 1.0f;
				if (dutycycle >100)
				{
					dutycycle = 0.0f;
				}
				timer_pwm_set_duty_cycle(dutycycle);
				start_time = get_ticks();
		}



	}

	return 0;
}
