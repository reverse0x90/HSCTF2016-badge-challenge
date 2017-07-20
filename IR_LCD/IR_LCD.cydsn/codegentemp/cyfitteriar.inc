#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar_trm.inc

/* LED */
LED__0__DM__MASK EQU 0x1C0000
LED__0__DM__SHIFT EQU 18
LED__0__DR EQU CYREG_PRT1_DR
LED__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
LED__0__HSIOM_MASK EQU 0x0F000000
LED__0__HSIOM_SHIFT EQU 24
LED__0__INTCFG EQU CYREG_PRT1_INTCFG
LED__0__INTSTAT EQU CYREG_PRT1_INTSTAT
LED__0__MASK EQU 0x40
LED__0__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
LED__0__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
LED__0__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
LED__0__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
LED__0__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
LED__0__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
LED__0__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
LED__0__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
LED__0__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
LED__0__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
LED__0__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
LED__0__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
LED__0__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
LED__0__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
LED__0__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
LED__0__PC EQU CYREG_PRT1_PC
LED__0__PC2 EQU CYREG_PRT1_PC2
LED__0__PORT EQU 1
LED__0__PS EQU CYREG_PRT1_PS
LED__0__SHIFT EQU 6
LED__DR EQU CYREG_PRT1_DR
LED__INTCFG EQU CYREG_PRT1_INTCFG
LED__INTSTAT EQU CYREG_PRT1_INTSTAT
LED__MASK EQU 0x40
LED__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
LED__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
LED__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
LED__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
LED__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
LED__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
LED__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
LED__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
LED__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
LED__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
LED__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
LED__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
LED__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
LED__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
LED__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
LED__PC EQU CYREG_PRT1_PC
LED__PC2 EQU CYREG_PRT1_PC2
LED__PORT EQU 1
LED__PS EQU CYREG_PRT1_PS
LED__SHIFT EQU 6

/* IR_Int */
IR_Int__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
IR_Int__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
IR_Int__INTC_MASK EQU 0x02
IR_Int__INTC_NUMBER EQU 1
IR_Int__INTC_PRIOR_MASK EQU 0xC000
IR_Int__INTC_PRIOR_NUM EQU 3
IR_Int__INTC_PRIOR_REG EQU CYREG_CM0_IPR0
IR_Int__INTC_SET_EN_REG EQU CYREG_CM0_ISER
IR_Int__INTC_SET_PD_REG EQU CYREG_CM0_ISPR

/* IR_REC */
IR_REC__0__DM__MASK EQU 0xE00
IR_REC__0__DM__SHIFT EQU 9
IR_REC__0__DR EQU CYREG_PRT1_DR
IR_REC__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
IR_REC__0__HSIOM_MASK EQU 0x0000F000
IR_REC__0__HSIOM_SHIFT EQU 12
IR_REC__0__INTCFG EQU CYREG_PRT1_INTCFG
IR_REC__0__INTSTAT EQU CYREG_PRT1_INTSTAT
IR_REC__0__MASK EQU 0x08
IR_REC__0__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
IR_REC__0__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
IR_REC__0__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
IR_REC__0__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
IR_REC__0__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
IR_REC__0__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
IR_REC__0__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
IR_REC__0__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
IR_REC__0__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
IR_REC__0__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
IR_REC__0__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
IR_REC__0__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
IR_REC__0__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
IR_REC__0__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
IR_REC__0__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
IR_REC__0__PC EQU CYREG_PRT1_PC
IR_REC__0__PC2 EQU CYREG_PRT1_PC2
IR_REC__0__PORT EQU 1
IR_REC__0__PS EQU CYREG_PRT1_PS
IR_REC__0__SHIFT EQU 3
IR_REC__DR EQU CYREG_PRT1_DR
IR_REC__INTCFG EQU CYREG_PRT1_INTCFG
IR_REC__INTSTAT EQU CYREG_PRT1_INTSTAT
IR_REC__MASK EQU 0x08
IR_REC__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
IR_REC__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
IR_REC__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
IR_REC__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
IR_REC__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
IR_REC__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
IR_REC__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
IR_REC__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
IR_REC__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
IR_REC__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
IR_REC__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
IR_REC__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
IR_REC__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
IR_REC__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
IR_REC__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
IR_REC__PC EQU CYREG_PRT1_PC
IR_REC__PC2 EQU CYREG_PRT1_PC2
IR_REC__PORT EQU 1
IR_REC__PS EQU CYREG_PRT1_PS
IR_REC__SHIFT EQU 3
IR_REC__SNAP EQU CYREG_PRT1_INTSTAT

/* Clock_1 */
Clock_1__DIVIDER_MASK EQU 0x0000FFFF
Clock_1__ENABLE EQU CYREG_CLK_DIVIDER_A00
Clock_1__ENABLE_MASK EQU 0x80000000
Clock_1__MASK EQU 0x80000000
Clock_1__REGISTER EQU CYREG_CLK_DIVIDER_A00

/* PWM_Int */
PWM_Int__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
PWM_Int__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
PWM_Int__INTC_MASK EQU 0x01
PWM_Int__INTC_NUMBER EQU 0
PWM_Int__INTC_PRIOR_MASK EQU 0xC0
PWM_Int__INTC_PRIOR_NUM EQU 3
PWM_Int__INTC_PRIOR_REG EQU CYREG_CM0_IPR0
PWM_Int__INTC_SET_EN_REG EQU CYREG_CM0_ISER
PWM_Int__INTC_SET_PD_REG EQU CYREG_CM0_ISPR

/* LCD_Char_LCDPort */
LCD_Char_LCDPort__0__DM__MASK EQU 0x38
LCD_Char_LCDPort__0__DM__SHIFT EQU 3
LCD_Char_LCDPort__0__DR EQU CYREG_PRT2_DR
LCD_Char_LCDPort__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
LCD_Char_LCDPort__0__HSIOM_MASK EQU 0x000000F0
LCD_Char_LCDPort__0__HSIOM_SHIFT EQU 4
LCD_Char_LCDPort__0__INTCFG EQU CYREG_PRT2_INTCFG
LCD_Char_LCDPort__0__INTSTAT EQU CYREG_PRT2_INTSTAT
LCD_Char_LCDPort__0__MASK EQU 0x02
LCD_Char_LCDPort__0__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
LCD_Char_LCDPort__0__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
LCD_Char_LCDPort__0__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
LCD_Char_LCDPort__0__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
LCD_Char_LCDPort__0__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
LCD_Char_LCDPort__0__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
LCD_Char_LCDPort__0__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
LCD_Char_LCDPort__0__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
LCD_Char_LCDPort__0__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
LCD_Char_LCDPort__0__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
LCD_Char_LCDPort__0__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
LCD_Char_LCDPort__0__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
LCD_Char_LCDPort__0__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
LCD_Char_LCDPort__0__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
LCD_Char_LCDPort__0__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
LCD_Char_LCDPort__0__PC EQU CYREG_PRT2_PC
LCD_Char_LCDPort__0__PC2 EQU CYREG_PRT2_PC2
LCD_Char_LCDPort__0__PORT EQU 2
LCD_Char_LCDPort__0__PS EQU CYREG_PRT2_PS
LCD_Char_LCDPort__0__SHIFT EQU 1
LCD_Char_LCDPort__1__DM__MASK EQU 0x1C0
LCD_Char_LCDPort__1__DM__SHIFT EQU 6
LCD_Char_LCDPort__1__DR EQU CYREG_PRT2_DR
LCD_Char_LCDPort__1__HSIOM EQU CYREG_HSIOM_PORT_SEL2
LCD_Char_LCDPort__1__HSIOM_MASK EQU 0x00000F00
LCD_Char_LCDPort__1__HSIOM_SHIFT EQU 8
LCD_Char_LCDPort__1__INTCFG EQU CYREG_PRT2_INTCFG
LCD_Char_LCDPort__1__INTSTAT EQU CYREG_PRT2_INTSTAT
LCD_Char_LCDPort__1__MASK EQU 0x04
LCD_Char_LCDPort__1__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
LCD_Char_LCDPort__1__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
LCD_Char_LCDPort__1__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
LCD_Char_LCDPort__1__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
LCD_Char_LCDPort__1__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
LCD_Char_LCDPort__1__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
LCD_Char_LCDPort__1__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
LCD_Char_LCDPort__1__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
LCD_Char_LCDPort__1__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
LCD_Char_LCDPort__1__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
LCD_Char_LCDPort__1__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
LCD_Char_LCDPort__1__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
LCD_Char_LCDPort__1__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
LCD_Char_LCDPort__1__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
LCD_Char_LCDPort__1__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
LCD_Char_LCDPort__1__PC EQU CYREG_PRT2_PC
LCD_Char_LCDPort__1__PC2 EQU CYREG_PRT2_PC2
LCD_Char_LCDPort__1__PORT EQU 2
LCD_Char_LCDPort__1__PS EQU CYREG_PRT2_PS
LCD_Char_LCDPort__1__SHIFT EQU 2
LCD_Char_LCDPort__2__DM__MASK EQU 0xE00
LCD_Char_LCDPort__2__DM__SHIFT EQU 9
LCD_Char_LCDPort__2__DR EQU CYREG_PRT2_DR
LCD_Char_LCDPort__2__HSIOM EQU CYREG_HSIOM_PORT_SEL2
LCD_Char_LCDPort__2__HSIOM_MASK EQU 0x0000F000
LCD_Char_LCDPort__2__HSIOM_SHIFT EQU 12
LCD_Char_LCDPort__2__INTCFG EQU CYREG_PRT2_INTCFG
LCD_Char_LCDPort__2__INTSTAT EQU CYREG_PRT2_INTSTAT
LCD_Char_LCDPort__2__MASK EQU 0x08
LCD_Char_LCDPort__2__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
LCD_Char_LCDPort__2__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
LCD_Char_LCDPort__2__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
LCD_Char_LCDPort__2__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
LCD_Char_LCDPort__2__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
LCD_Char_LCDPort__2__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
LCD_Char_LCDPort__2__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
LCD_Char_LCDPort__2__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
LCD_Char_LCDPort__2__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
LCD_Char_LCDPort__2__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
LCD_Char_LCDPort__2__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
LCD_Char_LCDPort__2__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
LCD_Char_LCDPort__2__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
LCD_Char_LCDPort__2__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
LCD_Char_LCDPort__2__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
LCD_Char_LCDPort__2__PC EQU CYREG_PRT2_PC
LCD_Char_LCDPort__2__PC2 EQU CYREG_PRT2_PC2
LCD_Char_LCDPort__2__PORT EQU 2
LCD_Char_LCDPort__2__PS EQU CYREG_PRT2_PS
LCD_Char_LCDPort__2__SHIFT EQU 3
LCD_Char_LCDPort__3__DM__MASK EQU 0x7000
LCD_Char_LCDPort__3__DM__SHIFT EQU 12
LCD_Char_LCDPort__3__DR EQU CYREG_PRT2_DR
LCD_Char_LCDPort__3__HSIOM EQU CYREG_HSIOM_PORT_SEL2
LCD_Char_LCDPort__3__HSIOM_MASK EQU 0x000F0000
LCD_Char_LCDPort__3__HSIOM_SHIFT EQU 16
LCD_Char_LCDPort__3__INTCFG EQU CYREG_PRT2_INTCFG
LCD_Char_LCDPort__3__INTSTAT EQU CYREG_PRT2_INTSTAT
LCD_Char_LCDPort__3__MASK EQU 0x10
LCD_Char_LCDPort__3__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
LCD_Char_LCDPort__3__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
LCD_Char_LCDPort__3__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
LCD_Char_LCDPort__3__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
LCD_Char_LCDPort__3__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
LCD_Char_LCDPort__3__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
LCD_Char_LCDPort__3__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
LCD_Char_LCDPort__3__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
LCD_Char_LCDPort__3__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
LCD_Char_LCDPort__3__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
LCD_Char_LCDPort__3__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
LCD_Char_LCDPort__3__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
LCD_Char_LCDPort__3__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
LCD_Char_LCDPort__3__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
LCD_Char_LCDPort__3__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
LCD_Char_LCDPort__3__PC EQU CYREG_PRT2_PC
LCD_Char_LCDPort__3__PC2 EQU CYREG_PRT2_PC2
LCD_Char_LCDPort__3__PORT EQU 2
LCD_Char_LCDPort__3__PS EQU CYREG_PRT2_PS
LCD_Char_LCDPort__3__SHIFT EQU 4
LCD_Char_LCDPort__4__DM__MASK EQU 0x38000
LCD_Char_LCDPort__4__DM__SHIFT EQU 15
LCD_Char_LCDPort__4__DR EQU CYREG_PRT2_DR
LCD_Char_LCDPort__4__HSIOM EQU CYREG_HSIOM_PORT_SEL2
LCD_Char_LCDPort__4__HSIOM_MASK EQU 0x00F00000
LCD_Char_LCDPort__4__HSIOM_SHIFT EQU 20
LCD_Char_LCDPort__4__INTCFG EQU CYREG_PRT2_INTCFG
LCD_Char_LCDPort__4__INTSTAT EQU CYREG_PRT2_INTSTAT
LCD_Char_LCDPort__4__MASK EQU 0x20
LCD_Char_LCDPort__4__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
LCD_Char_LCDPort__4__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
LCD_Char_LCDPort__4__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
LCD_Char_LCDPort__4__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
LCD_Char_LCDPort__4__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
LCD_Char_LCDPort__4__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
LCD_Char_LCDPort__4__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
LCD_Char_LCDPort__4__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
LCD_Char_LCDPort__4__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
LCD_Char_LCDPort__4__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
LCD_Char_LCDPort__4__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
LCD_Char_LCDPort__4__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
LCD_Char_LCDPort__4__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
LCD_Char_LCDPort__4__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
LCD_Char_LCDPort__4__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
LCD_Char_LCDPort__4__PC EQU CYREG_PRT2_PC
LCD_Char_LCDPort__4__PC2 EQU CYREG_PRT2_PC2
LCD_Char_LCDPort__4__PORT EQU 2
LCD_Char_LCDPort__4__PS EQU CYREG_PRT2_PS
LCD_Char_LCDPort__4__SHIFT EQU 5
LCD_Char_LCDPort__5__DM__MASK EQU 0x1C0000
LCD_Char_LCDPort__5__DM__SHIFT EQU 18
LCD_Char_LCDPort__5__DR EQU CYREG_PRT2_DR
LCD_Char_LCDPort__5__HSIOM EQU CYREG_HSIOM_PORT_SEL2
LCD_Char_LCDPort__5__HSIOM_MASK EQU 0x0F000000
LCD_Char_LCDPort__5__HSIOM_SHIFT EQU 24
LCD_Char_LCDPort__5__INTCFG EQU CYREG_PRT2_INTCFG
LCD_Char_LCDPort__5__INTSTAT EQU CYREG_PRT2_INTSTAT
LCD_Char_LCDPort__5__MASK EQU 0x40
LCD_Char_LCDPort__5__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
LCD_Char_LCDPort__5__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
LCD_Char_LCDPort__5__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
LCD_Char_LCDPort__5__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
LCD_Char_LCDPort__5__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
LCD_Char_LCDPort__5__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
LCD_Char_LCDPort__5__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
LCD_Char_LCDPort__5__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
LCD_Char_LCDPort__5__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
LCD_Char_LCDPort__5__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
LCD_Char_LCDPort__5__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
LCD_Char_LCDPort__5__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
LCD_Char_LCDPort__5__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
LCD_Char_LCDPort__5__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
LCD_Char_LCDPort__5__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
LCD_Char_LCDPort__5__PC EQU CYREG_PRT2_PC
LCD_Char_LCDPort__5__PC2 EQU CYREG_PRT2_PC2
LCD_Char_LCDPort__5__PORT EQU 2
LCD_Char_LCDPort__5__PS EQU CYREG_PRT2_PS
LCD_Char_LCDPort__5__SHIFT EQU 6
LCD_Char_LCDPort__6__DM__MASK EQU 0xE00000
LCD_Char_LCDPort__6__DM__SHIFT EQU 21
LCD_Char_LCDPort__6__DR EQU CYREG_PRT2_DR
LCD_Char_LCDPort__6__HSIOM EQU CYREG_HSIOM_PORT_SEL2
LCD_Char_LCDPort__6__HSIOM_MASK EQU 0xF0000000
LCD_Char_LCDPort__6__HSIOM_SHIFT EQU 28
LCD_Char_LCDPort__6__INTCFG EQU CYREG_PRT2_INTCFG
LCD_Char_LCDPort__6__INTSTAT EQU CYREG_PRT2_INTSTAT
LCD_Char_LCDPort__6__MASK EQU 0x80
LCD_Char_LCDPort__6__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
LCD_Char_LCDPort__6__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
LCD_Char_LCDPort__6__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
LCD_Char_LCDPort__6__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
LCD_Char_LCDPort__6__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
LCD_Char_LCDPort__6__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
LCD_Char_LCDPort__6__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
LCD_Char_LCDPort__6__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
LCD_Char_LCDPort__6__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
LCD_Char_LCDPort__6__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
LCD_Char_LCDPort__6__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
LCD_Char_LCDPort__6__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
LCD_Char_LCDPort__6__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
LCD_Char_LCDPort__6__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
LCD_Char_LCDPort__6__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
LCD_Char_LCDPort__6__PC EQU CYREG_PRT2_PC
LCD_Char_LCDPort__6__PC2 EQU CYREG_PRT2_PC2
LCD_Char_LCDPort__6__PORT EQU 2
LCD_Char_LCDPort__6__PS EQU CYREG_PRT2_PS
LCD_Char_LCDPort__6__SHIFT EQU 7
LCD_Char_LCDPort__DR EQU CYREG_PRT2_DR
LCD_Char_LCDPort__INTCFG EQU CYREG_PRT2_INTCFG
LCD_Char_LCDPort__INTSTAT EQU CYREG_PRT2_INTSTAT
LCD_Char_LCDPort__MASK EQU 0xFE
LCD_Char_LCDPort__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
LCD_Char_LCDPort__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
LCD_Char_LCDPort__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
LCD_Char_LCDPort__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
LCD_Char_LCDPort__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
LCD_Char_LCDPort__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
LCD_Char_LCDPort__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
LCD_Char_LCDPort__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
LCD_Char_LCDPort__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
LCD_Char_LCDPort__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
LCD_Char_LCDPort__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
LCD_Char_LCDPort__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
LCD_Char_LCDPort__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
LCD_Char_LCDPort__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
LCD_Char_LCDPort__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
LCD_Char_LCDPort__PC EQU CYREG_PRT2_PC
LCD_Char_LCDPort__PC2 EQU CYREG_PRT2_PC2
LCD_Char_LCDPort__PORT EQU 2
LCD_Char_LCDPort__PS EQU CYREG_PRT2_PS
LCD_Char_LCDPort__SHIFT EQU 1

/* PWM_Timer_PWMUDB */
PWM_Timer_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_02
PWM_Timer_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_UDB_W16_CTL_02
PWM_Timer_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_UDB_W16_CTL_02
PWM_Timer_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_UDB_W16_CTL_02
PWM_Timer_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_UDB_W16_CTL_02
PWM_Timer_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_UDB_W16_MSK_02
PWM_Timer_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_UDB_W16_MSK_02
PWM_Timer_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_UDB_W16_MSK_02
PWM_Timer_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_UDB_W16_MSK_02
PWM_Timer_PWMUDB_genblk1_ctrlreg__7__MASK EQU 0x80
PWM_Timer_PWMUDB_genblk1_ctrlreg__7__POS EQU 7
PWM_Timer_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_02
PWM_Timer_PWMUDB_genblk1_ctrlreg__CONTROL_REG EQU CYREG_UDB_W8_CTL_02
PWM_Timer_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG EQU CYREG_UDB_CAT16_CTL_ST_02
PWM_Timer_PWMUDB_genblk1_ctrlreg__COUNT_REG EQU CYREG_UDB_W8_CTL_02
PWM_Timer_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG EQU CYREG_UDB_CAT16_CTL_ST_02
PWM_Timer_PWMUDB_genblk1_ctrlreg__MASK EQU 0x80
PWM_Timer_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_02
PWM_Timer_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_02
PWM_Timer_PWMUDB_genblk1_ctrlreg__PERIOD_REG EQU CYREG_UDB_W8_MSK_02
PWM_Timer_PWMUDB_genblk8_stsreg__0__MASK EQU 0x01
PWM_Timer_PWMUDB_genblk8_stsreg__0__POS EQU 0
PWM_Timer_PWMUDB_genblk8_stsreg__2__MASK EQU 0x04
PWM_Timer_PWMUDB_genblk8_stsreg__2__POS EQU 2
PWM_Timer_PWMUDB_genblk8_stsreg__3__MASK EQU 0x08
PWM_Timer_PWMUDB_genblk8_stsreg__3__POS EQU 3
PWM_Timer_PWMUDB_genblk8_stsreg__MASK EQU 0x0D
PWM_Timer_PWMUDB_genblk8_stsreg__MASK_REG EQU CYREG_UDB_W8_MSK_03
PWM_Timer_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_03
PWM_Timer_PWMUDB_genblk8_stsreg__STATUS_REG EQU CYREG_UDB_W8_ST_03
PWM_Timer_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG EQU CYREG_UDB_W16_A0_02
PWM_Timer_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG EQU CYREG_UDB_W16_A1_02
PWM_Timer_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG EQU CYREG_UDB_W16_D0_02
PWM_Timer_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG EQU CYREG_UDB_W16_D1_02
PWM_Timer_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_02
PWM_Timer_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG EQU CYREG_UDB_W16_F0_02
PWM_Timer_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG EQU CYREG_UDB_W16_F1_02
PWM_Timer_PWMUDB_sP16_pwmdp_u0__A0_A1_REG EQU CYREG_UDB_CAT16_A_02
PWM_Timer_PWMUDB_sP16_pwmdp_u0__A0_REG EQU CYREG_UDB_W8_A0_02
PWM_Timer_PWMUDB_sP16_pwmdp_u0__A1_REG EQU CYREG_UDB_W8_A1_02
PWM_Timer_PWMUDB_sP16_pwmdp_u0__D0_D1_REG EQU CYREG_UDB_CAT16_D_02
PWM_Timer_PWMUDB_sP16_pwmdp_u0__D0_REG EQU CYREG_UDB_W8_D0_02
PWM_Timer_PWMUDB_sP16_pwmdp_u0__D1_REG EQU CYREG_UDB_W8_D1_02
PWM_Timer_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_02
PWM_Timer_PWMUDB_sP16_pwmdp_u0__F0_F1_REG EQU CYREG_UDB_CAT16_F_02
PWM_Timer_PWMUDB_sP16_pwmdp_u0__F0_REG EQU CYREG_UDB_W8_F0_02
PWM_Timer_PWMUDB_sP16_pwmdp_u0__F1_REG EQU CYREG_UDB_W8_F1_02
PWM_Timer_PWMUDB_sP16_pwmdp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_02
PWM_Timer_PWMUDB_sP16_pwmdp_u0__PER_DP_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_02
PWM_Timer_PWMUDB_sP16_pwmdp_u1__A0_A1_REG EQU CYREG_UDB_CAT16_A_03
PWM_Timer_PWMUDB_sP16_pwmdp_u1__A0_REG EQU CYREG_UDB_W8_A0_03
PWM_Timer_PWMUDB_sP16_pwmdp_u1__A1_REG EQU CYREG_UDB_W8_A1_03
PWM_Timer_PWMUDB_sP16_pwmdp_u1__D0_D1_REG EQU CYREG_UDB_CAT16_D_03
PWM_Timer_PWMUDB_sP16_pwmdp_u1__D0_REG EQU CYREG_UDB_W8_D0_03
PWM_Timer_PWMUDB_sP16_pwmdp_u1__D1_REG EQU CYREG_UDB_W8_D1_03
PWM_Timer_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_03
PWM_Timer_PWMUDB_sP16_pwmdp_u1__F0_F1_REG EQU CYREG_UDB_CAT16_F_03
PWM_Timer_PWMUDB_sP16_pwmdp_u1__F0_REG EQU CYREG_UDB_W8_F0_03
PWM_Timer_PWMUDB_sP16_pwmdp_u1__F1_REG EQU CYREG_UDB_W8_F1_03

/* Back_Light_On_N */
Back_Light_On_N__0__DM__MASK EQU 0x1C0000
Back_Light_On_N__0__DM__SHIFT EQU 18
Back_Light_On_N__0__DR EQU CYREG_PRT3_DR
Back_Light_On_N__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
Back_Light_On_N__0__HSIOM_MASK EQU 0x0F000000
Back_Light_On_N__0__HSIOM_SHIFT EQU 24
Back_Light_On_N__0__INTCFG EQU CYREG_PRT3_INTCFG
Back_Light_On_N__0__INTSTAT EQU CYREG_PRT3_INTSTAT
Back_Light_On_N__0__MASK EQU 0x40
Back_Light_On_N__0__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
Back_Light_On_N__0__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
Back_Light_On_N__0__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
Back_Light_On_N__0__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
Back_Light_On_N__0__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
Back_Light_On_N__0__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
Back_Light_On_N__0__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
Back_Light_On_N__0__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
Back_Light_On_N__0__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
Back_Light_On_N__0__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
Back_Light_On_N__0__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
Back_Light_On_N__0__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
Back_Light_On_N__0__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
Back_Light_On_N__0__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
Back_Light_On_N__0__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
Back_Light_On_N__0__PC EQU CYREG_PRT3_PC
Back_Light_On_N__0__PC2 EQU CYREG_PRT3_PC2
Back_Light_On_N__0__PORT EQU 3
Back_Light_On_N__0__PS EQU CYREG_PRT3_PS
Back_Light_On_N__0__SHIFT EQU 6
Back_Light_On_N__DR EQU CYREG_PRT3_DR
Back_Light_On_N__INTCFG EQU CYREG_PRT3_INTCFG
Back_Light_On_N__INTSTAT EQU CYREG_PRT3_INTSTAT
Back_Light_On_N__MASK EQU 0x40
Back_Light_On_N__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
Back_Light_On_N__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
Back_Light_On_N__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
Back_Light_On_N__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
Back_Light_On_N__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
Back_Light_On_N__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
Back_Light_On_N__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
Back_Light_On_N__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
Back_Light_On_N__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
Back_Light_On_N__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
Back_Light_On_N__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
Back_Light_On_N__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
Back_Light_On_N__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
Back_Light_On_N__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
Back_Light_On_N__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
Back_Light_On_N__PC EQU CYREG_PRT3_PC
Back_Light_On_N__PC2 EQU CYREG_PRT3_PC2
Back_Light_On_N__PORT EQU 3
Back_Light_On_N__PS EQU CYREG_PRT3_PS
Back_Light_On_N__SHIFT EQU 6

/* Back_Light_On_P */
Back_Light_On_P__0__DM__MASK EQU 0x38000
Back_Light_On_P__0__DM__SHIFT EQU 15
Back_Light_On_P__0__DR EQU CYREG_PRT3_DR
Back_Light_On_P__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
Back_Light_On_P__0__HSIOM_MASK EQU 0x00F00000
Back_Light_On_P__0__HSIOM_SHIFT EQU 20
Back_Light_On_P__0__INTCFG EQU CYREG_PRT3_INTCFG
Back_Light_On_P__0__INTSTAT EQU CYREG_PRT3_INTSTAT
Back_Light_On_P__0__MASK EQU 0x20
Back_Light_On_P__0__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
Back_Light_On_P__0__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
Back_Light_On_P__0__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
Back_Light_On_P__0__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
Back_Light_On_P__0__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
Back_Light_On_P__0__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
Back_Light_On_P__0__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
Back_Light_On_P__0__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
Back_Light_On_P__0__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
Back_Light_On_P__0__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
Back_Light_On_P__0__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
Back_Light_On_P__0__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
Back_Light_On_P__0__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
Back_Light_On_P__0__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
Back_Light_On_P__0__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
Back_Light_On_P__0__PC EQU CYREG_PRT3_PC
Back_Light_On_P__0__PC2 EQU CYREG_PRT3_PC2
Back_Light_On_P__0__PORT EQU 3
Back_Light_On_P__0__PS EQU CYREG_PRT3_PS
Back_Light_On_P__0__SHIFT EQU 5
Back_Light_On_P__DR EQU CYREG_PRT3_DR
Back_Light_On_P__INTCFG EQU CYREG_PRT3_INTCFG
Back_Light_On_P__INTSTAT EQU CYREG_PRT3_INTSTAT
Back_Light_On_P__MASK EQU 0x20
Back_Light_On_P__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
Back_Light_On_P__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
Back_Light_On_P__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
Back_Light_On_P__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
Back_Light_On_P__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
Back_Light_On_P__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
Back_Light_On_P__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
Back_Light_On_P__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
Back_Light_On_P__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
Back_Light_On_P__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
Back_Light_On_P__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
Back_Light_On_P__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
Back_Light_On_P__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
Back_Light_On_P__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
Back_Light_On_P__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
Back_Light_On_P__PC EQU CYREG_PRT3_PC
Back_Light_On_P__PC2 EQU CYREG_PRT3_PC2
Back_Light_On_P__PORT EQU 3
Back_Light_On_P__PS EQU CYREG_PRT3_PS
Back_Light_On_P__SHIFT EQU 5

/* Power_Up_LCD_Pin_1 */
Power_Up_LCD_Pin_1__0__DM__MASK EQU 0x07
Power_Up_LCD_Pin_1__0__DM__SHIFT EQU 0
Power_Up_LCD_Pin_1__0__DR EQU CYREG_PRT2_DR
Power_Up_LCD_Pin_1__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
Power_Up_LCD_Pin_1__0__HSIOM_MASK EQU 0x0000000F
Power_Up_LCD_Pin_1__0__HSIOM_SHIFT EQU 0
Power_Up_LCD_Pin_1__0__INTCFG EQU CYREG_PRT2_INTCFG
Power_Up_LCD_Pin_1__0__INTSTAT EQU CYREG_PRT2_INTSTAT
Power_Up_LCD_Pin_1__0__MASK EQU 0x01
Power_Up_LCD_Pin_1__0__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
Power_Up_LCD_Pin_1__0__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
Power_Up_LCD_Pin_1__0__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
Power_Up_LCD_Pin_1__0__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
Power_Up_LCD_Pin_1__0__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
Power_Up_LCD_Pin_1__0__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
Power_Up_LCD_Pin_1__0__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
Power_Up_LCD_Pin_1__0__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
Power_Up_LCD_Pin_1__0__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
Power_Up_LCD_Pin_1__0__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
Power_Up_LCD_Pin_1__0__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
Power_Up_LCD_Pin_1__0__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
Power_Up_LCD_Pin_1__0__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
Power_Up_LCD_Pin_1__0__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
Power_Up_LCD_Pin_1__0__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
Power_Up_LCD_Pin_1__0__PC EQU CYREG_PRT2_PC
Power_Up_LCD_Pin_1__0__PC2 EQU CYREG_PRT2_PC2
Power_Up_LCD_Pin_1__0__PORT EQU 2
Power_Up_LCD_Pin_1__0__PS EQU CYREG_PRT2_PS
Power_Up_LCD_Pin_1__0__SHIFT EQU 0
Power_Up_LCD_Pin_1__DR EQU CYREG_PRT2_DR
Power_Up_LCD_Pin_1__INTCFG EQU CYREG_PRT2_INTCFG
Power_Up_LCD_Pin_1__INTSTAT EQU CYREG_PRT2_INTSTAT
Power_Up_LCD_Pin_1__MASK EQU 0x01
Power_Up_LCD_Pin_1__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
Power_Up_LCD_Pin_1__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
Power_Up_LCD_Pin_1__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
Power_Up_LCD_Pin_1__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
Power_Up_LCD_Pin_1__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
Power_Up_LCD_Pin_1__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
Power_Up_LCD_Pin_1__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
Power_Up_LCD_Pin_1__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
Power_Up_LCD_Pin_1__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
Power_Up_LCD_Pin_1__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
Power_Up_LCD_Pin_1__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
Power_Up_LCD_Pin_1__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
Power_Up_LCD_Pin_1__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
Power_Up_LCD_Pin_1__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
Power_Up_LCD_Pin_1__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
Power_Up_LCD_Pin_1__PC EQU CYREG_PRT2_PC
Power_Up_LCD_Pin_1__PC2 EQU CYREG_PRT2_PC2
Power_Up_LCD_Pin_1__PORT EQU 2
Power_Up_LCD_Pin_1__PS EQU CYREG_PRT2_PS
Power_Up_LCD_Pin_1__SHIFT EQU 0

/* Miscellaneous */
CYDEV_BCLK__HFCLK__HZ EQU 24000000
CYDEV_BCLK__HFCLK__KHZ EQU 24000
CYDEV_BCLK__HFCLK__MHZ EQU 24
CYDEV_BCLK__SYSCLK__HZ EQU 24000000
CYDEV_BCLK__SYSCLK__KHZ EQU 24000
CYDEV_BCLK__SYSCLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 6
CYDEV_CHIP_DIE_PSOC4A EQU 3
CYDEV_CHIP_DIE_PSOC5LP EQU 5
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC4
CYDEV_CHIP_JTAG_ID EQU 0x04C81193
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 3
CYDEV_CHIP_MEMBER_4D EQU 2
CYDEV_CHIP_MEMBER_4F EQU 4
CYDEV_CHIP_MEMBER_5A EQU 6
CYDEV_CHIP_MEMBER_5B EQU 5
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_4A
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_4A_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_READ_ACCELERATOR EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_PROTECT_KILL EQU 4
CYDEV_DEBUG_PROTECT_OPEN EQU 1
CYDEV_DEBUG_PROTECT EQU CYDEV_DEBUG_PROTECT_OPEN
CYDEV_DEBUG_PROTECT_PROTECTED EQU 2
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_PROJ_TYPE EQU 2
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_STACK_SIZE EQU 0x0400
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD_MV EQU 3300
CYIPBLOCK_M0S8_CTBM_VERSION EQU 0
CYIPBLOCK_m0s8cpuss_VERSION EQU 0
CYIPBLOCK_m0s8csd_VERSION EQU 0
CYIPBLOCK_m0s8gpio2_VERSION EQU 0
CYIPBLOCK_m0s8hsiom4a_VERSION EQU 0
CYIPBLOCK_m0s8lcd_VERSION EQU 0
CYIPBLOCK_m0s8lpcomp_VERSION EQU 0
CYIPBLOCK_m0s8pclk_VERSION EQU 0
CYIPBLOCK_m0s8sar_VERSION EQU 0
CYIPBLOCK_m0s8scb_VERSION EQU 0
CYIPBLOCK_m0s8srssv2_VERSION EQU 1
CYIPBLOCK_m0s8tcpwm_VERSION EQU 0
CYIPBLOCK_m0s8udbif_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 2
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */