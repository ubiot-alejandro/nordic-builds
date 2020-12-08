#include <zephyr.h>
#include <sys/printk.h>
#include <drivers/gpio.h>

static const struct device *gpio_dev;
static bool nmos_state = false;

void toggle_nmos() {
    nmos_state = !nmos_state;

    if (nmos_state) {
        // turn on 
        printk("Setting GPIO pin to 1, %d\n", gpio_pin_set(gpio_dev, 16, 1));
    }
    else {
        // turn off
        printk("Setting GPIO pin to 0, %d\n", gpio_pin_set(gpio_dev, 16, 0));
    }
}

void main(void)
{
    gpio_dev = device_get_binding("GPIO_0");
    gpio_pin_configure(gpio_dev, 16, GPIO_OUTPUT);

    while (true) {
        toggle_nmos();
        k_sleep(K_MSEC(3000));
    }
}   

// #include <zephyr.h>
// #include <misc/printk.h>
// #include <gpio.h>

// static struct device *gpio_dev;
// static bool nmos_state = false;

// void toggle_nmos() {
//     nmos_state = !nmos_state;

//     if (nmos_state) {
//         // turn on 
//         printk("Setting GPIO pin to 1, %d\n", gpio_pin_write(gpio_dev, 13, 1));
//     }
//     else {
//         // turn off
//         printk("Setting GPIO pin to 0, %d\n", gpio_pin_write(gpio_dev, 13, 0));
//     }
// }

// void main(void)
// {
//     gpio_dev = device_get_binding("GPIO_0");
//     gpio_pin_configure(gpio_dev, 16, GPIO_DIR_OUT);

//     while (true) {
//         toggle_nmos();
//         k_sleep(2000);
//     }
// }