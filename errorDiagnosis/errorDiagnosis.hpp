/*!
 * \name        errorDiagnosis
 * \author      Infineon Technologies AG
 * \copyright   2022 Infineon Technologies AG
 * \brief       This example shows how to read and understand the status registers of the TLE94112.
 * \details
 * It will run the motor in forward direction and then read the status registers every 5 seconds.
 * It shows how to understand the status registers and which errors can appear.
 * Take this example if you want to learn how to debug the TLE94112 during operation.
 */

#ifndef ERRORDIAGNOSIS_HPP_
#define ERRORDIAGNOSIS_HPP_

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

void errorDiagnosis(uint8_t bridges);

#endif /* ERRORDIAGNOSIS_HPP_ */
