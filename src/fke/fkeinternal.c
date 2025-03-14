/*++
	Copyright (c) Microsoft Corporation. All Rights Reserved.
	Sample code. Dealpoint ID #843729.

	Module Name:

		fkeinternal.c

	Abstract:

		Contains Fake initialization code

	Environment:

		Kernel mode

	Revision History:

--*/

#include <Cross Platform Shim\compat.h>
#include <spb.h>
#include <report.h>
#include <fke\fkeinternal.h>
#include <fkeinternal.tmh>

NTSTATUS
FkeServiceInterrupts(
	IN FKE_CONTROLLER_CONTEXT* ControllerContext,
	IN SPB_CONTEXT* SpbContext,
	IN PREPORT_CONTEXT ReportContext
)
{
	UNREFERENCED_PARAMETER(ControllerContext);
	UNREFERENCED_PARAMETER(SpbContext);
	UNREFERENCED_PARAMETER(ReportContext);

	// TODO: Implement this function
	// Do not forget to make use of the lock
	// (please check other projects for knowing what to do exactly here)

	Trace(
		TRACE_LEVEL_ERROR,
		TRACE_REPORTING,
		"FkeServiceInterrupts - Entry");

	Trace(
		TRACE_LEVEL_ERROR,
		TRACE_REPORTING,
		"FkeServiceInterrupts - Exit");

	return STATUS_NOT_IMPLEMENTED;
}

NTSTATUS
FkeChangePage(
	IN FKE_CONTROLLER_CONTEXT* ControllerContext,
	IN SPB_CONTEXT* SpbContext,
	IN int DesiredPage
)
/*++

  Routine Description:

	This utility function changes the current register address page.

  Arguments:

	ControllerContext - A pointer to the current touch controller context
	SpbContext - A pointer to the current i2c context
	DesiredPage - The page the caller expects to be mapped in

  Return Value:

	NTSTATUS indicating success or failure

--*/
{
	UNREFERENCED_PARAMETER(ControllerContext);
	UNREFERENCED_PARAMETER(SpbContext);
	UNREFERENCED_PARAMETER(DesiredPage);

	// Used by test framework, you can ignore if you dont need debug tooling!

	Trace(
		TRACE_LEVEL_ERROR,
		TRACE_REPORTING,
		"FkeChangePage - Entry");

	Trace(
		TRACE_LEVEL_ERROR,
		TRACE_REPORTING,
		"FkeChangePage - Exit");

	return STATUS_NOT_IMPLEMENTED;
}

NTSTATUS
FkeConfigureFunctions(
	IN FKE_CONTROLLER_CONTEXT* ControllerContext,
	IN SPB_CONTEXT* SpbContext
)
/*++

  Routine Description:

	FKE devices such as this Fake touch controller are organized
	as collections of logical functions. Discovered functions must be
	configured, which is done in this function (things like sleep
	timeouts, interrupt enables, report rates, etc.)

  Arguments:

	ControllerContext - A pointer to the current touch controller
	context

	SpbContext - A pointer to the current i2c context

  Return Value:

	NTSTATUS indicating success or failure

--*/
{
	UNREFERENCED_PARAMETER(ControllerContext);
	UNREFERENCED_PARAMETER(SpbContext);

	// TODO: Implement this function
	// This is called _after_ FkeBuildFunctionsTable, if you need a two step
	// init, implement this. (eg, first implements data for the controller in structs)
	// This function, writes data to the controller or sets events up.

	Trace(
		TRACE_LEVEL_ERROR,
		TRACE_REPORTING,
		"FkeConfigureFunctions - Entry");

	Trace(
		TRACE_LEVEL_ERROR,
		TRACE_REPORTING,
		"FkeConfigureFunctions - Exit");

	return STATUS_NOT_IMPLEMENTED;
}

NTSTATUS
FkeBuildFunctionsTable(
	IN FKE_CONTROLLER_CONTEXT* ControllerContext,
	IN SPB_CONTEXT* SpbContext
)
/*++

  Routine Description:

	FKE devices such as this Fake touch controller are organized
	as collections of logical functions. When initially communicating
	with the chip, a driver must build a table of available functions,
	as is done in this routine.

  Arguments:

	ControllerContext - A pointer to the current touch controller context

	SpbContext - A pointer to the current i2c context

  Return Value:

	NTSTATUS indicating success or failure

--*/
{
	UNREFERENCED_PARAMETER(SpbContext);

	// This is where you are expected to configure your controller for being ready
	// minus, enabling interrupts.

	Trace(
		TRACE_LEVEL_ERROR,
		TRACE_REPORTING,
		"FkeBuildFunctionsTable - Entry");

	ControllerContext->MaxFingers = 8;

	Trace(
		TRACE_LEVEL_ERROR,
		TRACE_REPORTING,
		"FkeBuildFunctionsTable - Exit");

	return STATUS_SUCCESS;
}

NTSTATUS
FkeConfigureInterruptEnable(
	IN FKE_CONTROLLER_CONTEXT* ControllerContext,
	IN SPB_CONTEXT* SpbContext
)
{
	UNREFERENCED_PARAMETER(ControllerContext);
	UNREFERENCED_PARAMETER(SpbContext);

	// TODO: Implement this function
	// IRQs should be enabled after exiting this function
	// Nothing else should be performed
	// This is not the place to setup your controller, do this above instead.

	Trace(
		TRACE_LEVEL_ERROR,
		TRACE_REPORTING,
		"FkeConfigureInterruptEnable - Entry");

	Trace(
		TRACE_LEVEL_ERROR,
		TRACE_REPORTING,
		"FkeConfigureInterruptEnable - Exit");

	return STATUS_NOT_IMPLEMENTED;
}

NTSTATUS
FkeGetFirmwareVersion(
	IN FKE_CONTROLLER_CONTEXT* ControllerContext,
	IN SPB_CONTEXT* SpbContext
)
/*++

  Routine Description:

	This function queries the firmware version of the current chip for
	debugging purposes.

  Arguments:

	ControllerContext - A pointer to the current touch controller context
	SpbContext - A pointer to the current i2c context

  Return Value:

	NTSTATUS indicating success or failure

--*/
{
	UNREFERENCED_PARAMETER(ControllerContext);
	UNREFERENCED_PARAMETER(SpbContext);

	// You get a chance to print controller fw version here if you want to.

	Trace(
		TRACE_LEVEL_ERROR,
		TRACE_REPORTING,
		"FkeGetFirmwareVersion - Entry");

	Trace(
		TRACE_LEVEL_ERROR,
		TRACE_REPORTING,
		"FkeGetFirmwareVersion - Exit");

	return STATUS_SUCCESS;
}

NTSTATUS
FkeCheckInterrupts(
	IN FKE_CONTROLLER_CONTEXT* ControllerContext,
	IN SPB_CONTEXT* SpbContext,
	IN ULONG* InterruptStatus
)
/*++

  Routine Description:

	This function handles controller interrupts. It currently only
	supports valid touch interrupts. Any other interrupt sources (such as
	device losing configuration or being reset) are unhandled, but noted
	in the controller context.

  Arguments:

	ControllerContext - A pointer to the current touch controller
	context

	SpbContext - A pointer to the current i2c context

  Return Value:

	NTSTATUS indicating success or failure

--*/
{
	UNREFERENCED_PARAMETER(ControllerContext);
	UNREFERENCED_PARAMETER(SpbContext);
	UNREFERENCED_PARAMETER(InterruptStatus);

	// TODO: Implement this function
	// This is called during driver init to process events that exist 
	// before fully being ready and starting to service for real irqs
	// Unlike the irq service function, do not report objects
	// and dont make use of the lock!

	Trace(
		TRACE_LEVEL_ERROR,
		TRACE_REPORTING,
		"FkeCheckInterrupts - Entry");

	Trace(
		TRACE_LEVEL_ERROR,
		TRACE_REPORTING,
		"FkeCheckInterrupts - Exit");

	return STATUS_NOT_IMPLEMENTED;
}

NTSTATUS
FkeChangeChargerConnectedState(
	IN FKE_CONTROLLER_CONTEXT* ControllerContext,
	IN SPB_CONTEXT* SpbContext,
	IN UCHAR ChargerConnectedState
)
{
	UNREFERENCED_PARAMETER(ControllerContext);
	UNREFERENCED_PARAMETER(SpbContext);
	UNREFERENCED_PARAMETER(ChargerConnectedState);

	// If your controller supports it
	// this is where you set the register for notifying that the charger connected
	// to the digitizer IC

	Trace(
		TRACE_LEVEL_ERROR,
		TRACE_REPORTING,
		"FkeChangeChargerConnectedState - Entry");

	Trace(
		TRACE_LEVEL_ERROR,
		TRACE_REPORTING,
		"FkeChangeChargerConnectedState - Exit");

	return STATUS_SUCCESS;
}

NTSTATUS
FkeChangeSleepState(
	IN FKE_CONTROLLER_CONTEXT* ControllerContext,
	IN SPB_CONTEXT* SpbContext,
	IN UCHAR SleepState
)
/*++

Routine Description:

   Changes the SleepMode bits on the controller as specified

Arguments:

   ControllerContext - Touch controller context

   SpbContext - A pointer to the current i2c context

   SleepState - Either FKE_F11_DEVICE_CONTROL_SLEEP_MODE_OPERATING
				or FKE_F11_DEVICE_CONTROL_SLEEP_MODE_SLEEPING

Return Value:

   NTSTATUS indicating success or failure

--*/
{
	UNREFERENCED_PARAMETER(ControllerContext);
	UNREFERENCED_PARAMETER(SpbContext);
	UNREFERENCED_PARAMETER(SleepState);

	// If your controller supports it
	// this is where you set the power mode in the controller registers

	Trace(
		TRACE_LEVEL_ERROR,
		TRACE_REPORTING,
		"FkeChangeSleepState - Entry");

	Trace(
		TRACE_LEVEL_ERROR,
		TRACE_REPORTING,
		"FkeChangeSleepState - Exit");

	return STATUS_SUCCESS;
}

NTSTATUS
FkeSetReportingFlags(
	IN FKE_CONTROLLER_CONTEXT* ControllerContext,
	IN SPB_CONTEXT* SpbContext,
	IN UCHAR NewMode,
	OUT UCHAR* OldMode
)
/*++

	Routine Description:

		Changes the F12 Reporting Mode on the controller as specified

	Arguments:

		ControllerContext - Touch controller context

		SpbContext - A pointer to the current i2c context

		NewMode - Either REPORTING_CONTINUOUS_MODE
				  or REPORTING_REDUCED_MODE

		OldMode - Old value of reporting mode

	Return Value:

		NTSTATUS indicating success or failure

--*/
{
	UNREFERENCED_PARAMETER(ControllerContext);
	UNREFERENCED_PARAMETER(SpbContext);
	UNREFERENCED_PARAMETER(NewMode);

	Trace(
		TRACE_LEVEL_ERROR,
		TRACE_REPORTING,
		"FkeSetReportingFlags - Entry");

	if (OldMode != NULL)
	{
		*OldMode = REPORTING_CONTINUOUS_MODE;
	}

	// If the controller supports it, this is where you change report mode

	Trace(
		TRACE_LEVEL_ERROR,
		TRACE_REPORTING,
		"FkeSetReportingFlags - Exit");

	return STATUS_SUCCESS;
}