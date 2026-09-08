#pragma once

// OLED runs on I2C, using the XIAO's D4/D5 (GP6/GP7) Grove I2C pins,
// which sit on the RP2040's native I2C1 hardware peripheral.
// QMK numbers ChibiOS I2C drivers offset by one: RP2040 I2C0 -> I2CD1, I2C1 -> I2CD2.
#define I2C_DRIVER I2CD2
#define I2C1_SDA_PIN GP6
#define I2C1_SCL_PIN GP7
