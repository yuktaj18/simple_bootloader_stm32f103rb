//Flash is of 128kb for stm32 103 rb , we are going to make bootloader of 16kb
//0x0800 4000 - 0x0801 FFFF : Main application
//0x0800 0000 - 0x0800 4000 : Custom Bootloader

#include <stdint.h>
#include <stdbool.h>
#include "libopencm3/stm32/memorymap.h"

#define BOOTLOADER_SIZE 					(0x4000)
#define MAIN_APP_START_ADDRESS 		(FLASH_BASE + BOOTLOADER_SIZE)

static void jump_to_main(void)
{

	typedef void(*void_fn)(void);


	uint32_t* reset_vector_entry = (uint32_t*)(MAIN_APP_START_ADDRESS + 4U);
	uint32_t* reset_vector  = (uint32_t*)(*reset_vector_entry);

	void_fn jump_fn = (void_fn) reset_vector;

	jump_fn();



}



int main(void)
{
	jump_to_main();
	return 0;
}
