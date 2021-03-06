/*******************************************************************************
* File Name: Mux_4.h  
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

#if !defined(CY_PINS_Mux_4_H) /* Pins Mux_4_H */
#define CY_PINS_Mux_4_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Mux_4_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Mux_4_Write(uint8 value) ;
void    Mux_4_SetDriveMode(uint8 mode) ;
uint8   Mux_4_ReadDataReg(void) ;
uint8   Mux_4_Read(void) ;
uint8   Mux_4_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Mux_4_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Mux_4_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Mux_4_DM_RES_UP          PIN_DM_RES_UP
#define Mux_4_DM_RES_DWN         PIN_DM_RES_DWN
#define Mux_4_DM_OD_LO           PIN_DM_OD_LO
#define Mux_4_DM_OD_HI           PIN_DM_OD_HI
#define Mux_4_DM_STRONG          PIN_DM_STRONG
#define Mux_4_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Mux_4_MASK               Mux_4__MASK
#define Mux_4_SHIFT              Mux_4__SHIFT
#define Mux_4_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Mux_4_PS                     (* (reg8 *) Mux_4__PS)
/* Data Register */
#define Mux_4_DR                     (* (reg8 *) Mux_4__DR)
/* Port Number */
#define Mux_4_PRT_NUM                (* (reg8 *) Mux_4__PRT) 
/* Connect to Analog Globals */                                                  
#define Mux_4_AG                     (* (reg8 *) Mux_4__AG)                       
/* Analog MUX bux enable */
#define Mux_4_AMUX                   (* (reg8 *) Mux_4__AMUX) 
/* Bidirectional Enable */                                                        
#define Mux_4_BIE                    (* (reg8 *) Mux_4__BIE)
/* Bit-mask for Aliased Register Access */
#define Mux_4_BIT_MASK               (* (reg8 *) Mux_4__BIT_MASK)
/* Bypass Enable */
#define Mux_4_BYP                    (* (reg8 *) Mux_4__BYP)
/* Port wide control signals */                                                   
#define Mux_4_CTL                    (* (reg8 *) Mux_4__CTL)
/* Drive Modes */
#define Mux_4_DM0                    (* (reg8 *) Mux_4__DM0) 
#define Mux_4_DM1                    (* (reg8 *) Mux_4__DM1)
#define Mux_4_DM2                    (* (reg8 *) Mux_4__DM2) 
/* Input Buffer Disable Override */
#define Mux_4_INP_DIS                (* (reg8 *) Mux_4__INP_DIS)
/* LCD Common or Segment Drive */
#define Mux_4_LCD_COM_SEG            (* (reg8 *) Mux_4__LCD_COM_SEG)
/* Enable Segment LCD */
#define Mux_4_LCD_EN                 (* (reg8 *) Mux_4__LCD_EN)
/* Slew Rate Control */
#define Mux_4_SLW                    (* (reg8 *) Mux_4__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Mux_4_PRTDSI__CAPS_SEL       (* (reg8 *) Mux_4__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Mux_4_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Mux_4__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Mux_4_PRTDSI__OE_SEL0        (* (reg8 *) Mux_4__PRTDSI__OE_SEL0) 
#define Mux_4_PRTDSI__OE_SEL1        (* (reg8 *) Mux_4__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Mux_4_PRTDSI__OUT_SEL0       (* (reg8 *) Mux_4__PRTDSI__OUT_SEL0) 
#define Mux_4_PRTDSI__OUT_SEL1       (* (reg8 *) Mux_4__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Mux_4_PRTDSI__SYNC_OUT       (* (reg8 *) Mux_4__PRTDSI__SYNC_OUT) 


#if defined(Mux_4__INTSTAT)  /* Interrupt Registers */

    #define Mux_4_INTSTAT                (* (reg8 *) Mux_4__INTSTAT)
    #define Mux_4_SNAP                   (* (reg8 *) Mux_4__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Mux_4_H */


/* [] END OF FILE */
