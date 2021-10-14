// Tower Kit documentation https://tower.hardwario.com/
// SDK API description https://sdk.hardwario.com/
// Forum https://forum.hardwario.com/

#include <application.h>

// Application initialization function which is called once after boot
void application_init(void)
{
    // lora
    twr_gpio_set_mode(TWR_GPIO_P2, TWR_GPIO_MODE_OUTPUT);
    twr_gpio_set_mode(TWR_GPIO_P3, TWR_GPIO_MODE_INPUT);

    // ftdi
    twr_gpio_set_mode(TWR_GPIO_P10, TWR_GPIO_MODE_INPUT);
    twr_gpio_set_mode(TWR_GPIO_P11, TWR_GPIO_MODE_OUTPUT);

    twr_system_pll_enable();

    for(;;)
    {
        int p3 = twr_gpio_get_input(TWR_GPIO_P3);
        int p10 = twr_gpio_get_input(TWR_GPIO_P10);

        twr_gpio_set_output(TWR_GPIO_P11, p3);
        twr_gpio_set_output(TWR_GPIO_P2, p10);
    }
}
