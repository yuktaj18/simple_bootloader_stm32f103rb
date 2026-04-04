#include "nucleof103_timer.h"
#define PRESCALER (1)
#define ARR_VALUE (8)
//TIMER 2
//PA0
void timer_setup(void)
{
  //Setup TIM2 CHNL 1 for pwm mode , edge aligned, in up diretion
  rcc_periph_clock_enable(RCC_TIM2);
  timer_set_mode(TIM2,TIM_CR1_CKD_CK_INT,TIM_CR1_CMS_EDGE,TIM_CR1_DIR_UP);
  //Setup PWM mode
  timer_set_oc_mode(TIM2,TIM_OC1,TIM_OCM_PWM1);
  //Setup PWM output
  timer_enable_counter(TIM2);
  timer_enable_oc_output(TIM2,TIM_OC1);
  //Setup prescaler value, auto reload value
  timer_set_prescaler(TIM2,PRESCALER);
  timer_set_period(TIM2,ARR_VALUE);


}
void timer_pwm_set_duty_cycle(float duty_cycle)
{
  //As we want duty cycle eg. 50%
  //duty_cycle = (ccr/arr) *100
  //ccr = (arr*duty_cycle)/100

  const float raw_value = (float)(ARR_VALUE*duty_cycle)/100.0f;
  timer_set_oc_value(TIM2,TIM_OC1,(uint32_t)raw_value);
}