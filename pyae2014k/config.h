#pragma once
 
// OLED runs on I2C, using the XIAO's D4/D5 (GP6/GP7) Grove I2C pins,
// which sit on the RP2040's native I2C1 hardware peripheral (selected in mcuconf.h).
// This ChibiOS RP2040 port only declares one driver identifier, I2CD1,
// regardless of which physical I2C0/I2C1 peripheral is enabled.
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP6
#define I2C1_SCL_PIN GP7
