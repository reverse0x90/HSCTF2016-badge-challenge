/*******************************************************************************
* File Name: Power_Up_LCD_Pin_1.h  
* Version 2.5
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

#if !defined(CY_PINS_Power_Up_LCD_Pin_1_H) /* Pins Power_Up_LCD_Pin_1_H */
#define CY_PINS_Power_Up_LCD_Pin_1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Power_Up_LCD_Pin_1_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Power_Up_LCD_Pin_1_Write(uint8 value) ;
void    Power_Up_LCD_Pin_1_SetDriveMode(uint8 mode) ;
uint8   Power_Up_LCD_Pin_1_ReadDataReg(void) ;
uint8   Power_Up_LCD_Pin_1_Read(void) ;
uint8   Power_Up_LCD_Pin_1_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Power_Up_LCD_Pin_1_DRIVE_MODE_BITS        (3)
#define Power_Up_LCD_Pin_1_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Power_Up_LCD_Pin_1_DRIVE_MODE_BITS))
#define Power_Up_LCD_Pin_1_DRIVE_MODE_SHIFT       (0x00u)
#define Power_Up_LCD_Pin_1_DRIVE_MODE_MASK        (0x07u << Power_Up_LCD_Pin_1_DRIVE_MODE_SHIFT)

#define Power_Up_LCD_Pin_1_DM_ALG_HIZ         (0x00u << Power_Up_LCD_Pin_1_DRIVE_MODE_SHIFT)
#define Power_Up_LCD_Pin_1_DM_DIG_HIZ         (0x01u << Power_Up_LCD_Pin_1_DRIVE_MODE_SHIFT)
#define Power_Up_LCD_Pin_1_DM_RES_UP          (0x02u << Power_Up_LCD_Pin_1_DRIVE_MODE_SHIFT)
#define Power_Up_LCD_Pin_1_DM_RES_DWN         (0x03u << Power_Up_LCD_Pin_1_DRIVE_MODE_SHIFT)
#define Power_Up_LCD_Pin_1_DM_OD_LO           (0x04u << Power_Up_LCD_Pin_1_DRIVE_MODE_SHIFT)
#define Power_Up_LCD_Pin_1_DM_OD_HI           (0x05u << Power_Up_LCD_Pin_1_DRIVE_MODE_SHIFT)
#define Power_Up_LCD_Pin_1_DM_STRONG          (0x06u << Power_Up_LCD_Pin_1_DRIVE_MODE_SHIFT)
#define Power_Up_LCD_Pin_1_DM_RES_UPDWN       (0x07u << Power_Up_LCD_Pin_1_DRIVE_MODE_SHIFT)

/* Digital Port Constants */
#define Power_Up_LCD_Pin_1_MASK               Power_Up_LCD_Pin_1__MASK
#define Power_Up_LCD_Pin_1_SHIFT              Power_Up_LCD_Pin_1__SHIFT
#define Power_Up_LCD_Pin_1_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Power_Up_LCD_Pin_1_PS                     (* (reg32 *) Power_Up_LCD_Pin_1__PS)
/* Port Configuration */
#define Power_Up_LCD_Pin_1_PC                     (* (reg32 *) Power_Up_LCD_Pin_1__PC)
/* Data Register */
#define Power_Up_LCD_Pin_1_DR                     (* (reg32 *) Power_Up_LCD_Pin_1__DR)
/* Input Buffer Disable Override */
#define Power_Up_LCD_Pin_1_INP_DIS                (* (reg32 *) Power_Up_LCD_Pin_1__PC2)


#if defined(Power_Up_LCD_Pin_1__INTSTAT)  /* Interrupt Registers */

    #define Power_Up_LCD_Pin_1_INTSTAT                (* (reg32 *) Power_Up_LCD_Pin_1__INTSTAT)

#endif /* Interrupt Registers */

#endif /* End Pins Power_Up_LCD_Pin_1_H */


/* [] END OF FILE */
