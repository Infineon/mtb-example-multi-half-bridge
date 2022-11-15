/*!
 * \name        multipleControllers
 * \author      Infineon Technologies AG
 * \copyright   2022 Infineon Technologies AG
 * \brief       This example shows how to use multiple TLE94112 controllers simultaneously.
 * \details
 * For this example it is assumed, that two TLE94112 controllers are connected to one microcontroller.
 * The resistor R7 on the board has to be open and R8 closed with 0Ohm for shield 1 and
 * R7 closed with 0Ohm, R8 open for shield 2. Also connect the chip select pin for the second board as set in
 * tle94112-platf-mtb.hpp.
 * On both controllers a load is connected between half bridge 1 and 5.
 * This example shows, how to control both motor controllers from one Raspberry Pi.
 */

#ifndef MULTIPLECONTROLLERS_HPP_
#define MULTIPLECONTROLLERS_HPP_

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

void multipleControllers(uint8_t bridges);

#endif /* MULTIPLECONTROLLERS_HPP_ */
