/* Includes ------------------------------------------------------------------*/
#include "bsp_configuration.h"
#include "lld_gpio.h"

int main(void)
{
	//uint16_t capture = 0;
	soc_core_configuration();
	soc_peripherals_configuration();
	//clock_select_clock_to_output(SYSCLOCK);

    //tim_start(TIM3);
    //tim_start(TIM2);
    while(1)
    {

    	t_error_handling error = usart_send(USART1, 0x55);
    	//gpio_toggle(GPIOA, 8);
        //tim_wait(TIM3, 1);

    	//capture = tim_wait_input_capture(TIM2, 2);

        //gpio_toggle(GPIOA, 6);
        
        //if(gpio_read_GPIO(GPIOB, 9)){
        //gpio_toggle(GPIOC, 13);
        //}
        //else{
            //gpio_clear_GPIO(GPIOC,13);
        //}
    }
}

