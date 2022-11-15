/*!
 * \name        main.c
 * \author      Infineon Technologies AG
 * \copyright   2022 Infineon Technologies AG
 * \brief       his is the source code for Multi-Half Bridge Application
 *              for ModusToolbox.
 * \details		See README.md
 */

extern "C"
{
#include "cy_pdl.h"
#include "cyhal.h"
#include "cybsp.h"
#include "cy_retarget_io.h"
}

#include "basicTest/basicTest.hpp"
#include "advancedTest/advancedTest.hpp"
#include "errorDiagnosis/errorDiagnosis.hpp"
#include "halfBridge/halfBridge.hpp"
#include "ledMode/ledMode.hpp"
#include "stepperMotor/stepperMotor.hpp"
#include "multipleControllers/multipleControllers.hpp"
#include "multipleMotors/multipleMotors.hpp"


// Select the number of connected half-bridges to be used
// If only two half-bridges are used (one high, one low) than a motor with only 0.9A can be used,
// otherwise the controller will signal an over-current error.
// If you motor or application needs more, than multiple half-bridges can be connected.
// If you choose four half-bridges, than 1.8A can be reached.
// The following settings are possible:
// - 2U two half-bridges with 0.9A are used, which is sufficient for small motors. This is the default setting
// - 4U with 1.8A, which is sufficient for bigger motors like most computer fans
#define TWO_BRIDGES                 2U
#define FOUR_BRIDGES                4U
#define MULTI_HALF_BRIDGES          TWO_BRIDGES

//!< This is a list of all examples which are covered with here.
enum examples_t
{
	BASICTEST            = 1,      //!< \brief basicTest just starts and stops a motor */
	ADVANCEDTEST,                  //!< \brief advanceTest runs a motor up and down */
	ERRORDIAGNOSIS,                //!< \brief errorDiagnosis shows the use of the error registers */
	HALFBRIDGE,                    //!< \brief halfBridge shows the use of only the controller library
	LEDMODE,                       //!< \brief ledMode shows how to lower the sensitivity for open load detection
	STEPPERMOTOR,                  //!< \brief stepperMotor shows how to drive voltage controlled bipolar stepper motors
	MULTIPLECONTROLLERS,           //!< \brief multipleControllers shows how to implement stacked shields */
	MULTIPLEMOTORS                 //!< \brief multipleMotors shows how to use more than one motor */
};

//!> Select the example which is compiled. There are a number of different examples defined which can be switched here.
#define EXAMPLE                     BASICTEST

int main(void)
{
	cy_rslt_t result;

	/* Initialize the device and board peripherals */
	result = cybsp_init();
	if (result != CY_RSLT_SUCCESS)
	{
		__disable_irq();
		CY_ASSERT(0);
	}

	/* Initialize console log output */
	result = cy_retarget_io_init( CYBSP_DEBUG_UART_TX, CYBSP_DEBUG_UART_RX,
								  CY_RETARGET_IO_BAUDRATE);
	if (result != CY_RSLT_SUCCESS)
	{
		__disable_irq();
		CY_ASSERT(0);
	}

	/* enable interrupts, this is important for starting SPI */
	__enable_irq();

	/* which example should run */
	switch (EXAMPLE) {
		case BASICTEST:
			printf("\n[multi-half-bridge] : compiled example -> basicTest\n");
			basicTest(MULTI_HALF_BRIDGES);
			break;
		case ADVANCEDTEST:
			printf("\n[multi-half-bridge] : compiled example -> advancedTest\n");
			advancedTest(MULTI_HALF_BRIDGES);
			break;
		case ERRORDIAGNOSIS:
			printf("\n[multi-half-bridge] : compiled example -> errorDiagnosis\n");
			errorDiagnosis(MULTI_HALF_BRIDGES);
			break;
		case HALFBRIDGE:
			printf("\n[multi-half-bridge] : compiled example -> halfBridge\n");
			halfBridge();
			break;
		case LEDMODE:
			printf("\n[multi-half-bridge] : compiled example -> ledMode\n");
			ledMode();
			break;
		case STEPPERMOTOR:
			printf("\n[multi-half-bridge] : compiled example -> stepperMotor\n");
			stepperMotor();
			break;
		case MULTIPLEMOTORS:
			printf("\n[multi-half-bridge] : compiled example -> multipleMotors\n");
			multipleMotors(MULTI_HALF_BRIDGES);
			break;
		case MULTIPLECONTROLLERS:
			printf("\n[multi-half-bridge] : compiled example -> multipleControllers\n");
			multipleControllers(MULTI_HALF_BRIDGES);
			break;
	}

}
