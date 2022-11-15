/*!
 * \name        basicTest
 * \author      Infineon Technologies AG
 * \copyright   2022 Infineon Technologies AG
 * \brief       This example shows how to switch two half bridge outputs with minimal code.
 * \details
 * It will switch on two outputs (one to Vsup and one to GND), wait 3 seconds
 * and switch off both outputs (both to floating state).
 */

#ifndef BASICTEST_HPP_
#define BASICTEST_HPP_

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

void basicTest(uint8_t bridges);

#endif /* BASICTEST_HPP_ */
