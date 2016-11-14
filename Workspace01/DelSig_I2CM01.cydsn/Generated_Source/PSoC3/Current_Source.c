/*******************************************************************************
* File Name: Current_Source.c  
* Version 2.10
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "Current_Source.h"


/*******************************************************************************
* Function Name: Current_Source_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None 
*  
*******************************************************************************/
void Current_Source_Write(uint8 value) 
{
    uint8 staticBits = (Current_Source_DR & (uint8)(~Current_Source_MASK));
    Current_Source_DR = staticBits | ((uint8)(value << Current_Source_SHIFT) & Current_Source_MASK);
}


/*******************************************************************************
* Function Name: Current_Source_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  Current_Source_DM_STRONG     Strong Drive 
*  Current_Source_DM_OD_HI      Open Drain, Drives High 
*  Current_Source_DM_OD_LO      Open Drain, Drives Low 
*  Current_Source_DM_RES_UP     Resistive Pull Up 
*  Current_Source_DM_RES_DWN    Resistive Pull Down 
*  Current_Source_DM_RES_UPDWN  Resistive Pull Up/Down 
*  Current_Source_DM_DIG_HIZ    High Impedance Digital 
*  Current_Source_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void Current_Source_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(Current_Source_0, mode);
}


/*******************************************************************************
* Function Name: Current_Source_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro Current_Source_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Current_Source_Read(void) 
{
    return (Current_Source_PS & Current_Source_MASK) >> Current_Source_SHIFT;
}


/*******************************************************************************
* Function Name: Current_Source_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 Current_Source_ReadDataReg(void) 
{
    return (Current_Source_DR & Current_Source_MASK) >> Current_Source_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Current_Source_INTSTAT) 

    /*******************************************************************************
    * Function Name: Current_Source_ClearInterrupt
    ********************************************************************************
    *
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 Current_Source_ClearInterrupt(void) 
    {
        return (Current_Source_INTSTAT & Current_Source_MASK) >> Current_Source_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
