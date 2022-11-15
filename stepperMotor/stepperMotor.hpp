/*!
 * \name        stepperMotor
 * \author      Infineon Technologies AG
 * \copyright   2022 Infineon Technologies AG
 * \brief       This example shows how to control a stepper motor with the DC Motor Control HAT with TLE94112ES.
 * \details
 * The multi half bridge TLE94112ES is able to drive voltage controlled bipolar stepper motors.
 * This example shows how to control a stepper motor with the DC Motor Control HAT with TLE94112ES.
 */


#ifndef STEPPERMOTOR_HPP_
#define STEPPERMOTOR_HPP_

extern "C"
{
#include "cy_pdl.h"
#include "cyhal.h"
#include "cybsp.h"
#include "cy_retarget_io.h"
}

#include <tle94112-mtb.hpp>

void stepperMotor();

#endif /* STEPPERMOTOR_HPP_ */
