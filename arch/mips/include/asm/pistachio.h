/*
 * Copyright (C) 2015 Imagination Technologies
 * Author: Govindraj Raja <govindraj.raja@imgtec.com>
 *
 * SPDX-License-Identifier:	GPL-2.0
 */

#ifndef _MIPS_ASM_PISTACHIO_H
#define _MIPS_ASM_PISTACHIO_H

#define PISTACHIO_I2C0		0x18100000
#define PISTACHIO_I2C1		0x18100200
#define PISTACHIO_I2C2		0x18100400
#define PISTACHIO_I2C3		0x18100600

#define PISTACHIO_SPFI_M0	0x18100F00
#define PISTACHIO_SPFI_M1	0x18101000
#define PISTACHIO_SPFI_SLAVE	0x18101200

#define PISTACHIO_UART0		0x18101400
#define PISTACHIO_UART1		0x18101500

#define PISTACHIO_GPIO		0x18101C00

#define PISTACHIO_USB		0x18120000
#define PISTACHIO_ETHERNET	0x18140000
#define PISTACHIO_SDHOST	0x18142000

#define PISTACHIO_MAIN_CLK	0x18144000
#define PISTACHIO_PER_CLK	0x18144800

#define PISTACHIO_DDR_CTRL	0x18180000
#define PISTACHIO_DDR_PHY	0x18180800

#define PISTACHIO_HASH_ACC_CPU_ADDR	0x18101100
#define PISTACHIO_HASH_ACC_DATA		0x18149600

#endif /* _MIPS_ASM_PISTACHIO_H */