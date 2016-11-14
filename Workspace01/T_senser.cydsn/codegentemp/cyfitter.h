#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* SCL */
#define SCL__0__INTTYPE CYREG_PICU2_INTTYPE2
#define SCL__0__MASK 0x04u
#define SCL__0__PC CYREG_PRT2_PC2
#define SCL__0__PORT 2u
#define SCL__0__SHIFT 2
#define SCL__AG CYREG_PRT2_AG
#define SCL__AMUX CYREG_PRT2_AMUX
#define SCL__BIE CYREG_PRT2_BIE
#define SCL__BIT_MASK CYREG_PRT2_BIT_MASK
#define SCL__BYP CYREG_PRT2_BYP
#define SCL__CTL CYREG_PRT2_CTL
#define SCL__DM0 CYREG_PRT2_DM0
#define SCL__DM1 CYREG_PRT2_DM1
#define SCL__DM2 CYREG_PRT2_DM2
#define SCL__DR CYREG_PRT2_DR
#define SCL__INP_DIS CYREG_PRT2_INP_DIS
#define SCL__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define SCL__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define SCL__LCD_EN CYREG_PRT2_LCD_EN
#define SCL__MASK 0x04u
#define SCL__PORT 2u
#define SCL__PRT CYREG_PRT2_PRT
#define SCL__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define SCL__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define SCL__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define SCL__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define SCL__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define SCL__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define SCL__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define SCL__PS CYREG_PRT2_PS
#define SCL__SHIFT 2
#define SCL__SLW CYREG_PRT2_SLW

/* SDL */
#define SDL__0__INTTYPE CYREG_PICU2_INTTYPE3
#define SDL__0__MASK 0x08u
#define SDL__0__PC CYREG_PRT2_PC3
#define SDL__0__PORT 2u
#define SDL__0__SHIFT 3
#define SDL__AG CYREG_PRT2_AG
#define SDL__AMUX CYREG_PRT2_AMUX
#define SDL__BIE CYREG_PRT2_BIE
#define SDL__BIT_MASK CYREG_PRT2_BIT_MASK
#define SDL__BYP CYREG_PRT2_BYP
#define SDL__CTL CYREG_PRT2_CTL
#define SDL__DM0 CYREG_PRT2_DM0
#define SDL__DM1 CYREG_PRT2_DM1
#define SDL__DM2 CYREG_PRT2_DM2
#define SDL__DR CYREG_PRT2_DR
#define SDL__INP_DIS CYREG_PRT2_INP_DIS
#define SDL__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define SDL__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define SDL__LCD_EN CYREG_PRT2_LCD_EN
#define SDL__MASK 0x08u
#define SDL__PORT 2u
#define SDL__PRT CYREG_PRT2_PRT
#define SDL__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define SDL__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define SDL__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define SDL__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define SDL__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define SDL__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define SDL__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define SDL__PS CYREG_PRT2_PS
#define SDL__SHIFT 3
#define SDL__SLW CYREG_PRT2_SLW

/* Rx_net */
#define Rx_net__0__INTTYPE CYREG_PICU2_INTTYPE4
#define Rx_net__0__MASK 0x10u
#define Rx_net__0__PC CYREG_PRT2_PC4
#define Rx_net__0__PORT 2u
#define Rx_net__0__SHIFT 4
#define Rx_net__AG CYREG_PRT2_AG
#define Rx_net__AMUX CYREG_PRT2_AMUX
#define Rx_net__BIE CYREG_PRT2_BIE
#define Rx_net__BIT_MASK CYREG_PRT2_BIT_MASK
#define Rx_net__BYP CYREG_PRT2_BYP
#define Rx_net__CTL CYREG_PRT2_CTL
#define Rx_net__DM0 CYREG_PRT2_DM0
#define Rx_net__DM1 CYREG_PRT2_DM1
#define Rx_net__DM2 CYREG_PRT2_DM2
#define Rx_net__DR CYREG_PRT2_DR
#define Rx_net__INP_DIS CYREG_PRT2_INP_DIS
#define Rx_net__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define Rx_net__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define Rx_net__LCD_EN CYREG_PRT2_LCD_EN
#define Rx_net__MASK 0x10u
#define Rx_net__PORT 2u
#define Rx_net__PRT CYREG_PRT2_PRT
#define Rx_net__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define Rx_net__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define Rx_net__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define Rx_net__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define Rx_net__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define Rx_net__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define Rx_net__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define Rx_net__PS CYREG_PRT2_PS
#define Rx_net__SHIFT 4
#define Rx_net__SLW CYREG_PRT2_SLW

/* Tx_net */
#define Tx_net__0__INTTYPE CYREG_PICU2_INTTYPE5
#define Tx_net__0__MASK 0x20u
#define Tx_net__0__PC CYREG_PRT2_PC5
#define Tx_net__0__PORT 2u
#define Tx_net__0__SHIFT 5
#define Tx_net__AG CYREG_PRT2_AG
#define Tx_net__AMUX CYREG_PRT2_AMUX
#define Tx_net__BIE CYREG_PRT2_BIE
#define Tx_net__BIT_MASK CYREG_PRT2_BIT_MASK
#define Tx_net__BYP CYREG_PRT2_BYP
#define Tx_net__CTL CYREG_PRT2_CTL
#define Tx_net__DM0 CYREG_PRT2_DM0
#define Tx_net__DM1 CYREG_PRT2_DM1
#define Tx_net__DM2 CYREG_PRT2_DM2
#define Tx_net__DR CYREG_PRT2_DR
#define Tx_net__INP_DIS CYREG_PRT2_INP_DIS
#define Tx_net__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define Tx_net__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define Tx_net__LCD_EN CYREG_PRT2_LCD_EN
#define Tx_net__MASK 0x20u
#define Tx_net__PORT 2u
#define Tx_net__PRT CYREG_PRT2_PRT
#define Tx_net__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define Tx_net__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define Tx_net__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define Tx_net__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define Tx_net__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define Tx_net__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define Tx_net__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define Tx_net__PS CYREG_PRT2_PS
#define Tx_net__SHIFT 5
#define Tx_net__SLW CYREG_PRT2_SLW

/* UART_net_BUART */
#define UART_net_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB14_15_ACTL
#define UART_net_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB14_15_CTL
#define UART_net_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB14_15_CTL
#define UART_net_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB14_15_CTL
#define UART_net_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG CYREG_B0_UDB14_15_CTL
#define UART_net_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG CYREG_B0_UDB14_15_MSK
#define UART_net_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG CYREG_B0_UDB14_15_MSK
#define UART_net_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG CYREG_B0_UDB14_15_MSK
#define UART_net_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB14_15_MSK
#define UART_net_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG CYREG_B0_UDB14_ACTL
#define UART_net_BUART_sRX_RxBitCounter__CONTROL_REG CYREG_B0_UDB14_CTL
#define UART_net_BUART_sRX_RxBitCounter__CONTROL_ST_REG CYREG_B0_UDB14_ST_CTL
#define UART_net_BUART_sRX_RxBitCounter__COUNT_REG CYREG_B0_UDB14_CTL
#define UART_net_BUART_sRX_RxBitCounter__COUNT_ST_REG CYREG_B0_UDB14_ST_CTL
#define UART_net_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB14_MSK_ACTL
#define UART_net_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG CYREG_B0_UDB14_MSK_ACTL
#define UART_net_BUART_sRX_RxBitCounter__PERIOD_REG CYREG_B0_UDB14_MSK
#define UART_net_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB14_15_ACTL
#define UART_net_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG CYREG_B0_UDB14_15_ST
#define UART_net_BUART_sRX_RxBitCounter_ST__MASK_REG CYREG_B0_UDB14_MSK
#define UART_net_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B0_UDB14_MSK_ACTL
#define UART_net_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B0_UDB14_MSK_ACTL
#define UART_net_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG CYREG_B0_UDB14_ACTL
#define UART_net_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG CYREG_B0_UDB14_ST_CTL
#define UART_net_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG CYREG_B0_UDB14_ST_CTL
#define UART_net_BUART_sRX_RxBitCounter_ST__STATUS_REG CYREG_B0_UDB14_ST
#define UART_net_BUART_sRX_RxShifter_u0__16BIT_A0_REG CYREG_B0_UDB13_14_A0
#define UART_net_BUART_sRX_RxShifter_u0__16BIT_A1_REG CYREG_B0_UDB13_14_A1
#define UART_net_BUART_sRX_RxShifter_u0__16BIT_D0_REG CYREG_B0_UDB13_14_D0
#define UART_net_BUART_sRX_RxShifter_u0__16BIT_D1_REG CYREG_B0_UDB13_14_D1
#define UART_net_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB13_14_ACTL
#define UART_net_BUART_sRX_RxShifter_u0__16BIT_F0_REG CYREG_B0_UDB13_14_F0
#define UART_net_BUART_sRX_RxShifter_u0__16BIT_F1_REG CYREG_B0_UDB13_14_F1
#define UART_net_BUART_sRX_RxShifter_u0__A0_A1_REG CYREG_B0_UDB13_A0_A1
#define UART_net_BUART_sRX_RxShifter_u0__A0_REG CYREG_B0_UDB13_A0
#define UART_net_BUART_sRX_RxShifter_u0__A1_REG CYREG_B0_UDB13_A1
#define UART_net_BUART_sRX_RxShifter_u0__D0_D1_REG CYREG_B0_UDB13_D0_D1
#define UART_net_BUART_sRX_RxShifter_u0__D0_REG CYREG_B0_UDB13_D0
#define UART_net_BUART_sRX_RxShifter_u0__D1_REG CYREG_B0_UDB13_D1
#define UART_net_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB13_ACTL
#define UART_net_BUART_sRX_RxShifter_u0__F0_F1_REG CYREG_B0_UDB13_F0_F1
#define UART_net_BUART_sRX_RxShifter_u0__F0_REG CYREG_B0_UDB13_F0
#define UART_net_BUART_sRX_RxShifter_u0__F1_REG CYREG_B0_UDB13_F1
#define UART_net_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB13_14_ACTL
#define UART_net_BUART_sRX_RxSts__16BIT_STATUS_REG CYREG_B0_UDB13_14_ST
#define UART_net_BUART_sRX_RxSts__3__MASK 0x08u
#define UART_net_BUART_sRX_RxSts__3__POS 3
#define UART_net_BUART_sRX_RxSts__4__MASK 0x10u
#define UART_net_BUART_sRX_RxSts__4__POS 4
#define UART_net_BUART_sRX_RxSts__5__MASK 0x20u
#define UART_net_BUART_sRX_RxSts__5__POS 5
#define UART_net_BUART_sRX_RxSts__MASK 0x38u
#define UART_net_BUART_sRX_RxSts__MASK_REG CYREG_B0_UDB13_MSK
#define UART_net_BUART_sRX_RxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB13_ACTL
#define UART_net_BUART_sRX_RxSts__STATUS_REG CYREG_B0_UDB13_ST
#define UART_net_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG CYREG_B0_UDB12_13_A0
#define UART_net_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG CYREG_B0_UDB12_13_A1
#define UART_net_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG CYREG_B0_UDB12_13_D0
#define UART_net_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG CYREG_B0_UDB12_13_D1
#define UART_net_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB12_13_ACTL
#define UART_net_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG CYREG_B0_UDB12_13_F0
#define UART_net_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG CYREG_B0_UDB12_13_F1
#define UART_net_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG CYREG_B0_UDB12_A0_A1
#define UART_net_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG CYREG_B0_UDB12_A0
#define UART_net_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG CYREG_B0_UDB12_A1
#define UART_net_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG CYREG_B0_UDB12_D0_D1
#define UART_net_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG CYREG_B0_UDB12_D0
#define UART_net_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG CYREG_B0_UDB12_D1
#define UART_net_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG CYREG_B0_UDB12_ACTL
#define UART_net_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG CYREG_B0_UDB12_F0_F1
#define UART_net_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG CYREG_B0_UDB12_F0
#define UART_net_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG CYREG_B0_UDB12_F1
#define UART_net_BUART_sTX_TxShifter_u0__16BIT_A0_REG CYREG_B0_UDB10_11_A0
#define UART_net_BUART_sTX_TxShifter_u0__16BIT_A1_REG CYREG_B0_UDB10_11_A1
#define UART_net_BUART_sTX_TxShifter_u0__16BIT_D0_REG CYREG_B0_UDB10_11_D0
#define UART_net_BUART_sTX_TxShifter_u0__16BIT_D1_REG CYREG_B0_UDB10_11_D1
#define UART_net_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB10_11_ACTL
#define UART_net_BUART_sTX_TxShifter_u0__16BIT_F0_REG CYREG_B0_UDB10_11_F0
#define UART_net_BUART_sTX_TxShifter_u0__16BIT_F1_REG CYREG_B0_UDB10_11_F1
#define UART_net_BUART_sTX_TxShifter_u0__A0_A1_REG CYREG_B0_UDB10_A0_A1
#define UART_net_BUART_sTX_TxShifter_u0__A0_REG CYREG_B0_UDB10_A0
#define UART_net_BUART_sTX_TxShifter_u0__A1_REG CYREG_B0_UDB10_A1
#define UART_net_BUART_sTX_TxShifter_u0__D0_D1_REG CYREG_B0_UDB10_D0_D1
#define UART_net_BUART_sTX_TxShifter_u0__D0_REG CYREG_B0_UDB10_D0
#define UART_net_BUART_sTX_TxShifter_u0__D1_REG CYREG_B0_UDB10_D1
#define UART_net_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB10_ACTL
#define UART_net_BUART_sTX_TxShifter_u0__F0_F1_REG CYREG_B0_UDB10_F0_F1
#define UART_net_BUART_sTX_TxShifter_u0__F0_REG CYREG_B0_UDB10_F0
#define UART_net_BUART_sTX_TxShifter_u0__F1_REG CYREG_B0_UDB10_F1
#define UART_net_BUART_sTX_TxSts__0__MASK 0x01u
#define UART_net_BUART_sTX_TxSts__0__POS 0
#define UART_net_BUART_sTX_TxSts__1__MASK 0x02u
#define UART_net_BUART_sTX_TxSts__1__POS 1
#define UART_net_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB10_11_ACTL
#define UART_net_BUART_sTX_TxSts__16BIT_STATUS_REG CYREG_B0_UDB10_11_ST
#define UART_net_BUART_sTX_TxSts__2__MASK 0x04u
#define UART_net_BUART_sTX_TxSts__2__POS 2
#define UART_net_BUART_sTX_TxSts__3__MASK 0x08u
#define UART_net_BUART_sTX_TxSts__3__POS 3
#define UART_net_BUART_sTX_TxSts__MASK 0x0Fu
#define UART_net_BUART_sTX_TxSts__MASK_REG CYREG_B0_UDB10_MSK
#define UART_net_BUART_sTX_TxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB10_ACTL
#define UART_net_BUART_sTX_TxSts__STATUS_REG CYREG_B0_UDB10_ST

/* UART_net_IntClock */
#define UART_net_IntClock__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define UART_net_IntClock__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define UART_net_IntClock__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define UART_net_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define UART_net_IntClock__INDEX 0x00u
#define UART_net_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define UART_net_IntClock__PM_ACT_MSK 0x01u
#define UART_net_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define UART_net_IntClock__PM_STBY_MSK 0x01u

/* isr_rx_net */
#define isr_rx_net__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define isr_rx_net__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define isr_rx_net__INTC_MASK 0x01u
#define isr_rx_net__INTC_NUMBER 0u
#define isr_rx_net__INTC_PRIOR_NUM 7u
#define isr_rx_net__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define isr_rx_net__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define isr_rx_net__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* isr_tx_net */
#define isr_tx_net__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define isr_tx_net__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define isr_tx_net__INTC_MASK 0x02u
#define isr_tx_net__INTC_NUMBER 1u
#define isr_tx_net__INTC_PRIOR_NUM 7u
#define isr_tx_net__INTC_PRIOR_REG CYREG_NVIC_PRI_1
#define isr_tx_net__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define isr_tx_net__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "T_senser"
#define CY_VERSION "PSoC Creator  3.3"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 18u
#define CYDEV_CHIP_DIE_PSOC4A 10u
#define CYDEV_CHIP_DIE_PSOC5LP 17u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E123069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 10u
#define CYDEV_CHIP_MEMBER_4C 15u
#define CYDEV_CHIP_MEMBER_4D 6u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 11u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 9u
#define CYDEV_CHIP_MEMBER_4I 14u
#define CYDEV_CHIP_MEMBER_4J 7u
#define CYDEV_CHIP_MEMBER_4K 8u
#define CYDEV_CHIP_MEMBER_4L 13u
#define CYDEV_CHIP_MEMBER_4M 12u
#define CYDEV_CHIP_MEMBER_4N 5u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 17u
#define CYDEV_CHIP_MEMBER_5B 16u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000003u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */