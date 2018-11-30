/**
 * (c) 2013 Xilinx Inc.
 * XREGDB v0.91
 * XREGCHDR v0.15
 *
 * Generated on: 2018-11-11
 *
 * @file: cfu_apb.h
 *
 *
 * This file contains confidential and proprietary information
 * of Xilinx, Inc. and is protected under U.S. and
 * international copyright and other intellectual property
 * laws.
 *
 * DISCLAIMER
 * This disclaimer is not a license and does not grant any
 * rights to the materials distributed herewith. Except as
 * otherwise provided in a valid license issued to you by
 * Xilinx, and to the maximum extent permitted by applicable
 * law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
 * WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
 * AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
 * BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
 * INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
 * (2) Xilinx shall not be liable (whether in contract or tort,
 * including negligence, or under any other theory of
 * liability) for any loss or damage of any kind or nature
 * related to, arising under or in connection with these
 * materials, including for any direct, or any indirect,
 * special, incidental, or consequential loss or damage
 * (including loss of data, profits, goodwill, or any type of
 * loss or damage suffered as a result of any action brought
 * by a third party) even if such damage or loss was
 * reasonably foreseeable or Xilinx had been advised of the
 * possibility of the same.
 *
 * CRITICAL APPLICATIONS
 * Xilinx products are not designed or intended to be fail-
 * safe, or for use in any application requiring fail-safe
 * performance, such as life-support or safety devices or
 * systems, Class III medical devices, nuclear facilities,
 * applications related to the deployment of airbags, or any
 * other applications that could lead to death, personal
 * injury, or severe property or environmental damage
 * (individually and collectively, "Critical
 * Applications"). Customer assumes the sole risk and
 * liability of any use of Xilinx products in Critical
 * Applications, subject only to applicable laws and
 * regulations governing limitations on product liability.
 *
 * THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
 * PART OF THIS FILE AT ALL TIMES.
 *
 * Naming Convention: <MODULE>_<REGISTER>[_<FIELD>[_<DESC>]]
 *     <MODULE>       Module name (e.g. can or usb)
 *     <REGISTER>     Register within the current module
 *     [_<FIELD>]     Bit field within a register
 *     [_<DESC>]      Type of bit field define:
 *         SHIFT:     Least significant bit for the field
 *         WIDTH:     Size of field in bites
 *         MASK:      A masking over a range of bits or a bit to
 *                    be used for setting or clearing
 *
 */

#ifndef _CFU_APB_H_
#define _CFU_APB_H_

#ifdef __cplusplus
extern "C" {
#endif

/**
 * CFU_APB Base Address
 */
#define CFU_APB_BASEADDR      0XF12B0000

/**
 * Register: CFU_APB_CFU_ISR
 */
#define CFU_APB_CFU_ISR    ( ( CFU_APB_BASEADDR ) + 0X00000000 )

#define CFU_APB_CFU_ISR_USR_GTS_EVENT_SHIFT   9
#define CFU_APB_CFU_ISR_USR_GTS_EVENT_WIDTH   1
#define CFU_APB_CFU_ISR_USR_GTS_EVENT_MASK    0X00000200

#define CFU_APB_CFU_ISR_USR_GSR_EVENT_SHIFT   8
#define CFU_APB_CFU_ISR_USR_GSR_EVENT_WIDTH   1
#define CFU_APB_CFU_ISR_USR_GSR_EVENT_MASK    0X00000100

#define CFU_APB_CFU_ISR_SLVERR_SHIFT   7
#define CFU_APB_CFU_ISR_SLVERR_WIDTH   1
#define CFU_APB_CFU_ISR_SLVERR_MASK    0X00000080

#define CFU_APB_CFU_ISR_DECOMP_ERROR_SHIFT   6
#define CFU_APB_CFU_ISR_DECOMP_ERROR_WIDTH   1
#define CFU_APB_CFU_ISR_DECOMP_ERROR_MASK    0X00000040

#define CFU_APB_CFU_ISR_BAD_CFI_PACKET_SHIFT   5
#define CFU_APB_CFU_ISR_BAD_CFI_PACKET_WIDTH   1
#define CFU_APB_CFU_ISR_BAD_CFI_PACKET_MASK    0X00000020

#define CFU_APB_CFU_ISR_AXI_ALIGN_ERROR_SHIFT   4
#define CFU_APB_CFU_ISR_AXI_ALIGN_ERROR_WIDTH   1
#define CFU_APB_CFU_ISR_AXI_ALIGN_ERROR_MASK    0X00000010

#define CFU_APB_CFU_ISR_CFI_ROW_ERROR_SHIFT   3
#define CFU_APB_CFU_ISR_CFI_ROW_ERROR_WIDTH   1
#define CFU_APB_CFU_ISR_CFI_ROW_ERROR_MASK    0X00000008

#define CFU_APB_CFU_ISR_CRC32_ERROR_SHIFT   2
#define CFU_APB_CFU_ISR_CRC32_ERROR_WIDTH   1
#define CFU_APB_CFU_ISR_CRC32_ERROR_MASK    0X00000004

#define CFU_APB_CFU_ISR_CRC8_ERROR_SHIFT   1
#define CFU_APB_CFU_ISR_CRC8_ERROR_WIDTH   1
#define CFU_APB_CFU_ISR_CRC8_ERROR_MASK    0X00000002

#define CFU_APB_CFU_ISR_SEU_ENDOFCALIB_SHIFT   0
#define CFU_APB_CFU_ISR_SEU_ENDOFCALIB_WIDTH   1
#define CFU_APB_CFU_ISR_SEU_ENDOFCALIB_MASK    0X00000001

/**
 * Register: CFU_APB_CFU_IMR
 */
#define CFU_APB_CFU_IMR    ( ( CFU_APB_BASEADDR ) + 0X00000004 )

#define CFU_APB_CFU_IMR_USR_GTS_EVENT_SHIFT   9
#define CFU_APB_CFU_IMR_USR_GTS_EVENT_WIDTH   1
#define CFU_APB_CFU_IMR_USR_GTS_EVENT_MASK    0X00000200

#define CFU_APB_CFU_IMR_USR_GSR_EVENT_SHIFT   8
#define CFU_APB_CFU_IMR_USR_GSR_EVENT_WIDTH   1
#define CFU_APB_CFU_IMR_USR_GSR_EVENT_MASK    0X00000100

#define CFU_APB_CFU_IMR_SLVERR_SHIFT   7
#define CFU_APB_CFU_IMR_SLVERR_WIDTH   1
#define CFU_APB_CFU_IMR_SLVERR_MASK    0X00000080

#define CFU_APB_CFU_IMR_DECOMP_ERROR_SHIFT   6
#define CFU_APB_CFU_IMR_DECOMP_ERROR_WIDTH   1
#define CFU_APB_CFU_IMR_DECOMP_ERROR_MASK    0X00000040

#define CFU_APB_CFU_IMR_BAD_CFI_PACKET_SHIFT   5
#define CFU_APB_CFU_IMR_BAD_CFI_PACKET_WIDTH   1
#define CFU_APB_CFU_IMR_BAD_CFI_PACKET_MASK    0X00000020

#define CFU_APB_CFU_IMR_AXI_ALIGN_ERROR_SHIFT   4
#define CFU_APB_CFU_IMR_AXI_ALIGN_ERROR_WIDTH   1
#define CFU_APB_CFU_IMR_AXI_ALIGN_ERROR_MASK    0X00000010

#define CFU_APB_CFU_IMR_CFI_ROW_ERROR_SHIFT   3
#define CFU_APB_CFU_IMR_CFI_ROW_ERROR_WIDTH   1
#define CFU_APB_CFU_IMR_CFI_ROW_ERROR_MASK    0X00000008

#define CFU_APB_CFU_IMR_CRC32_ERROR_SHIFT   2
#define CFU_APB_CFU_IMR_CRC32_ERROR_WIDTH   1
#define CFU_APB_CFU_IMR_CRC32_ERROR_MASK    0X00000004

#define CFU_APB_CFU_IMR_CRC8_ERROR_SHIFT   1
#define CFU_APB_CFU_IMR_CRC8_ERROR_WIDTH   1
#define CFU_APB_CFU_IMR_CRC8_ERROR_MASK    0X00000002

#define CFU_APB_CFU_IMR_SEU_ENDOFCALIB_SHIFT   0
#define CFU_APB_CFU_IMR_SEU_ENDOFCALIB_WIDTH   1
#define CFU_APB_CFU_IMR_SEU_ENDOFCALIB_MASK    0X00000001

/**
 * Register: CFU_APB_CFU_IER
 */
#define CFU_APB_CFU_IER    ( ( CFU_APB_BASEADDR ) + 0X00000008 )

#define CFU_APB_CFU_IER_USR_GTS_EVENT_SHIFT   9
#define CFU_APB_CFU_IER_USR_GTS_EVENT_WIDTH   1
#define CFU_APB_CFU_IER_USR_GTS_EVENT_MASK    0X00000200

#define CFU_APB_CFU_IER_USR_GSR_EVENT_SHIFT   8
#define CFU_APB_CFU_IER_USR_GSR_EVENT_WIDTH   1
#define CFU_APB_CFU_IER_USR_GSR_EVENT_MASK    0X00000100

#define CFU_APB_CFU_IER_SLVERR_SHIFT   7
#define CFU_APB_CFU_IER_SLVERR_WIDTH   1
#define CFU_APB_CFU_IER_SLVERR_MASK    0X00000080

#define CFU_APB_CFU_IER_DECOMP_ERROR_SHIFT   6
#define CFU_APB_CFU_IER_DECOMP_ERROR_WIDTH   1
#define CFU_APB_CFU_IER_DECOMP_ERROR_MASK    0X00000040

#define CFU_APB_CFU_IER_BAD_CFI_PACKET_SHIFT   5
#define CFU_APB_CFU_IER_BAD_CFI_PACKET_WIDTH   1
#define CFU_APB_CFU_IER_BAD_CFI_PACKET_MASK    0X00000020

#define CFU_APB_CFU_IER_AXI_ALIGN_ERROR_SHIFT   4
#define CFU_APB_CFU_IER_AXI_ALIGN_ERROR_WIDTH   1
#define CFU_APB_CFU_IER_AXI_ALIGN_ERROR_MASK    0X00000010

#define CFU_APB_CFU_IER_CFI_ROW_ERROR_SHIFT   3
#define CFU_APB_CFU_IER_CFI_ROW_ERROR_WIDTH   1
#define CFU_APB_CFU_IER_CFI_ROW_ERROR_MASK    0X00000008

#define CFU_APB_CFU_IER_CRC32_ERROR_SHIFT   2
#define CFU_APB_CFU_IER_CRC32_ERROR_WIDTH   1
#define CFU_APB_CFU_IER_CRC32_ERROR_MASK    0X00000004

#define CFU_APB_CFU_IER_CRC8_ERROR_SHIFT   1
#define CFU_APB_CFU_IER_CRC8_ERROR_WIDTH   1
#define CFU_APB_CFU_IER_CRC8_ERROR_MASK    0X00000002

#define CFU_APB_CFU_IER_SEU_ENDOFCALIB_SHIFT   0
#define CFU_APB_CFU_IER_SEU_ENDOFCALIB_WIDTH   1
#define CFU_APB_CFU_IER_SEU_ENDOFCALIB_MASK    0X00000001

/**
 * Register: CFU_APB_CFU_IDR
 */
#define CFU_APB_CFU_IDR    ( ( CFU_APB_BASEADDR ) + 0X0000000C )

#define CFU_APB_CFU_IDR_USR_GTS_EVENT_SHIFT   9
#define CFU_APB_CFU_IDR_USR_GTS_EVENT_WIDTH   1
#define CFU_APB_CFU_IDR_USR_GTS_EVENT_MASK    0X00000200

#define CFU_APB_CFU_IDR_USR_GSR_EVENT_SHIFT   8
#define CFU_APB_CFU_IDR_USR_GSR_EVENT_WIDTH   1
#define CFU_APB_CFU_IDR_USR_GSR_EVENT_MASK    0X00000100

#define CFU_APB_CFU_IDR_SLVERR_SHIFT   7
#define CFU_APB_CFU_IDR_SLVERR_WIDTH   1
#define CFU_APB_CFU_IDR_SLVERR_MASK    0X00000080

#define CFU_APB_CFU_IDR_DECOMP_ERROR_SHIFT   6
#define CFU_APB_CFU_IDR_DECOMP_ERROR_WIDTH   1
#define CFU_APB_CFU_IDR_DECOMP_ERROR_MASK    0X00000040

#define CFU_APB_CFU_IDR_BAD_CFI_PACKET_SHIFT   5
#define CFU_APB_CFU_IDR_BAD_CFI_PACKET_WIDTH   1
#define CFU_APB_CFU_IDR_BAD_CFI_PACKET_MASK    0X00000020

#define CFU_APB_CFU_IDR_AXI_ALIGN_ERROR_SHIFT   4
#define CFU_APB_CFU_IDR_AXI_ALIGN_ERROR_WIDTH   1
#define CFU_APB_CFU_IDR_AXI_ALIGN_ERROR_MASK    0X00000010

#define CFU_APB_CFU_IDR_CFI_ROW_ERROR_SHIFT   3
#define CFU_APB_CFU_IDR_CFI_ROW_ERROR_WIDTH   1
#define CFU_APB_CFU_IDR_CFI_ROW_ERROR_MASK    0X00000008

#define CFU_APB_CFU_IDR_CRC32_ERROR_SHIFT   2
#define CFU_APB_CFU_IDR_CRC32_ERROR_WIDTH   1
#define CFU_APB_CFU_IDR_CRC32_ERROR_MASK    0X00000004

#define CFU_APB_CFU_IDR_CRC8_ERROR_SHIFT   1
#define CFU_APB_CFU_IDR_CRC8_ERROR_WIDTH   1
#define CFU_APB_CFU_IDR_CRC8_ERROR_MASK    0X00000002

#define CFU_APB_CFU_IDR_SEU_ENDOFCALIB_SHIFT   0
#define CFU_APB_CFU_IDR_SEU_ENDOFCALIB_WIDTH   1
#define CFU_APB_CFU_IDR_SEU_ENDOFCALIB_MASK    0X00000001

/**
 * Register: CFU_APB_CFU_ITR
 */
#define CFU_APB_CFU_ITR    ( ( CFU_APB_BASEADDR ) + 0X00000010 )

#define CFU_APB_CFU_ITR_USR_GTS_EVENT_SHIFT   9
#define CFU_APB_CFU_ITR_USR_GTS_EVENT_WIDTH   1
#define CFU_APB_CFU_ITR_USR_GTS_EVENT_MASK    0X00000200

#define CFU_APB_CFU_ITR_USR_GSR_EVENT_SHIFT   8
#define CFU_APB_CFU_ITR_USR_GSR_EVENT_WIDTH   1
#define CFU_APB_CFU_ITR_USR_GSR_EVENT_MASK    0X00000100

#define CFU_APB_CFU_ITR_SLVERR_SHIFT   7
#define CFU_APB_CFU_ITR_SLVERR_WIDTH   1
#define CFU_APB_CFU_ITR_SLVERR_MASK    0X00000080

#define CFU_APB_CFU_ITR_DECOMP_ERROR_SHIFT   6
#define CFU_APB_CFU_ITR_DECOMP_ERROR_WIDTH   1
#define CFU_APB_CFU_ITR_DECOMP_ERROR_MASK    0X00000040

#define CFU_APB_CFU_ITR_BAD_CFI_PACKET_SHIFT   5
#define CFU_APB_CFU_ITR_BAD_CFI_PACKET_WIDTH   1
#define CFU_APB_CFU_ITR_BAD_CFI_PACKET_MASK    0X00000020

#define CFU_APB_CFU_ITR_AXI_ALIGN_ERROR_SHIFT   4
#define CFU_APB_CFU_ITR_AXI_ALIGN_ERROR_WIDTH   1
#define CFU_APB_CFU_ITR_AXI_ALIGN_ERROR_MASK    0X00000010

#define CFU_APB_CFU_ITR_CFI_ROW_ERROR_SHIFT   3
#define CFU_APB_CFU_ITR_CFI_ROW_ERROR_WIDTH   1
#define CFU_APB_CFU_ITR_CFI_ROW_ERROR_MASK    0X00000008

#define CFU_APB_CFU_ITR_CRC32_ERROR_SHIFT   2
#define CFU_APB_CFU_ITR_CRC32_ERROR_WIDTH   1
#define CFU_APB_CFU_ITR_CRC32_ERROR_MASK    0X00000004

#define CFU_APB_CFU_ITR_CRC8_ERROR_SHIFT   1
#define CFU_APB_CFU_ITR_CRC8_ERROR_WIDTH   1
#define CFU_APB_CFU_ITR_CRC8_ERROR_MASK    0X00000002

#define CFU_APB_CFU_ITR_SEU_ENDOFCALIB_SHIFT   0
#define CFU_APB_CFU_ITR_SEU_ENDOFCALIB_WIDTH   1
#define CFU_APB_CFU_ITR_SEU_ENDOFCALIB_MASK    0X00000001

/**
 * Register: CFU_APB_CFU_PROTECT
 */
#define CFU_APB_CFU_PROTECT    ( ( CFU_APB_BASEADDR ) + 0X00000014 )

#define CFU_APB_CFU_PROTECT_ACTIVE_SHIFT   0
#define CFU_APB_CFU_PROTECT_ACTIVE_WIDTH   1
#define CFU_APB_CFU_PROTECT_ACTIVE_MASK    0X00000001

/**
 * Register: CFU_APB_CFU_FGCR
 */
#define CFU_APB_CFU_FGCR    ( ( CFU_APB_BASEADDR ) + 0X00000018 )

#define CFU_APB_CFU_FGCR_GCLK_CAL_SHIFT   14
#define CFU_APB_CFU_FGCR_GCLK_CAL_WIDTH   1
#define CFU_APB_CFU_FGCR_GCLK_CAL_MASK    0X00004000

#define CFU_APB_CFU_FGCR_SC_HBC_TRIGGER_SHIFT   13
#define CFU_APB_CFU_FGCR_SC_HBC_TRIGGER_WIDTH   1
#define CFU_APB_CFU_FGCR_SC_HBC_TRIGGER_MASK    0X00002000

#define CFU_APB_CFU_FGCR_GLOW_SHIFT   12
#define CFU_APB_CFU_FGCR_GLOW_WIDTH   1
#define CFU_APB_CFU_FGCR_GLOW_MASK    0X00001000

#define CFU_APB_CFU_FGCR_GPWRDWN_SHIFT   11
#define CFU_APB_CFU_FGCR_GPWRDWN_WIDTH   1
#define CFU_APB_CFU_FGCR_GPWRDWN_MASK    0X00000800

#define CFU_APB_CFU_FGCR_GCAP_SHIFT   10
#define CFU_APB_CFU_FGCR_GCAP_WIDTH   1
#define CFU_APB_CFU_FGCR_GCAP_MASK    0X00000400

#define CFU_APB_CFU_FGCR_GSCWE_SHIFT   9
#define CFU_APB_CFU_FGCR_GSCWE_WIDTH   1
#define CFU_APB_CFU_FGCR_GSCWE_MASK    0X00000200

#define CFU_APB_CFU_FGCR_GHIGH_B_SHIFT   8
#define CFU_APB_CFU_FGCR_GHIGH_B_WIDTH   1
#define CFU_APB_CFU_FGCR_GHIGH_B_MASK    0X00000100

#define CFU_APB_CFU_FGCR_GMC_B_SHIFT   7
#define CFU_APB_CFU_FGCR_GMC_B_WIDTH   1
#define CFU_APB_CFU_FGCR_GMC_B_MASK    0X00000080

#define CFU_APB_CFU_FGCR_GWE_SHIFT   6
#define CFU_APB_CFU_FGCR_GWE_WIDTH   1
#define CFU_APB_CFU_FGCR_GWE_MASK    0X00000040

#define CFU_APB_CFU_FGCR_GRESTORE_SHIFT   5
#define CFU_APB_CFU_FGCR_GRESTORE_WIDTH   1
#define CFU_APB_CFU_FGCR_GRESTORE_MASK    0X00000020

#define CFU_APB_CFU_FGCR_GTS_CFG_B_SHIFT   4
#define CFU_APB_CFU_FGCR_GTS_CFG_B_WIDTH   1
#define CFU_APB_CFU_FGCR_GTS_CFG_B_MASK    0X00000010

#define CFU_APB_CFU_FGCR_GLUTMASK_SHIFT   3
#define CFU_APB_CFU_FGCR_GLUTMASK_WIDTH   1
#define CFU_APB_CFU_FGCR_GLUTMASK_MASK    0X00000008

#define CFU_APB_CFU_FGCR_EN_GLOBS_B_SHIFT   2
#define CFU_APB_CFU_FGCR_EN_GLOBS_B_WIDTH   1
#define CFU_APB_CFU_FGCR_EN_GLOBS_B_MASK    0X00000004

#define CFU_APB_CFU_FGCR_EOS_SHIFT   1
#define CFU_APB_CFU_FGCR_EOS_WIDTH   1
#define CFU_APB_CFU_FGCR_EOS_MASK    0X00000002

#define CFU_APB_CFU_FGCR_INIT_COMPLETE_SHIFT   0
#define CFU_APB_CFU_FGCR_INIT_COMPLETE_WIDTH   1
#define CFU_APB_CFU_FGCR_INIT_COMPLETE_MASK    0X00000001

/**
 * Register: CFU_APB_CFU_CTL
 */
#define CFU_APB_CFU_CTL    ( ( CFU_APB_BASEADDR ) + 0X0000001C )

#define CFU_APB_CFU_CTL_GSR_GSC_SHIFT   15
#define CFU_APB_CFU_CTL_GSR_GSC_WIDTH   1
#define CFU_APB_CFU_CTL_GSR_GSC_MASK    0X00008000

#define CFU_APB_CFU_CTL_SLVERR_EN_SHIFT   14
#define CFU_APB_CFU_CTL_SLVERR_EN_WIDTH   1
#define CFU_APB_CFU_CTL_SLVERR_EN_MASK    0X00004000

#define CFU_APB_CFU_CTL_CRC32_RESET_SHIFT   13
#define CFU_APB_CFU_CTL_CRC32_RESET_WIDTH   1
#define CFU_APB_CFU_CTL_CRC32_RESET_MASK    0X00002000

#define CFU_APB_CFU_CTL_AXI_ERROR_EN_SHIFT   12
#define CFU_APB_CFU_CTL_AXI_ERROR_EN_WIDTH   1
#define CFU_APB_CFU_CTL_AXI_ERROR_EN_MASK    0X00001000

#define CFU_APB_CFU_CTL_FLUSH_AXI_SHIFT   11
#define CFU_APB_CFU_CTL_FLUSH_AXI_WIDTH   1
#define CFU_APB_CFU_CTL_FLUSH_AXI_MASK    0X00000800

#define CFU_APB_CFU_CTL_SSI_PER_SLR_PR_SHIFT   10
#define CFU_APB_CFU_CTL_SSI_PER_SLR_PR_WIDTH   1
#define CFU_APB_CFU_CTL_SSI_PER_SLR_PR_MASK    0X00000400

#define CFU_APB_CFU_CTL_GCAP_CLK_EN_SHIFT   9
#define CFU_APB_CFU_CTL_GCAP_CLK_EN_WIDTH   1
#define CFU_APB_CFU_CTL_GCAP_CLK_EN_MASK    0X00000200

#define CFU_APB_CFU_CTL_STATUS_SYNC_DISABLE_SHIFT   8
#define CFU_APB_CFU_CTL_STATUS_SYNC_DISABLE_WIDTH   1
#define CFU_APB_CFU_CTL_STATUS_SYNC_DISABLE_MASK    0X00000100

#define CFU_APB_CFU_CTL_IGNORE_CFI_ERROR_SHIFT   7
#define CFU_APB_CFU_CTL_IGNORE_CFI_ERROR_WIDTH   1
#define CFU_APB_CFU_CTL_IGNORE_CFI_ERROR_MASK    0X00000080

#define CFU_APB_CFU_CTL_CFRAME_DISABLE_SHIFT   6
#define CFU_APB_CFU_CTL_CFRAME_DISABLE_WIDTH   1
#define CFU_APB_CFU_CTL_CFRAME_DISABLE_MASK    0X00000040

#define CFU_APB_CFU_CTL_QWORD_CNT_RESET_SHIFT   5
#define CFU_APB_CFU_CTL_QWORD_CNT_RESET_WIDTH   1
#define CFU_APB_CFU_CTL_QWORD_CNT_RESET_MASK    0X00000020

#define CFU_APB_CFU_CTL_CRC8_DISABLE_SHIFT   4
#define CFU_APB_CFU_CTL_CRC8_DISABLE_WIDTH   1
#define CFU_APB_CFU_CTL_CRC8_DISABLE_MASK    0X00000010

#define CFU_APB_CFU_CTL_CRC32_CHECK_SHIFT   3
#define CFU_APB_CFU_CTL_CRC32_CHECK_WIDTH   1
#define CFU_APB_CFU_CTL_CRC32_CHECK_MASK    0X00000008

#define CFU_APB_CFU_CTL_DECOMPRESS_SHIFT   2
#define CFU_APB_CFU_CTL_DECOMPRESS_WIDTH   1
#define CFU_APB_CFU_CTL_DECOMPRESS_MASK    0X00000004

#define CFU_APB_CFU_CTL_SEU_GO_SHIFT   1
#define CFU_APB_CFU_CTL_SEU_GO_WIDTH   1
#define CFU_APB_CFU_CTL_SEU_GO_MASK    0X00000002

#define CFU_APB_CFU_CTL_CFI_LOCAL_RESET_SHIFT   0
#define CFU_APB_CFU_CTL_CFI_LOCAL_RESET_WIDTH   1
#define CFU_APB_CFU_CTL_CFI_LOCAL_RESET_MASK    0X00000001

/**
 * Register: CFU_APB_CFU_CRAM_RW
 */
#define CFU_APB_CFU_CRAM_RW    ( ( CFU_APB_BASEADDR ) + 0X00000020 )

#define CFU_APB_CFU_CRAM_RW_RFIFO_AFULL_DEPTH_SHIFT   18
#define CFU_APB_CFU_CRAM_RW_RFIFO_AFULL_DEPTH_WIDTH   9
#define CFU_APB_CFU_CRAM_RW_RFIFO_AFULL_DEPTH_MASK    0X07FC0000

#define CFU_APB_CFU_CRAM_RW_RD_WAVE_CNT_LEFT_SHIFT   12
#define CFU_APB_CFU_CRAM_RW_RD_WAVE_CNT_LEFT_WIDTH   6
#define CFU_APB_CFU_CRAM_RW_RD_WAVE_CNT_LEFT_MASK    0X0003F000

#define CFU_APB_CFU_CRAM_RW_RD_WAVE_CNT_SHIFT   6
#define CFU_APB_CFU_CRAM_RW_RD_WAVE_CNT_WIDTH   6
#define CFU_APB_CFU_CRAM_RW_RD_WAVE_CNT_MASK    0X00000FC0

#define CFU_APB_CFU_CRAM_RW_WR_WAVE_CNT_SHIFT   0
#define CFU_APB_CFU_CRAM_RW_WR_WAVE_CNT_WIDTH   6
#define CFU_APB_CFU_CRAM_RW_WR_WAVE_CNT_MASK    0X0000003F

/**
 * Register: CFU_APB_CFU_MASK
 */
#define CFU_APB_CFU_MASK    ( ( CFU_APB_BASEADDR ) + 0X00000028 )

#define CFU_APB_CFU_MASK_MASK_SHIFT   0
#define CFU_APB_CFU_MASK_MASK_WIDTH   32
#define CFU_APB_CFU_MASK_MASK_MASK    0XFFFFFFFF

/**
 * Register: CFU_APB_CFU_CRC_EXPECT
 */
#define CFU_APB_CFU_CRC_EXPECT    ( ( CFU_APB_BASEADDR ) + 0X0000002C )

#define CFU_APB_CFU_CRC_EXPECT_CRC_EXPECT_SHIFT   0
#define CFU_APB_CFU_CRC_EXPECT_CRC_EXPECT_WIDTH   32
#define CFU_APB_CFU_CRC_EXPECT_CRC_EXPECT_MASK    0XFFFFFFFF

/**
 * Register: CFU_APB_CFU_CFRAME_LEFT_T0
 */
#define CFU_APB_CFU_CFRAME_LEFT_T0    ( ( CFU_APB_BASEADDR ) + 0X00000060 )

#define CFU_APB_CFU_CFRAME_LEFT_T0_NUM_SHIFT   0
#define CFU_APB_CFU_CFRAME_LEFT_T0_NUM_WIDTH   20
#define CFU_APB_CFU_CFRAME_LEFT_T0_NUM_MASK    0X000FFFFF

/**
 * Register: CFU_APB_CFU_CFRAME_LEFT_T1
 */
#define CFU_APB_CFU_CFRAME_LEFT_T1    ( ( CFU_APB_BASEADDR ) + 0X00000064 )

#define CFU_APB_CFU_CFRAME_LEFT_T1_NUM_SHIFT   0
#define CFU_APB_CFU_CFRAME_LEFT_T1_NUM_WIDTH   20
#define CFU_APB_CFU_CFRAME_LEFT_T1_NUM_MASK    0X000FFFFF

/**
 * Register: CFU_APB_CFU_CFRAME_LEFT_T2
 */
#define CFU_APB_CFU_CFRAME_LEFT_T2    ( ( CFU_APB_BASEADDR ) + 0X00000068 )

#define CFU_APB_CFU_CFRAME_LEFT_T2_NUM_SHIFT   0
#define CFU_APB_CFU_CFRAME_LEFT_T2_NUM_WIDTH   20
#define CFU_APB_CFU_CFRAME_LEFT_T2_NUM_MASK    0X000FFFFF

/**
 * Register: CFU_APB_CFU_ROW_RANGE
 */
#define CFU_APB_CFU_ROW_RANGE    ( ( CFU_APB_BASEADDR ) + 0X0000006C )

#define CFU_APB_CFU_ROW_RANGE_HALF_FSR_SHIFT   5
#define CFU_APB_CFU_ROW_RANGE_HALF_FSR_WIDTH   1
#define CFU_APB_CFU_ROW_RANGE_HALF_FSR_MASK    0X00000020

#define CFU_APB_CFU_ROW_RANGE_NUM_SHIFT   0
#define CFU_APB_CFU_ROW_RANGE_NUM_WIDTH   5
#define CFU_APB_CFU_ROW_RANGE_NUM_MASK    0X0000001F

/**
 * Register: CFU_APB_CFU_STATUS
 */
#define CFU_APB_CFU_STATUS    ( ( CFU_APB_BASEADDR ) + 0X00000100 )

#define CFU_APB_CFU_STATUS_SEU_WRITE_ERROR_SHIFT   30
#define CFU_APB_CFU_STATUS_SEU_WRITE_ERROR_WIDTH   1
#define CFU_APB_CFU_STATUS_SEU_WRITE_ERROR_MASK    0X40000000

#define CFU_APB_CFU_STATUS_FRCNT_ERROR_SHIFT   29
#define CFU_APB_CFU_STATUS_FRCNT_ERROR_WIDTH   1
#define CFU_APB_CFU_STATUS_FRCNT_ERROR_MASK    0X20000000

#define CFU_APB_CFU_STATUS_RSVD_ERROR_SHIFT   28
#define CFU_APB_CFU_STATUS_RSVD_ERROR_WIDTH   1
#define CFU_APB_CFU_STATUS_RSVD_ERROR_MASK    0X10000000

#define CFU_APB_CFU_STATUS_FDRO_ERROR_SHIFT   27
#define CFU_APB_CFU_STATUS_FDRO_ERROR_WIDTH   1
#define CFU_APB_CFU_STATUS_FDRO_ERROR_MASK    0X08000000

#define CFU_APB_CFU_STATUS_FDRI_ERROR_SHIFT   26
#define CFU_APB_CFU_STATUS_FDRI_ERROR_WIDTH   1
#define CFU_APB_CFU_STATUS_FDRI_ERROR_MASK    0X04000000

#define CFU_APB_CFU_STATUS_FDRI_READ_ERROR_SHIFT   25
#define CFU_APB_CFU_STATUS_FDRI_READ_ERROR_WIDTH   1
#define CFU_APB_CFU_STATUS_FDRI_READ_ERROR_MASK    0X02000000

#define CFU_APB_CFU_STATUS_READ_FDRI_ERROR_SHIFT   24
#define CFU_APB_CFU_STATUS_READ_FDRI_ERROR_WIDTH   1
#define CFU_APB_CFU_STATUS_READ_FDRI_ERROR_MASK    0X01000000

#define CFU_APB_CFU_STATUS_READ_SFR_ERROR_SHIFT   23
#define CFU_APB_CFU_STATUS_READ_SFR_ERROR_WIDTH   1
#define CFU_APB_CFU_STATUS_READ_SFR_ERROR_MASK    0X00800000

#define CFU_APB_CFU_STATUS_READ_STREAM_ERROR_SHIFT   22
#define CFU_APB_CFU_STATUS_READ_STREAM_ERROR_WIDTH   1
#define CFU_APB_CFU_STATUS_READ_STREAM_ERROR_MASK    0X00400000

#define CFU_APB_CFU_STATUS_UNKNOWN_STREAM_PKT_SHIFT   21
#define CFU_APB_CFU_STATUS_UNKNOWN_STREAM_PKT_WIDTH   1
#define CFU_APB_CFU_STATUS_UNKNOWN_STREAM_PKT_MASK    0X00200000

#define CFU_APB_CFU_STATUS_USR_GTS_SHIFT   20
#define CFU_APB_CFU_STATUS_USR_GTS_WIDTH   1
#define CFU_APB_CFU_STATUS_USR_GTS_MASK    0X00100000

#define CFU_APB_CFU_STATUS_USR_GSR_SHIFT   19
#define CFU_APB_CFU_STATUS_USR_GSR_WIDTH   1
#define CFU_APB_CFU_STATUS_USR_GSR_MASK    0X00080000

#define CFU_APB_CFU_STATUS_AXI_BAD_WSTRB_SHIFT   18
#define CFU_APB_CFU_STATUS_AXI_BAD_WSTRB_WIDTH   1
#define CFU_APB_CFU_STATUS_AXI_BAD_WSTRB_MASK    0X00040000

#define CFU_APB_CFU_STATUS_AXI_BAD_AR_SIZE_SHIFT   17
#define CFU_APB_CFU_STATUS_AXI_BAD_AR_SIZE_WIDTH   1
#define CFU_APB_CFU_STATUS_AXI_BAD_AR_SIZE_MASK    0X00020000

#define CFU_APB_CFU_STATUS_AXI_BAD_AW_SIZE_SHIFT   16
#define CFU_APB_CFU_STATUS_AXI_BAD_AW_SIZE_WIDTH   1
#define CFU_APB_CFU_STATUS_AXI_BAD_AW_SIZE_MASK    0X00010000

#define CFU_APB_CFU_STATUS_AXI_BAD_ARADDR_SHIFT   15
#define CFU_APB_CFU_STATUS_AXI_BAD_ARADDR_WIDTH   1
#define CFU_APB_CFU_STATUS_AXI_BAD_ARADDR_MASK    0X00008000

#define CFU_APB_CFU_STATUS_AXI_BAD_AWADDR_SHIFT   14
#define CFU_APB_CFU_STATUS_AXI_BAD_AWADDR_WIDTH   1
#define CFU_APB_CFU_STATUS_AXI_BAD_AWADDR_MASK    0X00004000

#define CFU_APB_CFU_STATUS_SCAN_CLEAR_PASS_SHIFT   13
#define CFU_APB_CFU_STATUS_SCAN_CLEAR_PASS_WIDTH   1
#define CFU_APB_CFU_STATUS_SCAN_CLEAR_PASS_MASK    0X00002000

#define CFU_APB_CFU_STATUS_HC_SEC_ERROR_SHIFT   12
#define CFU_APB_CFU_STATUS_HC_SEC_ERROR_WIDTH   1
#define CFU_APB_CFU_STATUS_HC_SEC_ERROR_MASK    0X00001000

#define CFU_APB_CFU_STATUS_GHIGH_B_ISHIGH_SHIFT   11
#define CFU_APB_CFU_STATUS_GHIGH_B_ISHIGH_WIDTH   1
#define CFU_APB_CFU_STATUS_GHIGH_B_ISHIGH_MASK    0X00000800

#define CFU_APB_CFU_STATUS_GHIGH_B_ISLOW_SHIFT   10
#define CFU_APB_CFU_STATUS_GHIGH_B_ISLOW_WIDTH   1
#define CFU_APB_CFU_STATUS_GHIGH_B_ISLOW_MASK    0X00000400

#define CFU_APB_CFU_STATUS_GMC_B_ISHIGH_SHIFT   9
#define CFU_APB_CFU_STATUS_GMC_B_ISHIGH_WIDTH   1
#define CFU_APB_CFU_STATUS_GMC_B_ISHIGH_MASK    0X00000200

#define CFU_APB_CFU_STATUS_GMC_B_ISLOW_SHIFT   8
#define CFU_APB_CFU_STATUS_GMC_B_ISLOW_WIDTH   1
#define CFU_APB_CFU_STATUS_GMC_B_ISLOW_MASK    0X00000100

#define CFU_APB_CFU_STATUS_GPWRDWN_B_ISHIGH_SHIFT   7
#define CFU_APB_CFU_STATUS_GPWRDWN_B_ISHIGH_WIDTH   1
#define CFU_APB_CFU_STATUS_GPWRDWN_B_ISHIGH_MASK    0X00000080

#define CFU_APB_CFU_STATUS_CFI_SEU_CRC_ERROR_SHIFT   6
#define CFU_APB_CFU_STATUS_CFI_SEU_CRC_ERROR_WIDTH   1
#define CFU_APB_CFU_STATUS_CFI_SEU_CRC_ERROR_MASK    0X00000040

#define CFU_APB_CFU_STATUS_CFI_SEU_ECC_ERROR_SHIFT   5
#define CFU_APB_CFU_STATUS_CFI_SEU_ECC_ERROR_WIDTH   1
#define CFU_APB_CFU_STATUS_CFI_SEU_ECC_ERROR_MASK    0X00000020

#define CFU_APB_CFU_STATUS_CFI_SEU_HEARTBEAT_SHIFT   4
#define CFU_APB_CFU_STATUS_CFI_SEU_HEARTBEAT_WIDTH   1
#define CFU_APB_CFU_STATUS_CFI_SEU_HEARTBEAT_MASK    0X00000010

#define CFU_APB_CFU_STATUS_SCAN_CLEAR_DONE_SHIFT   3
#define CFU_APB_CFU_STATUS_SCAN_CLEAR_DONE_WIDTH   1
#define CFU_APB_CFU_STATUS_SCAN_CLEAR_DONE_MASK    0X00000008

#define CFU_APB_CFU_STATUS_HC_COMPLETE_SHIFT   2
#define CFU_APB_CFU_STATUS_HC_COMPLETE_WIDTH   1
#define CFU_APB_CFU_STATUS_HC_COMPLETE_MASK    0X00000004

#define CFU_APB_CFU_STATUS_CFI_CFRAME_BUSY_SHIFT   1
#define CFU_APB_CFU_STATUS_CFI_CFRAME_BUSY_WIDTH   1
#define CFU_APB_CFU_STATUS_CFI_CFRAME_BUSY_MASK    0X00000002

#define CFU_APB_CFU_STATUS_CFU_STREAM_BUSY_SHIFT   0
#define CFU_APB_CFU_STATUS_CFU_STREAM_BUSY_WIDTH   1
#define CFU_APB_CFU_STATUS_CFU_STREAM_BUSY_MASK    0X00000001

/**
 * Register: CFU_APB_CFU_INTERNAL_STATUS
 */
#define CFU_APB_CFU_INTERNAL_STATUS    ( ( CFU_APB_BASEADDR ) + 0X00000104 )

#define CFU_APB_CFU_INTERNAL_STATUS_SSI_EOS_SHIFT   22
#define CFU_APB_CFU_INTERNAL_STATUS_SSI_EOS_WIDTH   1
#define CFU_APB_CFU_INTERNAL_STATUS_SSI_EOS_MASK    0X00400000

#define CFU_APB_CFU_INTERNAL_STATUS_SSI_GWE_SHIFT   21
#define CFU_APB_CFU_INTERNAL_STATUS_SSI_GWE_WIDTH   1
#define CFU_APB_CFU_INTERNAL_STATUS_SSI_GWE_MASK    0X00200000

#define CFU_APB_CFU_INTERNAL_STATUS_RFIFO_EMPTY_SHIFT   20
#define CFU_APB_CFU_INTERNAL_STATUS_RFIFO_EMPTY_WIDTH   1
#define CFU_APB_CFU_INTERNAL_STATUS_RFIFO_EMPTY_MASK    0X00100000

#define CFU_APB_CFU_INTERNAL_STATUS_RFIFO_FULL_SHIFT   19
#define CFU_APB_CFU_INTERNAL_STATUS_RFIFO_FULL_WIDTH   1
#define CFU_APB_CFU_INTERNAL_STATUS_RFIFO_FULL_MASK    0X00080000

#define CFU_APB_CFU_INTERNAL_STATUS_SEL_SFR_SHIFT   18
#define CFU_APB_CFU_INTERNAL_STATUS_SEL_SFR_WIDTH   1
#define CFU_APB_CFU_INTERNAL_STATUS_SEL_SFR_MASK    0X00040000

#define CFU_APB_CFU_INTERNAL_STATUS_STREAM_CFRAME_SHIFT   17
#define CFU_APB_CFU_INTERNAL_STATUS_STREAM_CFRAME_WIDTH   1
#define CFU_APB_CFU_INTERNAL_STATUS_STREAM_CFRAME_MASK    0X00020000

#define CFU_APB_CFU_INTERNAL_STATUS_FDRI_PHASE_SHIFT   16
#define CFU_APB_CFU_INTERNAL_STATUS_FDRI_PHASE_WIDTH   1
#define CFU_APB_CFU_INTERNAL_STATUS_FDRI_PHASE_MASK    0X00010000

#define CFU_APB_CFU_INTERNAL_STATUS_CFI_PIPE_EN_SHIFT   15
#define CFU_APB_CFU_INTERNAL_STATUS_CFI_PIPE_EN_WIDTH   1
#define CFU_APB_CFU_INTERNAL_STATUS_CFI_PIPE_EN_MASK    0X00008000

#define CFU_APB_CFU_INTERNAL_STATUS_AWFIFO_DCNT_SHIFT   10
#define CFU_APB_CFU_INTERNAL_STATUS_AWFIFO_DCNT_WIDTH   5
#define CFU_APB_CFU_INTERNAL_STATUS_AWFIFO_DCNT_MASK    0X00007C00

#define CFU_APB_CFU_INTERNAL_STATUS_WFIFO_DCNT_SHIFT   5
#define CFU_APB_CFU_INTERNAL_STATUS_WFIFO_DCNT_WIDTH   5
#define CFU_APB_CFU_INTERNAL_STATUS_WFIFO_DCNT_MASK    0X000003E0

#define CFU_APB_CFU_INTERNAL_STATUS_REPAIR_BUSY_SHIFT   4
#define CFU_APB_CFU_INTERNAL_STATUS_REPAIR_BUSY_WIDTH   1
#define CFU_APB_CFU_INTERNAL_STATUS_REPAIR_BUSY_MASK    0X00000010

#define CFU_APB_CFU_INTERNAL_STATUS_TRIMU_BUSY_SHIFT   3
#define CFU_APB_CFU_INTERNAL_STATUS_TRIMU_BUSY_WIDTH   1
#define CFU_APB_CFU_INTERNAL_STATUS_TRIMU_BUSY_MASK    0X00000008

#define CFU_APB_CFU_INTERNAL_STATUS_TRIMB_BUSY_SHIFT   2
#define CFU_APB_CFU_INTERNAL_STATUS_TRIMB_BUSY_WIDTH   1
#define CFU_APB_CFU_INTERNAL_STATUS_TRIMB_BUSY_MASK    0X00000004

#define CFU_APB_CFU_INTERNAL_STATUS_HCLEANR_BUSY_SHIFT   1
#define CFU_APB_CFU_INTERNAL_STATUS_HCLEANR_BUSY_WIDTH   1
#define CFU_APB_CFU_INTERNAL_STATUS_HCLEANR_BUSY_MASK    0X00000002

#define CFU_APB_CFU_INTERNAL_STATUS_HCLEAN_BUSY_SHIFT   0
#define CFU_APB_CFU_INTERNAL_STATUS_HCLEAN_BUSY_WIDTH   1
#define CFU_APB_CFU_INTERNAL_STATUS_HCLEAN_BUSY_MASK    0X00000001

/**
 * Register: CFU_APB_CFU_QWORD_CNT
 */
#define CFU_APB_CFU_QWORD_CNT    ( ( CFU_APB_BASEADDR ) + 0X00000108 )

#define CFU_APB_CFU_QWORD_CNT_NUM_SHIFT   0
#define CFU_APB_CFU_QWORD_CNT_NUM_WIDTH   32
#define CFU_APB_CFU_QWORD_CNT_NUM_MASK    0XFFFFFFFF

/**
 * Register: CFU_APB_CFU_CRC_LIVE
 */
#define CFU_APB_CFU_CRC_LIVE    ( ( CFU_APB_BASEADDR ) + 0X0000010C )

#define CFU_APB_CFU_CRC_LIVE_NUM_SHIFT   0
#define CFU_APB_CFU_CRC_LIVE_NUM_WIDTH   32
#define CFU_APB_CFU_CRC_LIVE_NUM_MASK    0XFFFFFFFF

/**
 * Register: CFU_APB_CFU_PENDING_READ_CNT
 */
#define CFU_APB_CFU_PENDING_READ_CNT    ( ( CFU_APB_BASEADDR ) + 0X00000110 )

#define CFU_APB_CFU_PENDING_READ_CNT_NUM_SHIFT   0
#define CFU_APB_CFU_PENDING_READ_CNT_NUM_WIDTH   25
#define CFU_APB_CFU_PENDING_READ_CNT_NUM_MASK    0X01FFFFFF

/**
 * Register: CFU_APB_CFU_FDRI_CNT
 */
#define CFU_APB_CFU_FDRI_CNT    ( ( CFU_APB_BASEADDR ) + 0X00000114 )

#define CFU_APB_CFU_FDRI_CNT_NUM_SHIFT   0
#define CFU_APB_CFU_FDRI_CNT_NUM_WIDTH   32
#define CFU_APB_CFU_FDRI_CNT_NUM_MASK    0XFFFFFFFF

/**
 * Register: CFU_APB_CFU_ECO1
 */
#define CFU_APB_CFU_ECO1    ( ( CFU_APB_BASEADDR ) + 0X00000118 )

#define CFU_APB_CFU_ECO1_VALUE_SHIFT   0
#define CFU_APB_CFU_ECO1_VALUE_WIDTH   32
#define CFU_APB_CFU_ECO1_VALUE_MASK    0XFFFFFFFF

/**
 * Register: CFU_APB_CFU_ECO2
 */
#define CFU_APB_CFU_ECO2    ( ( CFU_APB_BASEADDR ) + 0X0000011C )

#define CFU_APB_CFU_ECO2_VALUE_SHIFT   0
#define CFU_APB_CFU_ECO2_VALUE_WIDTH   32
#define CFU_APB_CFU_ECO2_VALUE_MASK    0XFFFFFFFF

#ifdef __cplusplus
}
#endif


#endif /* _CFU_APB_H_ */