/*******************************************************************************
* File Name: Mux_4.c  
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
#include "Mux_4.h"


/*******************************************************************************
* Function Name: Mux_4_Write
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
void Mux_4_Write(uint8 value) 
{
    uint8 staticBits = (Mux_4_DR & (uint8)(~Mux_4_MASK));
    Mux_4_DR = staticBits | ((uint8)(value << Mux_4_SHIFT) & Mux_4_MASK);
}


/*******************************************************************************
* Function Name: Mux_4_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  Mux_4_DM_STRONG     Strong Drive 
*  Mux_4_DM_OD_HI      Open Drain, Drives High 
*  Mux_4_DM_OD_LO      Open Drain, Drives Low 
*  Mux_4_DM_RES_UP     Resistive Pull Up 
*  Mux_4_DM_RES_DWN    Resistive Pull Down 
*  Mux_4_DM_RES_UPDWN  Resistive Pull Up/Down 
*  Mux_4_DM_DIG_HIZ    High Impedance Digital 
*  Mux_4_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void Mux_4_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(Mux_4_0, mode);
}


/*******************************************************************************
* Function Name: Mux_4_Read
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
*  Macro Mux_4_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Mux_4_Read(void) 
{
    return (Mux_4_PS & Mux_4_MASK) >> Mux_4_SHIFT;
}


/*******************************************************************************
* Function Name: Mux_4_ReadDataReg
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
uint8 Mux_4_ReadDataReg(void) 
{
    return (Mux_4_DR & Mux_4_MASK) >> Mux_4_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Mux_4_INTSTAT) 

    /*******************************************************************************
    * Function Name: Mux_4_ClearInterrupt
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
    uint8 Mux_4_ClearInterrupt(void) 
    {
        return (Mux_4_INTSTAT & Mux_4_MASK) >> Mux_4_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
