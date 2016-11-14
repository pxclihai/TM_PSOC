/*******************************************************************************
* File Name: Mux_7.c  
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
#include "Mux_7.h"


/*******************************************************************************
* Function Name: Mux_7_Write
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
void Mux_7_Write(uint8 value) 
{
    uint8 staticBits = (Mux_7_DR & (uint8)(~Mux_7_MASK));
    Mux_7_DR = staticBits | ((uint8)(value << Mux_7_SHIFT) & Mux_7_MASK);
}


/*******************************************************************************
* Function Name: Mux_7_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  Mux_7_DM_STRONG     Strong Drive 
*  Mux_7_DM_OD_HI      Open Drain, Drives High 
*  Mux_7_DM_OD_LO      Open Drain, Drives Low 
*  Mux_7_DM_RES_UP     Resistive Pull Up 
*  Mux_7_DM_RES_DWN    Resistive Pull Down 
*  Mux_7_DM_RES_UPDWN  Resistive Pull Up/Down 
*  Mux_7_DM_DIG_HIZ    High Impedance Digital 
*  Mux_7_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void Mux_7_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(Mux_7_0, mode);
}


/*******************************************************************************
* Function Name: Mux_7_Read
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
*  Macro Mux_7_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Mux_7_Read(void) 
{
    return (Mux_7_PS & Mux_7_MASK) >> Mux_7_SHIFT;
}


/*******************************************************************************
* Function Name: Mux_7_ReadDataReg
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
uint8 Mux_7_ReadDataReg(void) 
{
    return (Mux_7_DR & Mux_7_MASK) >> Mux_7_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Mux_7_INTSTAT) 

    /*******************************************************************************
    * Function Name: Mux_7_ClearInterrupt
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
    uint8 Mux_7_ClearInterrupt(void) 
    {
        return (Mux_7_INTSTAT & Mux_7_MASK) >> Mux_7_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
