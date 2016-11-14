/*******************************************************************************
* File Name: Mux_5.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Mux_5_H) /* Pins Mux_5_H */
#define CY_PINS_Mux_5_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Mux_5_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Mux_5_Write(uint8 value) ;
void    Mux_5_SetDriveMode(uint8 mode) ;
uint8   Mux_5_ReadDataReg(void) ;
uint8   Mux_5_Read(void) ;
uint8   Mux_5_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Mux_5_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Mux_5_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Mux_5_DM_RES_UP          PIN_DM_RES_UP
#define Mux_5_DM_RES_DWN         PIN_DM_RES_DWN
#define Mux_5_DM_OD_LO           PIN_DM_OD_LO
#define Mux_5_DM_OD_HI           PIN_DM_OD_HI
#define Mux_5_DM_STRONG          PIN_DM_STRONG
#define Mux_5_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Mux_5_MASK               Mux_5__MASK
#define Mux_5_SHIFT              Mux_5__SHIFT
#define Mux_5_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Mux_5_PS                     (* (reg8 *) Mux_5__PS)
/* Data Register */
#define Mux_5_DR                     (* (reg8 *) Mux_5__DR)
/* Port Number */
#define Mux_5_PRT_NUM                (* (reg8 *) Mux_5__PRT) 
/* Connect to Analog Globals */                                                  
#define Mux_5_AG                     (* (reg8 *) Mux_5__AG)                       
/* Analog MUX bux enable */
#define Mux_5_AMUX                   (* (reg8 *) Mux_5__AMUX) 
/* Bidirectional Enable */                                                        
#define Mux_5_BIE                    (* (reg8 *) Mux_5__BIE)
/* Bit-mask for Aliased Register Access */
#define Mux_5_BIT_MASK               (* (reg8 *) Mux_5__BIT_MASK)
/* Bypass Enable */
#define Mux_5_BYP                    (* (reg8 *) Mux_5__BYP)
/* Port wide control signals */                                                   
#define Mux_5_CTL                    (* (reg8 *) Mux_5__CTL)
/* Drive Modes */
#define Mux_5_DM0                    (* (reg8 *) Mux_5__DM0) 
#define Mux_5_DM1                    (* (reg8 *) Mux_5__DM1)
#define Mux_5_DM2                    (* (reg8 *) Mux_5__DM2) 
/* Input Buffer Disable Override */
#define Mux_5_INP_DIS                (* (reg8 *) Mux_5__INP_DIS)
/* LCD Common or Segment Drive */
#define Mux_5_LCD_COM_SEG            (* (reg8 *) Mux_5__LCD_COM_SEG)
/* Enable Segment LCD */
#define Mux_5_LCD_EN                 (* (reg8 *) Mux_5__LCD_EN)
/* Slew Rate Control */
#define Mux_5_SLW                    (* (reg8 *) Mux_5__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Mux_5_PRTDSI__CAPS_SEL       (* (reg8 *) Mux_5__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Mux_5_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Mux_5__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Mux_5_PRTDSI__OE_SEL0        (* (reg8 *) Mux_5__PRTDSI__OE_SEL0) 
#define Mux_5_PRTDSI__OE_SEL1        (* (reg8 *) Mux_5__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Mux_5_PRTDSI__OUT_SEL0       (* (reg8 *) Mux_5__PRTDSI__OUT_SEL0) 
#define Mux_5_PRTDSI__OUT_SEL1       (* (reg8 *) Mux_5__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Mux_5_PRTDSI__SYNC_OUT       (* (reg8 *) Mux_5__PRTDSI__SYNC_OUT) 


#if defined(Mux_5__INTSTAT)  /* Interrupt Registers */

    #define Mux_5_INTSTAT                (* (reg8 *) Mux_5__INTSTAT)
    #define Mux_5_SNAP                   (* (reg8 *) Mux_5__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Mux_5_H */


/* [] END OF FILE */
