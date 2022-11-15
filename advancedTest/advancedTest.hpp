/*!
 * \name        advancedTest
 * \author      Infineon Technologies AG
 * \copyright   2022 Infineon Technologies AG
 * \brief       This example runs an advanced controller test with one attached motor on the TLE94112ES HAT for Raspberry Pi.
 * \details
 * This example is meant for one bidirectional motor, connected to
 * output 1 and 5 of the TLE94112ES HAT for Raspberry Pi.
 * It demonstrates the following library functions:
 * * Basic motor control
 *   - Run motor forward without PWM
 *   - Stop (brake) motor
 *   - Run motor backwards without PWM
 *   - Coast motor
 * * Motor control with PWM
 *   - Run motor forward with PWM (50% duty cycle)
 *   - Stop (brake) motor with PWM (50% duty cycle)
 * * Ramp up/down motor speed
 *   - Slowly ramp up duty cycle from 0% to 100%
 *   - Slowly ramp down duty cycle from 100% to 50%
 *   - Quickly ramp up duty cycle from 50% to 100%
 *   - Quickly ramp down duty cycle from 100% to 0%
 */

#ifndef ADVANCEDTEST_HPP_
#define ADVANCEDTEST_HPP_

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

#define DELAY      3000

void advancedTest(uint8_t bridges);

#endif /* ADVANCEDTEST_HPP_ */
