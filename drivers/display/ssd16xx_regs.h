/* ssd16xx_regs.h - Registers definition for SSD16XX compatible controller */

/*
 * Copyright (c) 2018 PHYTEC Messtechnik GmbH
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __SSD16XX_REGS_H__
#define __SSD16XX_REGS_H__

#define SSD16XX_CMD_GDO_CTRL			0x01
#define SSD16XX_CMD_GDV_CTRL			0x03
#define SSD16XX_CMD_SDV_CTRL			0x04
#define SSD16XX_CMD_SOFTSTART			0x0c
#define SSD16XX_CMD_GSCAN_START			0x0f
#define SSD16XX_CMD_SLEEP_MODE			0x10
#define SSD16XX_CMD_ENTRY_MODE			0x11
#define SSD16XX_CMD_SW_RESET			0x12
#define SSD16XX_CMD_TSENS_CTRL			0x1a
#define SSD16XX_CMD_MASTER_ACTIVATION		0x20
#define SSD16XX_CMD_UPDATE_CTRL1		0x21
#define SSD16XX_CMD_UPDATE_CTRL2		0x22
#define SSD16XX_CMD_WRITE_RAM			0x24
#define SSD16XX_CMD_VCOM_SENSE			0x28
#define SSD16XX_CMD_VCOM_SENSE_DURATON		0x29
#define SSD16XX_CMD_PRGM_VCOM_OTP		0x2a
#define SSD16XX_CMD_VCOM_VOLTAGE		0x2c
#define SSD16XX_CMD_PRGM_WS_OTP			0x30
#define SSD16XX_CMD_UPDATE_LUT			0x32
#define SSD16XX_CMD_PRGM_OTP_SELECTION		0x36
#define SSD16XX_CMD_OTP_SELECTION_CTRL		0x37
#define SSD16XX_CMD_DUMMY_LINE			0x3a
#define SSD16XX_CMD_GATE_LINE_WIDTH		0x3b
#define SSD16XX_CMD_BWF_CTRL			0x3c
#define SSD16XX_CMD_RAM_XPOS_CTRL		0x44
#define SSD16XX_CMD_RAM_YPOS_CTRL		0x45
#define SSD16XX_CMD_RAM_XPOS_CNTR		0x4e
#define SSD16XX_CMD_RAM_YPOS_CNTR		0x4f

/* Data entry sequence modes */
#define SSD16XX_DATA_ENTRY_MASK			0x07
#define SSD16XX_DATA_ENTRY_XDYDX		0x00
#define SSD16XX_DATA_ENTRY_XIYDX		0x01
#define SSD16XX_DATA_ENTRY_XDYIX		0x02
#define SSD16XX_DATA_ENTRY_XIYIX		0x03
#define SSD16XX_DATA_ENTRY_XDYDY		0x04
#define SSD16XX_DATA_ENTRY_XIYDY		0x05
#define SSD16XX_DATA_ENTRY_XDYIY		0x06
#define SSD16XX_DATA_ENTRY_XIYIY		0x07

/* Options for display update */
#define SSD16XX_CTRL1_INITIAL_UPDATE_LL		0x00
#define SSD16XX_CTRL1_INITIAL_UPDATE_LH		0x01
#define SSD16XX_CTRL1_INITIAL_UPDATE_HL		0x02
#define SSD16XX_CTRL1_INITIAL_UPDATE_HH		0x03

/* Options for display update sequence */
#define SSD16XX_CTRL2_ENABLE_CLK		0x80
#define SSD16XX_CTRL2_ENABLE_ANALOG		0x40
#define SSD16XX_CTRL2_TO_INITIAL		0x08
#define SSD16XX_CTRL2_TO_PATTERN		0x04
#define SSD16XX_CTRL2_DISABLE_ANALOG		0x02
#define SSD16XX_CTRL2_DISABLE_CLK		0x01

#define SSD16XX_SLEEP_MODE_DSM			0x01
#define SSD16XX_SLEEP_MODE_PON			0x00

/* Default values */
#define SSD16XX_VAL_DUMMY_LINE			0x1a
#define SSD16XX_VAL_GATE_LWIDTH			0x08

/* time constants in ms */
#define SSD16XX_RESET_DELAY			1
#define SSD16XX_BUSY_DELAY			1

#endif /* __SSD16XX_REGS_H__ */