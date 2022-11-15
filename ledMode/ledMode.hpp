/*!
 * \name        ledMode
 * \author      Infineon Technologies AG
 * \copyright   2021 Infineon Technologies AG
 * \brief       This example shows how to use LED mode on output 1 of the TLE94112ES.
 * \details
 * Outputs OUT1 and OUT2 are designed to optionally drive low current loads such as LEDs. The high-side
 * channels, HS1 and HS2 are equipped with a lower open load threshold detection current and shorter filter
 * time, specifically for low current loads such as LEDs.
 * Setting HS1 or HS2 in LED mode increases the RDS_ON and decreases the open load detection threshold.
 * This example enables LED mode on output 1 of the TLE94112ES and subsequently reads out the current status
 * of the open load error register. If an LED is connected and LED mode is enabled, the error register should
 * be empty, else an open load error will occur.
 */

#ifndef LEDMODE_HPP_
#define LEDMODE_HPP_

extern "C"
{
#include "cy_pdl.h"
#include "cyhal.h"
#include "cybsp.h"
#include "cy_retarget_io.h"
}

/* Infineon library for multi-half-bridge and motor control */
#include <tle94112-mtb.hpp>
#include <tle94112-motor.hpp>

void ledMode();

#endif /* LEDMODE_HPP_ */
