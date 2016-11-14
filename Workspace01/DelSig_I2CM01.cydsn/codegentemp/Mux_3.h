/*******************************************************************************
* File Name: Mux_3.h  
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

#if !defined(CY_PINS_Mux_3_H) /* Pins Mux_3_H */
#define CY_PINS_Mux_3_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Mux_3_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Mux_3_Write(uint8 value) ;
void    Mux_3_SetDriveMode(uint8 mode) ;
uint8   Mux_3_ReadDataReg(void) ;
uint8   Mux_3_Read(void) ;
uint8   Mux_3_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Mux_3_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Mux_3_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Mux_3_DM_RES_UP          PIN_DM_RES_UP
#define Mux_3_DM_RES_DWN         PIN_DM_RES_DWN
#define Mux_3_DM_OD_LO           PIN_DM_OD_LO
#define Mux_3_DM_OD_HI           PIN_DM_OD_HI
#define Mux_3_DM_STRONG          PIN_DM_STRONG
#define Mux_3_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Mux_3_MASK               Mux_3__MASK
#define Mux_3_SHIFT              Mux_3__SHIFT
#define Mux_3_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Mux_3_PS                     (* (reg8 *) Mux_3__PS)
/* Data Register */
#define Mux_3_DR                     (* (reg8 *) Mux_3__DR)
/* Port Number */
#define Mux_3_PRT_NUM                (* (reg8 *) Mux_3__PRT) 
/* Connect to Analog Globals */                                                  
#define Mux_3_AG                     (* (reg8 *) Mux_3__AG)                       
/* Analog MUX bux enable */
#define Mux_3_AMUX                   (* (reg8 *) Mux_3__AMUX) 
/* Bidirectional Enable */                                                        
#define Mux_3_BIE                    (* (reg8 *) Mux_3__BIE)
/* Bit-mask for Aliased Register Access */
#define Mux_3_BIT_MASK               (* (reg8 *) Mux_3__BIT_MASK)
/* Bypass Enable */
#define Mux_3_BYP                    (* (reg8 *) Mux_3__BYP)
/* Port wide control signals */                                                   
#define Mux_3_CTL                    (* (reg8 *) Mux_3__CTL)
/* Drive Modes */
#define Mux_3_DM0                    (* (reg8 *) Mux_3__DM0) 
#define Mux_3_DM1                    (* (reg8 *) Mux_3__DM1)
#define Mux_3_DM2                    (* (reg8 *) Mux_3__DM2) 
/* Input Buffer Disable Override */
#define Mux_3_INP_DIS                (* (reg8 *) Mux_3__INP_DIS)
/* LCD Common or Segment Drive */
#define Mux_3_LCD_COM_SEG            (* (reg8 *) Mux_3__LCD_COM_SEG)
/* Enable Segment LCD */
#define Mux_3_LCD_EN                 (* (reg8 *) Mux_3__LCD_EN)
/* Slew Rate Control */
#define Mux_3_SLW                    (* (reg8 *) Mux_3__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Mux_3_PRTDSI__CAPS_SEL       (* (reg8 *) Mux_3__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Mux_3_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Mux_3__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Mux_3_PRTDSI__OE_SEL0        (* (reg8 *) Mux_3__PRTDSI__OE_SEL0) 
#define Mux_3_PRTDSI__OE_SEL1        (* (reg8 *) Mux_3__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Mux_3_PRTDSI__OUT_SEL0       (* (reg8 *) Mux_3__PRTDSI__OUT_SEL0) 
#define Mux_3_PRTDSI__OUT_SEL1       (* (reg8 *) Mux_3__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Mux_3_PRTDSI__SYNC_OUT       (* (reg8 *) Mux_3__PRTDSI__SYNC_OUT) 


#if defined(Mux_3__INTSTAT)  /* Interrupt Registers */

    #define Mux_3_INTSTAT                (* (reg8 *) Mux_3__INTSTAT)
    #define Mux_3_SNAP                   (* (reg8 *) Mux_3__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Mux_3_H */


/* [] END OF FILE */
