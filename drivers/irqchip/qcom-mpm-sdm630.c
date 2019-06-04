/* Copyright (c) 2018, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include <soc/qcom/mpm.h>

const struct mpm_pin mpm_sdm630_gic_chip_data[] = {
	{0x02, 216}, /* tsens1_tsens_upper_lower_int */
	{0x31, 212}, /* usb30_power_event_irq */
	{0x34, 275}, /* qmp_usb3_lfps_rxterm_irq_cx */
	{0x3d, 209}, /* lpi_dir_conn_irq_apps[1] */
	{0x4f, 379}, /* qusb2phy_intr */
	{0x57, 358}, /* ee0_apps_hlos_spmi_periph_irq */
	{0x5b, 519}, /* lpass_pmu_tmr_timeout_irq_cx */
	{-1},
};
