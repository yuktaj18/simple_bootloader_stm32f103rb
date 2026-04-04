PROJECT = Blink
BUILD_DIR = bin

SHARED_DIR = ../my-common-code
CFILES = my-project.c
CFILES += api.c
AFILES += api-asm.S

# TODO - you will need to edit these two lines!
DEVICE=stm32f103rb
OPENCM3_LIB=opencm3_stm32f1
OPENCM3_DEFS=-DSTM32F1
OOCD_FILE = board/st_nucleo_f103rb
ARCH_FLAGS = -mthumb -mcpu=cortex-m3 -mfloat-abi=soft -mfix-cortex-m3-ldrd

# You shouldn't have to edit anything below here.
VPATH += $(SHARED_DIR)
INCLUDES += $(patsubst %,-I%, . $(SHARED_DIR))
OPENCM3_DIR=../libopencm3

include $(OPENCM3_DIR)/mk/genlink-config.mk
include ../rules.mk
include $(OPENCM3_DIR)/mk/genlink-rules.mk
