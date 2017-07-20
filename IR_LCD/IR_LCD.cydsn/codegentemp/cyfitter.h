#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include <cydevice_trm.h>

/* LED */
#define LED__0__DM__MASK 0x1C0000u
#define LED__0__DM__SHIFT 18
#define LED__0__DR CYREG_PRT1_DR
#define LED__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define LED__0__HSIOM_MASK 0x0F000000u
#define LED__0__HSIOM_SHIFT 24u
#define LED__0__INTCFG CYREG_PRT1_INTCFG
#define LED__0__INTSTAT CYREG_PRT1_INTSTAT
#define LED__0__MASK 0x40u
#define LED__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LED__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LED__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LED__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LED__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LED__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LED__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LED__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LED__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LED__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LED__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LED__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LED__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LED__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LED__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LED__0__PC CYREG_PRT1_PC
#define LED__0__PC2 CYREG_PRT1_PC2
#define LED__0__PORT 1u
#define LED__0__PS CYREG_PRT1_PS
#define LED__0__SHIFT 6
#define LED__DR CYREG_PRT1_DR
#define LED__INTCFG CYREG_PRT1_INTCFG
#define LED__INTSTAT CYREG_PRT1_INTSTAT
#define LED__MASK 0x40u
#define LED__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LED__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LED__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LED__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LED__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LED__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LED__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LED__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LED__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LED__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LED__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LED__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LED__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LED__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LED__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LED__PC CYREG_PRT1_PC
#define LED__PC2 CYREG_PRT1_PC2
#define LED__PORT 1u
#define LED__PS CYREG_PRT1_PS
#define LED__SHIFT 6

/* IR_Int */
#define IR_Int__INTC_CLR_EN_REG CYREG_CM0_ICER
#define IR_Int__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define IR_Int__INTC_MASK 0x02u
#define IR_Int__INTC_NUMBER 1u
#define IR_Int__INTC_PRIOR_MASK 0xC000u
#define IR_Int__INTC_PRIOR_NUM 3u
#define IR_Int__INTC_PRIOR_REG CYREG_CM0_IPR0
#define IR_Int__INTC_SET_EN_REG CYREG_CM0_ISER
#define IR_Int__INTC_SET_PD_REG CYREG_CM0_ISPR

/* IR_REC */
#define IR_REC__0__DM__MASK 0xE00u
#define IR_REC__0__DM__SHIFT 9
#define IR_REC__0__DR CYREG_PRT1_DR
#define IR_REC__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define IR_REC__0__HSIOM_MASK 0x0000F000u
#define IR_REC__0__HSIOM_SHIFT 12u
#define IR_REC__0__INTCFG CYREG_PRT1_INTCFG
#define IR_REC__0__INTSTAT CYREG_PRT1_INTSTAT
#define IR_REC__0__MASK 0x08u
#define IR_REC__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define IR_REC__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define IR_REC__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define IR_REC__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define IR_REC__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define IR_REC__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define IR_REC__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define IR_REC__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define IR_REC__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define IR_REC__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define IR_REC__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define IR_REC__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define IR_REC__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define IR_REC__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define IR_REC__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define IR_REC__0__PC CYREG_PRT1_PC
#define IR_REC__0__PC2 CYREG_PRT1_PC2
#define IR_REC__0__PORT 1u
#define IR_REC__0__PS CYREG_PRT1_PS
#define IR_REC__0__SHIFT 3
#define IR_REC__DR CYREG_PRT1_DR
#define IR_REC__INTCFG CYREG_PRT1_INTCFG
#define IR_REC__INTSTAT CYREG_PRT1_INTSTAT
#define IR_REC__MASK 0x08u
#define IR_REC__PA__CFG0 CYREG_UDB_PA1_CFG0
#define IR_REC__PA__CFG1 CYREG_UDB_PA1_CFG1
#define IR_REC__PA__CFG10 CYREG_UDB_PA1_CFG10
#define IR_REC__PA__CFG11 CYREG_UDB_PA1_CFG11
#define IR_REC__PA__CFG12 CYREG_UDB_PA1_CFG12
#define IR_REC__PA__CFG13 CYREG_UDB_PA1_CFG13
#define IR_REC__PA__CFG14 CYREG_UDB_PA1_CFG14
#define IR_REC__PA__CFG2 CYREG_UDB_PA1_CFG2
#define IR_REC__PA__CFG3 CYREG_UDB_PA1_CFG3
#define IR_REC__PA__CFG4 CYREG_UDB_PA1_CFG4
#define IR_REC__PA__CFG5 CYREG_UDB_PA1_CFG5
#define IR_REC__PA__CFG6 CYREG_UDB_PA1_CFG6
#define IR_REC__PA__CFG7 CYREG_UDB_PA1_CFG7
#define IR_REC__PA__CFG8 CYREG_UDB_PA1_CFG8
#define IR_REC__PA__CFG9 CYREG_UDB_PA1_CFG9
#define IR_REC__PC CYREG_PRT1_PC
#define IR_REC__PC2 CYREG_PRT1_PC2
#define IR_REC__PORT 1u
#define IR_REC__PS CYREG_PRT1_PS
#define IR_REC__SHIFT 3
#define IR_REC__SNAP CYREG_PRT1_INTSTAT

/* Clock_1 */
#define Clock_1__DIVIDER_MASK 0x0000FFFFu
#define Clock_1__ENABLE CYREG_CLK_DIVIDER_A00
#define Clock_1__ENABLE_MASK 0x80000000u
#define Clock_1__MASK 0x80000000u
#define Clock_1__REGISTER CYREG_CLK_DIVIDER_A00

/* PWM_Int */
#define PWM_Int__INTC_CLR_EN_REG CYREG_CM0_ICER
#define PWM_Int__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define PWM_Int__INTC_MASK 0x01u
#define PWM_Int__INTC_NUMBER 0u
#define PWM_Int__INTC_PRIOR_MASK 0xC0u
#define PWM_Int__INTC_PRIOR_NUM 3u
#define PWM_Int__INTC_PRIOR_REG CYREG_CM0_IPR0
#define PWM_Int__INTC_SET_EN_REG CYREG_CM0_ISER
#define PWM_Int__INTC_SET_PD_REG CYREG_CM0_ISPR

/* LCD_Char_LCDPort */
#define LCD_Char_LCDPort__0__DM__MASK 0x38u
#define LCD_Char_LCDPort__0__DM__SHIFT 3
#define LCD_Char_LCDPort__0__DR CYREG_PRT2_DR
#define LCD_Char_LCDPort__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define LCD_Char_LCDPort__0__HSIOM_MASK 0x000000F0u
#define LCD_Char_LCDPort__0__HSIOM_SHIFT 4u
#define LCD_Char_LCDPort__0__INTCFG CYREG_PRT2_INTCFG
#define LCD_Char_LCDPort__0__INTSTAT CYREG_PRT2_INTSTAT
#define LCD_Char_LCDPort__0__MASK 0x02u
#define LCD_Char_LCDPort__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define LCD_Char_LCDPort__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define LCD_Char_LCDPort__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define LCD_Char_LCDPort__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define LCD_Char_LCDPort__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define LCD_Char_LCDPort__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define LCD_Char_LCDPort__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define LCD_Char_LCDPort__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define LCD_Char_LCDPort__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define LCD_Char_LCDPort__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define LCD_Char_LCDPort__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define LCD_Char_LCDPort__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define LCD_Char_LCDPort__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define LCD_Char_LCDPort__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define LCD_Char_LCDPort__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define LCD_Char_LCDPort__0__PC CYREG_PRT2_PC
#define LCD_Char_LCDPort__0__PC2 CYREG_PRT2_PC2
#define LCD_Char_LCDPort__0__PORT 2u
#define LCD_Char_LCDPort__0__PS CYREG_PRT2_PS
#define LCD_Char_LCDPort__0__SHIFT 1
#define LCD_Char_LCDPort__1__DM__MASK 0x1C0u
#define LCD_Char_LCDPort__1__DM__SHIFT 6
#define LCD_Char_LCDPort__1__DR CYREG_PRT2_DR
#define LCD_Char_LCDPort__1__HSIOM CYREG_HSIOM_PORT_SEL2
#define LCD_Char_LCDPort__1__HSIOM_MASK 0x00000F00u
#define LCD_Char_LCDPort__1__HSIOM_SHIFT 8u
#define LCD_Char_LCDPort__1__INTCFG CYREG_PRT2_INTCFG
#define LCD_Char_LCDPort__1__INTSTAT CYREG_PRT2_INTSTAT
#define LCD_Char_LCDPort__1__MASK 0x04u
#define LCD_Char_LCDPort__1__PA__CFG0 CYREG_UDB_PA2_CFG0
#define LCD_Char_LCDPort__1__PA__CFG1 CYREG_UDB_PA2_CFG1
#define LCD_Char_LCDPort__1__PA__CFG10 CYREG_UDB_PA2_CFG10
#define LCD_Char_LCDPort__1__PA__CFG11 CYREG_UDB_PA2_CFG11
#define LCD_Char_LCDPort__1__PA__CFG12 CYREG_UDB_PA2_CFG12
#define LCD_Char_LCDPort__1__PA__CFG13 CYREG_UDB_PA2_CFG13
#define LCD_Char_LCDPort__1__PA__CFG14 CYREG_UDB_PA2_CFG14
#define LCD_Char_LCDPort__1__PA__CFG2 CYREG_UDB_PA2_CFG2
#define LCD_Char_LCDPort__1__PA__CFG3 CYREG_UDB_PA2_CFG3
#define LCD_Char_LCDPort__1__PA__CFG4 CYREG_UDB_PA2_CFG4
#define LCD_Char_LCDPort__1__PA__CFG5 CYREG_UDB_PA2_CFG5
#define LCD_Char_LCDPort__1__PA__CFG6 CYREG_UDB_PA2_CFG6
#define LCD_Char_LCDPort__1__PA__CFG7 CYREG_UDB_PA2_CFG7
#define LCD_Char_LCDPort__1__PA__CFG8 CYREG_UDB_PA2_CFG8
#define LCD_Char_LCDPort__1__PA__CFG9 CYREG_UDB_PA2_CFG9
#define LCD_Char_LCDPort__1__PC CYREG_PRT2_PC
#define LCD_Char_LCDPort__1__PC2 CYREG_PRT2_PC2
#define LCD_Char_LCDPort__1__PORT 2u
#define LCD_Char_LCDPort__1__PS CYREG_PRT2_PS
#define LCD_Char_LCDPort__1__SHIFT 2
#define LCD_Char_LCDPort__2__DM__MASK 0xE00u
#define LCD_Char_LCDPort__2__DM__SHIFT 9
#define LCD_Char_LCDPort__2__DR CYREG_PRT2_DR
#define LCD_Char_LCDPort__2__HSIOM CYREG_HSIOM_PORT_SEL2
#define LCD_Char_LCDPort__2__HSIOM_MASK 0x0000F000u
#define LCD_Char_LCDPort__2__HSIOM_SHIFT 12u
#define LCD_Char_LCDPort__2__INTCFG CYREG_PRT2_INTCFG
#define LCD_Char_LCDPort__2__INTSTAT CYREG_PRT2_INTSTAT
#define LCD_Char_LCDPort__2__MASK 0x08u
#define LCD_Char_LCDPort__2__PA__CFG0 CYREG_UDB_PA2_CFG0
#define LCD_Char_LCDPort__2__PA__CFG1 CYREG_UDB_PA2_CFG1
#define LCD_Char_LCDPort__2__PA__CFG10 CYREG_UDB_PA2_CFG10
#define LCD_Char_LCDPort__2__PA__CFG11 CYREG_UDB_PA2_CFG11
#define LCD_Char_LCDPort__2__PA__CFG12 CYREG_UDB_PA2_CFG12
#define LCD_Char_LCDPort__2__PA__CFG13 CYREG_UDB_PA2_CFG13
#define LCD_Char_LCDPort__2__PA__CFG14 CYREG_UDB_PA2_CFG14
#define LCD_Char_LCDPort__2__PA__CFG2 CYREG_UDB_PA2_CFG2
#define LCD_Char_LCDPort__2__PA__CFG3 CYREG_UDB_PA2_CFG3
#define LCD_Char_LCDPort__2__PA__CFG4 CYREG_UDB_PA2_CFG4
#define LCD_Char_LCDPort__2__PA__CFG5 CYREG_UDB_PA2_CFG5
#define LCD_Char_LCDPort__2__PA__CFG6 CYREG_UDB_PA2_CFG6
#define LCD_Char_LCDPort__2__PA__CFG7 CYREG_UDB_PA2_CFG7
#define LCD_Char_LCDPort__2__PA__CFG8 CYREG_UDB_PA2_CFG8
#define LCD_Char_LCDPort__2__PA__CFG9 CYREG_UDB_PA2_CFG9
#define LCD_Char_LCDPort__2__PC CYREG_PRT2_PC
#define LCD_Char_LCDPort__2__PC2 CYREG_PRT2_PC2
#define LCD_Char_LCDPort__2__PORT 2u
#define LCD_Char_LCDPort__2__PS CYREG_PRT2_PS
#define LCD_Char_LCDPort__2__SHIFT 3
#define LCD_Char_LCDPort__3__DM__MASK 0x7000u
#define LCD_Char_LCDPort__3__DM__SHIFT 12
#define LCD_Char_LCDPort__3__DR CYREG_PRT2_DR
#define LCD_Char_LCDPort__3__HSIOM CYREG_HSIOM_PORT_SEL2
#define LCD_Char_LCDPort__3__HSIOM_MASK 0x000F0000u
#define LCD_Char_LCDPort__3__HSIOM_SHIFT 16u
#define LCD_Char_LCDPort__3__INTCFG CYREG_PRT2_INTCFG
#define LCD_Char_LCDPort__3__INTSTAT CYREG_PRT2_INTSTAT
#define LCD_Char_LCDPort__3__MASK 0x10u
#define LCD_Char_LCDPort__3__PA__CFG0 CYREG_UDB_PA2_CFG0
#define LCD_Char_LCDPort__3__PA__CFG1 CYREG_UDB_PA2_CFG1
#define LCD_Char_LCDPort__3__PA__CFG10 CYREG_UDB_PA2_CFG10
#define LCD_Char_LCDPort__3__PA__CFG11 CYREG_UDB_PA2_CFG11
#define LCD_Char_LCDPort__3__PA__CFG12 CYREG_UDB_PA2_CFG12
#define LCD_Char_LCDPort__3__PA__CFG13 CYREG_UDB_PA2_CFG13
#define LCD_Char_LCDPort__3__PA__CFG14 CYREG_UDB_PA2_CFG14
#define LCD_Char_LCDPort__3__PA__CFG2 CYREG_UDB_PA2_CFG2
#define LCD_Char_LCDPort__3__PA__CFG3 CYREG_UDB_PA2_CFG3
#define LCD_Char_LCDPort__3__PA__CFG4 CYREG_UDB_PA2_CFG4
#define LCD_Char_LCDPort__3__PA__CFG5 CYREG_UDB_PA2_CFG5
#define LCD_Char_LCDPort__3__PA__CFG6 CYREG_UDB_PA2_CFG6
#define LCD_Char_LCDPort__3__PA__CFG7 CYREG_UDB_PA2_CFG7
#define LCD_Char_LCDPort__3__PA__CFG8 CYREG_UDB_PA2_CFG8
#define LCD_Char_LCDPort__3__PA__CFG9 CYREG_UDB_PA2_CFG9
#define LCD_Char_LCDPort__3__PC CYREG_PRT2_PC
#define LCD_Char_LCDPort__3__PC2 CYREG_PRT2_PC2
#define LCD_Char_LCDPort__3__PORT 2u
#define LCD_Char_LCDPort__3__PS CYREG_PRT2_PS
#define LCD_Char_LCDPort__3__SHIFT 4
#define LCD_Char_LCDPort__4__DM__MASK 0x38000u
#define LCD_Char_LCDPort__4__DM__SHIFT 15
#define LCD_Char_LCDPort__4__DR CYREG_PRT2_DR
#define LCD_Char_LCDPort__4__HSIOM CYREG_HSIOM_PORT_SEL2
#define LCD_Char_LCDPort__4__HSIOM_MASK 0x00F00000u
#define LCD_Char_LCDPort__4__HSIOM_SHIFT 20u
#define LCD_Char_LCDPort__4__INTCFG CYREG_PRT2_INTCFG
#define LCD_Char_LCDPort__4__INTSTAT CYREG_PRT2_INTSTAT
#define LCD_Char_LCDPort__4__MASK 0x20u
#define LCD_Char_LCDPort__4__PA__CFG0 CYREG_UDB_PA2_CFG0
#define LCD_Char_LCDPort__4__PA__CFG1 CYREG_UDB_PA2_CFG1
#define LCD_Char_LCDPort__4__PA__CFG10 CYREG_UDB_PA2_CFG10
#define LCD_Char_LCDPort__4__PA__CFG11 CYREG_UDB_PA2_CFG11
#define LCD_Char_LCDPort__4__PA__CFG12 CYREG_UDB_PA2_CFG12
#define LCD_Char_LCDPort__4__PA__CFG13 CYREG_UDB_PA2_CFG13
#define LCD_Char_LCDPort__4__PA__CFG14 CYREG_UDB_PA2_CFG14
#define LCD_Char_LCDPort__4__PA__CFG2 CYREG_UDB_PA2_CFG2
#define LCD_Char_LCDPort__4__PA__CFG3 CYREG_UDB_PA2_CFG3
#define LCD_Char_LCDPort__4__PA__CFG4 CYREG_UDB_PA2_CFG4
#define LCD_Char_LCDPort__4__PA__CFG5 CYREG_UDB_PA2_CFG5
#define LCD_Char_LCDPort__4__PA__CFG6 CYREG_UDB_PA2_CFG6
#define LCD_Char_LCDPort__4__PA__CFG7 CYREG_UDB_PA2_CFG7
#define LCD_Char_LCDPort__4__PA__CFG8 CYREG_UDB_PA2_CFG8
#define LCD_Char_LCDPort__4__PA__CFG9 CYREG_UDB_PA2_CFG9
#define LCD_Char_LCDPort__4__PC CYREG_PRT2_PC
#define LCD_Char_LCDPort__4__PC2 CYREG_PRT2_PC2
#define LCD_Char_LCDPort__4__PORT 2u
#define LCD_Char_LCDPort__4__PS CYREG_PRT2_PS
#define LCD_Char_LCDPort__4__SHIFT 5
#define LCD_Char_LCDPort__5__DM__MASK 0x1C0000u
#define LCD_Char_LCDPort__5__DM__SHIFT 18
#define LCD_Char_LCDPort__5__DR CYREG_PRT2_DR
#define LCD_Char_LCDPort__5__HSIOM CYREG_HSIOM_PORT_SEL2
#define LCD_Char_LCDPort__5__HSIOM_MASK 0x0F000000u
#define LCD_Char_LCDPort__5__HSIOM_SHIFT 24u
#define LCD_Char_LCDPort__5__INTCFG CYREG_PRT2_INTCFG
#define LCD_Char_LCDPort__5__INTSTAT CYREG_PRT2_INTSTAT
#define LCD_Char_LCDPort__5__MASK 0x40u
#define LCD_Char_LCDPort__5__PA__CFG0 CYREG_UDB_PA2_CFG0
#define LCD_Char_LCDPort__5__PA__CFG1 CYREG_UDB_PA2_CFG1
#define LCD_Char_LCDPort__5__PA__CFG10 CYREG_UDB_PA2_CFG10
#define LCD_Char_LCDPort__5__PA__CFG11 CYREG_UDB_PA2_CFG11
#define LCD_Char_LCDPort__5__PA__CFG12 CYREG_UDB_PA2_CFG12
#define LCD_Char_LCDPort__5__PA__CFG13 CYREG_UDB_PA2_CFG13
#define LCD_Char_LCDPort__5__PA__CFG14 CYREG_UDB_PA2_CFG14
#define LCD_Char_LCDPort__5__PA__CFG2 CYREG_UDB_PA2_CFG2
#define LCD_Char_LCDPort__5__PA__CFG3 CYREG_UDB_PA2_CFG3
#define LCD_Char_LCDPort__5__PA__CFG4 CYREG_UDB_PA2_CFG4
#define LCD_Char_LCDPort__5__PA__CFG5 CYREG_UDB_PA2_CFG5
#define LCD_Char_LCDPort__5__PA__CFG6 CYREG_UDB_PA2_CFG6
#define LCD_Char_LCDPort__5__PA__CFG7 CYREG_UDB_PA2_CFG7
#define LCD_Char_LCDPort__5__PA__CFG8 CYREG_UDB_PA2_CFG8
#define LCD_Char_LCDPort__5__PA__CFG9 CYREG_UDB_PA2_CFG9
#define LCD_Char_LCDPort__5__PC CYREG_PRT2_PC
#define LCD_Char_LCDPort__5__PC2 CYREG_PRT2_PC2
#define LCD_Char_LCDPort__5__PORT 2u
#define LCD_Char_LCDPort__5__PS CYREG_PRT2_PS
#define LCD_Char_LCDPort__5__SHIFT 6
#define LCD_Char_LCDPort__6__DM__MASK 0xE00000u
#define LCD_Char_LCDPort__6__DM__SHIFT 21
#define LCD_Char_LCDPort__6__DR CYREG_PRT2_DR
#define LCD_Char_LCDPort__6__HSIOM CYREG_HSIOM_PORT_SEL2
#define LCD_Char_LCDPort__6__HSIOM_MASK 0xF0000000u
#define LCD_Char_LCDPort__6__HSIOM_SHIFT 28u
#define LCD_Char_LCDPort__6__INTCFG CYREG_PRT2_INTCFG
#define LCD_Char_LCDPort__6__INTSTAT CYREG_PRT2_INTSTAT
#define LCD_Char_LCDPort__6__MASK 0x80u
#define LCD_Char_LCDPort__6__PA__CFG0 CYREG_UDB_PA2_CFG0
#define LCD_Char_LCDPort__6__PA__CFG1 CYREG_UDB_PA2_CFG1
#define LCD_Char_LCDPort__6__PA__CFG10 CYREG_UDB_PA2_CFG10
#define LCD_Char_LCDPort__6__PA__CFG11 CYREG_UDB_PA2_CFG11
#define LCD_Char_LCDPort__6__PA__CFG12 CYREG_UDB_PA2_CFG12
#define LCD_Char_LCDPort__6__PA__CFG13 CYREG_UDB_PA2_CFG13
#define LCD_Char_LCDPort__6__PA__CFG14 CYREG_UDB_PA2_CFG14
#define LCD_Char_LCDPort__6__PA__CFG2 CYREG_UDB_PA2_CFG2
#define LCD_Char_LCDPort__6__PA__CFG3 CYREG_UDB_PA2_CFG3
#define LCD_Char_LCDPort__6__PA__CFG4 CYREG_UDB_PA2_CFG4
#define LCD_Char_LCDPort__6__PA__CFG5 CYREG_UDB_PA2_CFG5
#define LCD_Char_LCDPort__6__PA__CFG6 CYREG_UDB_PA2_CFG6
#define LCD_Char_LCDPort__6__PA__CFG7 CYREG_UDB_PA2_CFG7
#define LCD_Char_LCDPort__6__PA__CFG8 CYREG_UDB_PA2_CFG8
#define LCD_Char_LCDPort__6__PA__CFG9 CYREG_UDB_PA2_CFG9
#define LCD_Char_LCDPort__6__PC CYREG_PRT2_PC
#define LCD_Char_LCDPort__6__PC2 CYREG_PRT2_PC2
#define LCD_Char_LCDPort__6__PORT 2u
#define LCD_Char_LCDPort__6__PS CYREG_PRT2_PS
#define LCD_Char_LCDPort__6__SHIFT 7
#define LCD_Char_LCDPort__DR CYREG_PRT2_DR
#define LCD_Char_LCDPort__INTCFG CYREG_PRT2_INTCFG
#define LCD_Char_LCDPort__INTSTAT CYREG_PRT2_INTSTAT
#define LCD_Char_LCDPort__MASK 0xFEu
#define LCD_Char_LCDPort__PA__CFG0 CYREG_UDB_PA2_CFG0
#define LCD_Char_LCDPort__PA__CFG1 CYREG_UDB_PA2_CFG1
#define LCD_Char_LCDPort__PA__CFG10 CYREG_UDB_PA2_CFG10
#define LCD_Char_LCDPort__PA__CFG11 CYREG_UDB_PA2_CFG11
#define LCD_Char_LCDPort__PA__CFG12 CYREG_UDB_PA2_CFG12
#define LCD_Char_LCDPort__PA__CFG13 CYREG_UDB_PA2_CFG13
#define LCD_Char_LCDPort__PA__CFG14 CYREG_UDB_PA2_CFG14
#define LCD_Char_LCDPort__PA__CFG2 CYREG_UDB_PA2_CFG2
#define LCD_Char_LCDPort__PA__CFG3 CYREG_UDB_PA2_CFG3
#define LCD_Char_LCDPort__PA__CFG4 CYREG_UDB_PA2_CFG4
#define LCD_Char_LCDPort__PA__CFG5 CYREG_UDB_PA2_CFG5
#define LCD_Char_LCDPort__PA__CFG6 CYREG_UDB_PA2_CFG6
#define LCD_Char_LCDPort__PA__CFG7 CYREG_UDB_PA2_CFG7
#define LCD_Char_LCDPort__PA__CFG8 CYREG_UDB_PA2_CFG8
#define LCD_Char_LCDPort__PA__CFG9 CYREG_UDB_PA2_CFG9
#define LCD_Char_LCDPort__PC CYREG_PRT2_PC
#define LCD_Char_LCDPort__PC2 CYREG_PRT2_PC2
#define LCD_Char_LCDPort__PORT 2u
#define LCD_Char_LCDPort__PS CYREG_PRT2_PS
#define LCD_Char_LCDPort__SHIFT 1

/* PWM_Timer_PWMUDB */
#define PWM_Timer_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG CYREG_UDB_W16_ACTL_02
#define PWM_Timer_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG CYREG_UDB_W16_CTL_02
#define PWM_Timer_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG CYREG_UDB_W16_CTL_02
#define PWM_Timer_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG CYREG_UDB_W16_CTL_02
#define PWM_Timer_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG CYREG_UDB_W16_CTL_02
#define PWM_Timer_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG CYREG_UDB_W16_MSK_02
#define PWM_Timer_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG CYREG_UDB_W16_MSK_02
#define PWM_Timer_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG CYREG_UDB_W16_MSK_02
#define PWM_Timer_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG CYREG_UDB_W16_MSK_02
#define PWM_Timer_PWMUDB_genblk1_ctrlreg__7__MASK 0x80u
#define PWM_Timer_PWMUDB_genblk1_ctrlreg__7__POS 7
#define PWM_Timer_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG CYREG_UDB_W8_ACTL_02
#define PWM_Timer_PWMUDB_genblk1_ctrlreg__CONTROL_REG CYREG_UDB_W8_CTL_02
#define PWM_Timer_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG CYREG_UDB_CAT16_CTL_ST_02
#define PWM_Timer_PWMUDB_genblk1_ctrlreg__COUNT_REG CYREG_UDB_W8_CTL_02
#define PWM_Timer_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG CYREG_UDB_CAT16_CTL_ST_02
#define PWM_Timer_PWMUDB_genblk1_ctrlreg__MASK 0x80u
#define PWM_Timer_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_02
#define PWM_Timer_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_02
#define PWM_Timer_PWMUDB_genblk1_ctrlreg__PERIOD_REG CYREG_UDB_W8_MSK_02
#define PWM_Timer_PWMUDB_genblk8_stsreg__0__MASK 0x01u
#define PWM_Timer_PWMUDB_genblk8_stsreg__0__POS 0
#define PWM_Timer_PWMUDB_genblk8_stsreg__2__MASK 0x04u
#define PWM_Timer_PWMUDB_genblk8_stsreg__2__POS 2
#define PWM_Timer_PWMUDB_genblk8_stsreg__3__MASK 0x08u
#define PWM_Timer_PWMUDB_genblk8_stsreg__3__POS 3
#define PWM_Timer_PWMUDB_genblk8_stsreg__MASK 0x0Du
#define PWM_Timer_PWMUDB_genblk8_stsreg__MASK_REG CYREG_UDB_W8_MSK_03
#define PWM_Timer_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG CYREG_UDB_W8_ACTL_03
#define PWM_Timer_PWMUDB_genblk8_stsreg__STATUS_REG CYREG_UDB_W8_ST_03
#define PWM_Timer_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG CYREG_UDB_W16_A0_02
#define PWM_Timer_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG CYREG_UDB_W16_A1_02
#define PWM_Timer_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG CYREG_UDB_W16_D0_02
#define PWM_Timer_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG CYREG_UDB_W16_D1_02
#define PWM_Timer_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG CYREG_UDB_W16_ACTL_02
#define PWM_Timer_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG CYREG_UDB_W16_F0_02
#define PWM_Timer_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG CYREG_UDB_W16_F1_02
#define PWM_Timer_PWMUDB_sP16_pwmdp_u0__A0_A1_REG CYREG_UDB_CAT16_A_02
#define PWM_Timer_PWMUDB_sP16_pwmdp_u0__A0_REG CYREG_UDB_W8_A0_02
#define PWM_Timer_PWMUDB_sP16_pwmdp_u0__A1_REG CYREG_UDB_W8_A1_02
#define PWM_Timer_PWMUDB_sP16_pwmdp_u0__D0_D1_REG CYREG_UDB_CAT16_D_02
#define PWM_Timer_PWMUDB_sP16_pwmdp_u0__D0_REG CYREG_UDB_W8_D0_02
#define PWM_Timer_PWMUDB_sP16_pwmdp_u0__D1_REG CYREG_UDB_W8_D1_02
#define PWM_Timer_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG CYREG_UDB_W8_ACTL_02
#define PWM_Timer_PWMUDB_sP16_pwmdp_u0__F0_F1_REG CYREG_UDB_CAT16_F_02
#define PWM_Timer_PWMUDB_sP16_pwmdp_u0__F0_REG CYREG_UDB_W8_F0_02
#define PWM_Timer_PWMUDB_sP16_pwmdp_u0__F1_REG CYREG_UDB_W8_F1_02
#define PWM_Timer_PWMUDB_sP16_pwmdp_u0__MSK_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_02
#define PWM_Timer_PWMUDB_sP16_pwmdp_u0__PER_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_02
#define PWM_Timer_PWMUDB_sP16_pwmdp_u1__A0_A1_REG CYREG_UDB_CAT16_A_03
#define PWM_Timer_PWMUDB_sP16_pwmdp_u1__A0_REG CYREG_UDB_W8_A0_03
#define PWM_Timer_PWMUDB_sP16_pwmdp_u1__A1_REG CYREG_UDB_W8_A1_03
#define PWM_Timer_PWMUDB_sP16_pwmdp_u1__D0_D1_REG CYREG_UDB_CAT16_D_03
#define PWM_Timer_PWMUDB_sP16_pwmdp_u1__D0_REG CYREG_UDB_W8_D0_03
#define PWM_Timer_PWMUDB_sP16_pwmdp_u1__D1_REG CYREG_UDB_W8_D1_03
#define PWM_Timer_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG CYREG_UDB_W8_ACTL_03
#define PWM_Timer_PWMUDB_sP16_pwmdp_u1__F0_F1_REG CYREG_UDB_CAT16_F_03
#define PWM_Timer_PWMUDB_sP16_pwmdp_u1__F0_REG CYREG_UDB_W8_F0_03
#define PWM_Timer_PWMUDB_sP16_pwmdp_u1__F1_REG CYREG_UDB_W8_F1_03

/* Back_Light_On_N */
#define Back_Light_On_N__0__DM__MASK 0x1C0000u
#define Back_Light_On_N__0__DM__SHIFT 18
#define Back_Light_On_N__0__DR CYREG_PRT3_DR
#define Back_Light_On_N__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define Back_Light_On_N__0__HSIOM_MASK 0x0F000000u
#define Back_Light_On_N__0__HSIOM_SHIFT 24u
#define Back_Light_On_N__0__INTCFG CYREG_PRT3_INTCFG
#define Back_Light_On_N__0__INTSTAT CYREG_PRT3_INTSTAT
#define Back_Light_On_N__0__MASK 0x40u
#define Back_Light_On_N__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Back_Light_On_N__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Back_Light_On_N__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Back_Light_On_N__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Back_Light_On_N__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Back_Light_On_N__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Back_Light_On_N__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Back_Light_On_N__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Back_Light_On_N__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Back_Light_On_N__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Back_Light_On_N__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Back_Light_On_N__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Back_Light_On_N__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Back_Light_On_N__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Back_Light_On_N__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Back_Light_On_N__0__PC CYREG_PRT3_PC
#define Back_Light_On_N__0__PC2 CYREG_PRT3_PC2
#define Back_Light_On_N__0__PORT 3u
#define Back_Light_On_N__0__PS CYREG_PRT3_PS
#define Back_Light_On_N__0__SHIFT 6
#define Back_Light_On_N__DR CYREG_PRT3_DR
#define Back_Light_On_N__INTCFG CYREG_PRT3_INTCFG
#define Back_Light_On_N__INTSTAT CYREG_PRT3_INTSTAT
#define Back_Light_On_N__MASK 0x40u
#define Back_Light_On_N__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Back_Light_On_N__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Back_Light_On_N__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Back_Light_On_N__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Back_Light_On_N__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Back_Light_On_N__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Back_Light_On_N__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Back_Light_On_N__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Back_Light_On_N__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Back_Light_On_N__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Back_Light_On_N__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Back_Light_On_N__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Back_Light_On_N__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Back_Light_On_N__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Back_Light_On_N__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Back_Light_On_N__PC CYREG_PRT3_PC
#define Back_Light_On_N__PC2 CYREG_PRT3_PC2
#define Back_Light_On_N__PORT 3u
#define Back_Light_On_N__PS CYREG_PRT3_PS
#define Back_Light_On_N__SHIFT 6

/* Back_Light_On_P */
#define Back_Light_On_P__0__DM__MASK 0x38000u
#define Back_Light_On_P__0__DM__SHIFT 15
#define Back_Light_On_P__0__DR CYREG_PRT3_DR
#define Back_Light_On_P__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define Back_Light_On_P__0__HSIOM_MASK 0x00F00000u
#define Back_Light_On_P__0__HSIOM_SHIFT 20u
#define Back_Light_On_P__0__INTCFG CYREG_PRT3_INTCFG
#define Back_Light_On_P__0__INTSTAT CYREG_PRT3_INTSTAT
#define Back_Light_On_P__0__MASK 0x20u
#define Back_Light_On_P__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Back_Light_On_P__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Back_Light_On_P__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Back_Light_On_P__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Back_Light_On_P__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Back_Light_On_P__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Back_Light_On_P__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Back_Light_On_P__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Back_Light_On_P__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Back_Light_On_P__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Back_Light_On_P__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Back_Light_On_P__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Back_Light_On_P__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Back_Light_On_P__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Back_Light_On_P__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Back_Light_On_P__0__PC CYREG_PRT3_PC
#define Back_Light_On_P__0__PC2 CYREG_PRT3_PC2
#define Back_Light_On_P__0__PORT 3u
#define Back_Light_On_P__0__PS CYREG_PRT3_PS
#define Back_Light_On_P__0__SHIFT 5
#define Back_Light_On_P__DR CYREG_PRT3_DR
#define Back_Light_On_P__INTCFG CYREG_PRT3_INTCFG
#define Back_Light_On_P__INTSTAT CYREG_PRT3_INTSTAT
#define Back_Light_On_P__MASK 0x20u
#define Back_Light_On_P__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Back_Light_On_P__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Back_Light_On_P__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Back_Light_On_P__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Back_Light_On_P__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Back_Light_On_P__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Back_Light_On_P__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Back_Light_On_P__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Back_Light_On_P__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Back_Light_On_P__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Back_Light_On_P__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Back_Light_On_P__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Back_Light_On_P__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Back_Light_On_P__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Back_Light_On_P__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Back_Light_On_P__PC CYREG_PRT3_PC
#define Back_Light_On_P__PC2 CYREG_PRT3_PC2
#define Back_Light_On_P__PORT 3u
#define Back_Light_On_P__PS CYREG_PRT3_PS
#define Back_Light_On_P__SHIFT 5

/* Power_Up_LCD_Pin_1 */
#define Power_Up_LCD_Pin_1__0__DM__MASK 0x07u
#define Power_Up_LCD_Pin_1__0__DM__SHIFT 0
#define Power_Up_LCD_Pin_1__0__DR CYREG_PRT2_DR
#define Power_Up_LCD_Pin_1__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define Power_Up_LCD_Pin_1__0__HSIOM_MASK 0x0000000Fu
#define Power_Up_LCD_Pin_1__0__HSIOM_SHIFT 0u
#define Power_Up_LCD_Pin_1__0__INTCFG CYREG_PRT2_INTCFG
#define Power_Up_LCD_Pin_1__0__INTSTAT CYREG_PRT2_INTSTAT
#define Power_Up_LCD_Pin_1__0__MASK 0x01u
#define Power_Up_LCD_Pin_1__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define Power_Up_LCD_Pin_1__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define Power_Up_LCD_Pin_1__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define Power_Up_LCD_Pin_1__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define Power_Up_LCD_Pin_1__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define Power_Up_LCD_Pin_1__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define Power_Up_LCD_Pin_1__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define Power_Up_LCD_Pin_1__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define Power_Up_LCD_Pin_1__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define Power_Up_LCD_Pin_1__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define Power_Up_LCD_Pin_1__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define Power_Up_LCD_Pin_1__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define Power_Up_LCD_Pin_1__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define Power_Up_LCD_Pin_1__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define Power_Up_LCD_Pin_1__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define Power_Up_LCD_Pin_1__0__PC CYREG_PRT2_PC
#define Power_Up_LCD_Pin_1__0__PC2 CYREG_PRT2_PC2
#define Power_Up_LCD_Pin_1__0__PORT 2u
#define Power_Up_LCD_Pin_1__0__PS CYREG_PRT2_PS
#define Power_Up_LCD_Pin_1__0__SHIFT 0
#define Power_Up_LCD_Pin_1__DR CYREG_PRT2_DR
#define Power_Up_LCD_Pin_1__INTCFG CYREG_PRT2_INTCFG
#define Power_Up_LCD_Pin_1__INTSTAT CYREG_PRT2_INTSTAT
#define Power_Up_LCD_Pin_1__MASK 0x01u
#define Power_Up_LCD_Pin_1__PA__CFG0 CYREG_UDB_PA2_CFG0
#define Power_Up_LCD_Pin_1__PA__CFG1 CYREG_UDB_PA2_CFG1
#define Power_Up_LCD_Pin_1__PA__CFG10 CYREG_UDB_PA2_CFG10
#define Power_Up_LCD_Pin_1__PA__CFG11 CYREG_UDB_PA2_CFG11
#define Power_Up_LCD_Pin_1__PA__CFG12 CYREG_UDB_PA2_CFG12
#define Power_Up_LCD_Pin_1__PA__CFG13 CYREG_UDB_PA2_CFG13
#define Power_Up_LCD_Pin_1__PA__CFG14 CYREG_UDB_PA2_CFG14
#define Power_Up_LCD_Pin_1__PA__CFG2 CYREG_UDB_PA2_CFG2
#define Power_Up_LCD_Pin_1__PA__CFG3 CYREG_UDB_PA2_CFG3
#define Power_Up_LCD_Pin_1__PA__CFG4 CYREG_UDB_PA2_CFG4
#define Power_Up_LCD_Pin_1__PA__CFG5 CYREG_UDB_PA2_CFG5
#define Power_Up_LCD_Pin_1__PA__CFG6 CYREG_UDB_PA2_CFG6
#define Power_Up_LCD_Pin_1__PA__CFG7 CYREG_UDB_PA2_CFG7
#define Power_Up_LCD_Pin_1__PA__CFG8 CYREG_UDB_PA2_CFG8
#define Power_Up_LCD_Pin_1__PA__CFG9 CYREG_UDB_PA2_CFG9
#define Power_Up_LCD_Pin_1__PC CYREG_PRT2_PC
#define Power_Up_LCD_Pin_1__PC2 CYREG_PRT2_PC2
#define Power_Up_LCD_Pin_1__PORT 2u
#define Power_Up_LCD_Pin_1__PS CYREG_PRT2_PS
#define Power_Up_LCD_Pin_1__SHIFT 0

/* Miscellaneous */
#define CY_VERSION "PSoC Creator  3.1 SP1"
#define CYDEV_BCLK__HFCLK__HZ 24000000U
#define CYDEV_BCLK__HFCLK__KHZ 24000U
#define CYDEV_BCLK__HFCLK__MHZ 24U
#define CYDEV_BCLK__SYSCLK__HZ 24000000U
#define CYDEV_BCLK__SYSCLK__KHZ 24000U
#define CYDEV_BCLK__SYSCLK__MHZ 24U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 6u
#define CYDEV_CHIP_DIE_PSOC4A 3u
#define CYDEV_CHIP_DIE_PSOC5LP 5u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x04C81193u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 3u
#define CYDEV_CHIP_MEMBER_4D 2u
#define CYDEV_CHIP_MEMBER_4F 4u
#define CYDEV_CHIP_MEMBER_5A 6u
#define CYDEV_CHIP_MEMBER_5B 5u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4A
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
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4A_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_PROJ_TYPE 2
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0400
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYIPBLOCK_M0S8_CTBM_VERSION 0
#define CYIPBLOCK_m0s8cpuss_VERSION 0
#define CYIPBLOCK_m0s8csd_VERSION 0
#define CYIPBLOCK_m0s8gpio2_VERSION 0
#define CYIPBLOCK_m0s8hsiom4a_VERSION 0
#define CYIPBLOCK_m0s8lcd_VERSION 0
#define CYIPBLOCK_m0s8lpcomp_VERSION 0
#define CYIPBLOCK_m0s8pclk_VERSION 0
#define CYIPBLOCK_m0s8sar_VERSION 0
#define CYIPBLOCK_m0s8scb_VERSION 0
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 0
#define CYIPBLOCK_m0s8udbif_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 2
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
