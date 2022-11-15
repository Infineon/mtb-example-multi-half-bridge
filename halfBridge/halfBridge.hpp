/*!
 * \name        halfBridge
 * \author      Infineon Technologies AG
 * \copyright   2022 Infineon Technologies AG
 * \brief       This example shows how to control the independent half bridges of the multi half bridge ICs.
 * \details
 * The example shows how to control the half bridges to switch generic loads.
 */

#ifndef HALFBRIDGE_HPP_
#define HALFBRIDGE_HPP_

extern "C"
{
#include "cy_pdl.h"
#include "cyhal.h"
#include "cybsp.h"
#include "cy_retarget_io.h"
}

/* Infineon library for multi-half-bridge */
#include <tle94112-mtb.hpp>

void halfBridge();

#endif /* HALFBRIDGE_HPP_ */
