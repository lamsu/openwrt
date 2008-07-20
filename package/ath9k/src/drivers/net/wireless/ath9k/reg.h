/*
 * Copyright (c) 2008 Atheros Communications Inc.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef REG_H
#define REG_H

#define AR_CR                0x0008
#define AR_CR_RXE            0x00000004
#define AR_CR_RXD            0x00000020
#define AR_CR_SWI            0x00000040

#define AR_RXDP              0x000C

#define AR_CFG               0x0014
#define AR_CFG_SWTD          0x00000001
#define AR_CFG_SWTB          0x00000002
#define AR_CFG_SWRD          0x00000004
#define AR_CFG_SWRB          0x00000008
#define AR_CFG_SWRG          0x00000010
#define AR_CFG_AP_ADHOC_INDICATION 0x00000020
#define AR_CFG_PHOK          0x00000100
#define AR_CFG_CLK_GATE_DIS  0x00000400
#define AR_CFG_EEBS          0x00000200
#define AR_CFG_PCI_MASTER_REQ_Q_THRESH         0x00060000
#define AR_CFG_PCI_MASTER_REQ_Q_THRESH_S       17

#define AR_MIRT              0x0020
#define AR_MIRT_VAL          0x0000ffff
#define AR_MIRT_VAL_S        16

#define AR_IER               0x0024
#define AR_IER_ENABLE        0x00000001
#define AR_IER_DISABLE       0x00000000

#define AR_TIMT              0x0028
#define AR_TIMT_LAST         0x0000ffff
#define AR_TIMT_LAST_S       0
#define AR_TIMT_FIRST        0xffff0000
#define AR_TIMT_FIRST_S      16

#define AR_RIMT              0x002C
#define AR_RIMT_LAST         0x0000ffff
#define AR_RIMT_LAST_S       0
#define AR_RIMT_FIRST        0xffff0000
#define AR_RIMT_FIRST_S      16

#define AR_DMASIZE_4B        0x00000000
#define AR_DMASIZE_8B        0x00000001
#define AR_DMASIZE_16B       0x00000002
#define AR_DMASIZE_32B       0x00000003
#define AR_DMASIZE_64B       0x00000004
#define AR_DMASIZE_128B      0x00000005
#define AR_DMASIZE_256B      0x00000006
#define AR_DMASIZE_512B      0x00000007

#define AR_TXCFG             0x0030
#define AR_TXCFG_DMASZ_MASK  0x00000003
#define AR_TXCFG_DMASZ_4B    0
#define AR_TXCFG_DMASZ_8B    1
#define AR_TXCFG_DMASZ_16B   2
#define AR_TXCFG_DMASZ_32B   3
#define AR_TXCFG_DMASZ_64B   4
#define AR_TXCFG_DMASZ_128B  5
#define AR_TXCFG_DMASZ_256B  6
#define AR_TXCFG_DMASZ_512B  7
#define AR_FTRIG             0x000003F0
#define AR_FTRIG_S           4
#define AR_FTRIG_IMMED       0x00000000
#define AR_FTRIG_64B         0x00000010
#define AR_FTRIG_128B        0x00000020
#define AR_FTRIG_192B        0x00000030
#define AR_FTRIG_256B        0x00000040
#define AR_FTRIG_512B        0x00000080
#define AR_TXCFG_ADHOC_BEACON_ATIM_TX_POLICY 0x00000800

#define AR_RXCFG             0x0034
#define AR_RXCFG_CHIRP       0x00000008
#define AR_RXCFG_ZLFDMA      0x00000010
#define AR_RXCFG_DMASZ_MASK  0x00000007
#define AR_RXCFG_DMASZ_4B    0
#define AR_RXCFG_DMASZ_8B    1
#define AR_RXCFG_DMASZ_16B   2
#define AR_RXCFG_DMASZ_32B   3
#define AR_RXCFG_DMASZ_64B   4
#define AR_RXCFG_DMASZ_128B  5
#define AR_RXCFG_DMASZ_256B  6
#define AR_RXCFG_DMASZ_512B  7

#define AR_MIBC              0x0040
#define AR_MIBC_COW          0x00000001
#define AR_MIBC_FMC          0x00000002
#define AR_MIBC_CMC          0x00000004
#define AR_MIBC_MCS          0x00000008

#define AR_TOPS              0x0044
#define AR_TOPS_MASK         0x0000FFFF

#define AR_RXNPTO            0x0048
#define AR_RXNPTO_MASK       0x000003FF

#define AR_TXNPTO            0x004C
#define AR_TXNPTO_MASK       0x000003FF
#define AR_TXNPTO_QCU_MASK   0x000FFC00

#define AR_RPGTO             0x0050
#define AR_RPGTO_MASK        0x000003FF

#define AR_RPCNT             0x0054
#define AR_RPCNT_MASK        0x0000001F

#define AR_MACMISC           0x0058
#define AR_MACMISC_PCI_EXT_FORCE        0x00000010
#define AR_MACMISC_DMA_OBS              0x000001E0
#define AR_MACMISC_DMA_OBS_S            5
#define AR_MACMISC_DMA_OBS_LINE_0       0
#define AR_MACMISC_DMA_OBS_LINE_1       1
#define AR_MACMISC_DMA_OBS_LINE_2       2
#define AR_MACMISC_DMA_OBS_LINE_3       3
#define AR_MACMISC_DMA_OBS_LINE_4       4
#define AR_MACMISC_DMA_OBS_LINE_5       5
#define AR_MACMISC_DMA_OBS_LINE_6       6
#define AR_MACMISC_DMA_OBS_LINE_7       7
#define AR_MACMISC_DMA_OBS_LINE_8       8
#define AR_MACMISC_MISC_OBS             0x00000E00
#define AR_MACMISC_MISC_OBS_S           9
#define AR_MACMISC_MISC_OBS_BUS_LSB     0x00007000
#define AR_MACMISC_MISC_OBS_BUS_LSB_S   12
#define AR_MACMISC_MISC_OBS_BUS_MSB     0x00038000
#define AR_MACMISC_MISC_OBS_BUS_MSB_S   15
#define AR_MACMISC_MISC_OBS_BUS_1       1

#define AR_GTXTO    0x0064
#define AR_GTXTO_TIMEOUT_COUNTER    0x0000FFFF
#define AR_GTXTO_TIMEOUT_LIMIT      0xFFFF0000
#define AR_GTXTO_TIMEOUT_LIMIT_S    16

#define AR_GTTM     0x0068
#define AR_GTTM_USEC          0x00000001
#define AR_GTTM_IGNORE_IDLE   0x00000002
#define AR_GTTM_RESET_IDLE    0x00000004
#define AR_GTTM_CST_USEC      0x00000008

#define AR_CST         0x006C
#define AR_CST_TIMEOUT_COUNTER    0x0000FFFF
#define AR_CST_TIMEOUT_LIMIT      0xFFFF0000
#define AR_CST_TIMEOUT_LIMIT_S    16

#define AR_SREV_VERSION_9100                  0x014

#define AR_SREV_5416_V20_OR_LATER(_ah) \
	(AR_SREV_9100((_ah)) || AR_SREV_5416_20_OR_LATER(_ah))
#define AR_SREV_5416_V22_OR_LATER(_ah) \
	(AR_SREV_9100((_ah)) || AR_SREV_5416_22_OR_LATER(_ah))

#define AR_ISR               0x0080
#define AR_ISR_RXOK          0x00000001
#define AR_ISR_RXDESC        0x00000002
#define AR_ISR_RXERR         0x00000004
#define AR_ISR_RXNOPKT       0x00000008
#define AR_ISR_RXEOL         0x00000010
#define AR_ISR_RXORN         0x00000020
#define AR_ISR_TXOK          0x00000040
#define AR_ISR_TXDESC        0x00000080
#define AR_ISR_TXERR         0x00000100
#define AR_ISR_TXNOPKT       0x00000200
#define AR_ISR_TXEOL         0x00000400
#define AR_ISR_TXURN         0x00000800
#define AR_ISR_MIB           0x00001000
#define AR_ISR_SWI           0x00002000
#define AR_ISR_RXPHY         0x00004000
#define AR_ISR_RXKCM         0x00008000
#define AR_ISR_SWBA          0x00010000
#define AR_ISR_BRSSI         0x00020000
#define AR_ISR_BMISS         0x00040000
#define AR_ISR_BNR           0x00100000
#define AR_ISR_RXCHIRP       0x00200000
#define AR_ISR_BCNMISC       0x00800000
#define AR_ISR_TIM           0x00800000
#define AR_ISR_QCBROVF       0x02000000
#define AR_ISR_QCBRURN       0x04000000
#define AR_ISR_QTRIG         0x08000000
#define AR_ISR_GENTMR        0x10000000

#define AR_ISR_TXMINTR       0x00080000
#define AR_ISR_RXMINTR       0x01000000
#define AR_ISR_TXINTM        0x40000000
#define AR_ISR_RXINTM        0x80000000

#define AR_ISR_S0               0x0084
#define AR_ISR_S0_QCU_TXOK      0x000003FF
#define AR_ISR_S0_QCU_TXOK_S    0
#define AR_ISR_S0_QCU_TXDESC    0x03FF0000
#define AR_ISR_S0_QCU_TXDESC_S  16

#define AR_ISR_S1              0x0088
#define AR_ISR_S1_QCU_TXERR    0x000003FF
#define AR_ISR_S1_QCU_TXERR_S  0
#define AR_ISR_S1_QCU_TXEOL    0x03FF0000
#define AR_ISR_S1_QCU_TXEOL_S  16

#define AR_ISR_S2              0x008c
#define AR_ISR_S2_QCU_TXURN    0x000003FF
#define AR_ISR_S2_CST          0x00400000
#define AR_ISR_S2_GTT          0x00800000
#define AR_ISR_S2_TIM          0x01000000
#define AR_ISR_S2_CABEND       0x02000000
#define AR_ISR_S2_DTIMSYNC     0x04000000
#define AR_ISR_S2_BCNTO        0x08000000
#define AR_ISR_S2_CABTO        0x10000000
#define AR_ISR_S2_DTIM         0x20000000
#define AR_ISR_S2_TSFOOR       0x40000000
#define AR_ISR_S2_TBTT_TIME    0x80000000

#define AR_ISR_S3             0x0090
#define AR_ISR_S3_QCU_QCBROVF    0x000003FF
#define AR_ISR_S3_QCU_QCBRURN    0x03FF0000

#define AR_ISR_S4              0x0094
#define AR_ISR_S4_QCU_QTRIG    0x000003FF
#define AR_ISR_S4_RESV0        0xFFFFFC00

#define AR_ISR_S5                   0x0098
#define AR_ISR_S5_TIMER_TRIG        0x000000FF
#define AR_ISR_S5_TIMER_THRESH      0x0007FE00
#define AR_ISR_S5_TIM_TIMER         0x00000010
#define AR_ISR_S5_DTIM_TIMER        0x00000020
#define AR_ISR_S5_S                 0x00d8
#define AR_IMR_S5                   0x00b8
#define AR_IMR_S5_TIM_TIMER         0x00000010
#define AR_IMR_S5_DTIM_TIMER        0x00000020


#define AR_IMR               0x00a0
#define AR_IMR_RXOK          0x00000001
#define AR_IMR_RXDESC        0x00000002
#define AR_IMR_RXERR         0x00000004
#define AR_IMR_RXNOPKT       0x00000008
#define AR_IMR_RXEOL         0x00000010
#define AR_IMR_RXORN         0x00000020
#define AR_IMR_TXOK          0x00000040
#define AR_IMR_TXDESC        0x00000080
#define AR_IMR_TXERR         0x00000100
#define AR_IMR_TXNOPKT       0x00000200
#define AR_IMR_TXEOL         0x00000400
#define AR_IMR_TXURN         0x00000800
#define AR_IMR_MIB           0x00001000
#define AR_IMR_SWI           0x00002000
#define AR_IMR_RXPHY         0x00004000
#define AR_IMR_RXKCM         0x00008000
#define AR_IMR_SWBA          0x00010000
#define AR_IMR_BRSSI         0x00020000
#define AR_IMR_BMISS         0x00040000
#define AR_IMR_BNR           0x00100000
#define AR_IMR_RXCHIRP       0x00200000
#define AR_IMR_BCNMISC       0x00800000
#define AR_IMR_TIM           0x00800000
#define AR_IMR_QCBROVF       0x02000000
#define AR_IMR_QCBRURN       0x04000000
#define AR_IMR_QTRIG         0x08000000
#define AR_IMR_GENTMR        0x10000000

#define AR_IMR_TXMINTR       0x00080000
#define AR_IMR_RXMINTR       0x01000000
#define AR_IMR_TXINTM        0x40000000
#define AR_IMR_RXINTM        0x80000000

#define AR_IMR_S0               0x00a4
#define AR_IMR_S0_QCU_TXOK      0x000003FF
#define AR_IMR_S0_QCU_TXOK_S    0
#define AR_IMR_S0_QCU_TXDESC    0x03FF0000
#define AR_IMR_S0_QCU_TXDESC_S  16

#define AR_IMR_S1              0x00a8
#define AR_IMR_S1_QCU_TXERR    0x000003FF
#define AR_IMR_S1_QCU_TXERR_S  0
#define AR_IMR_S1_QCU_TXEOL    0x03FF0000
#define AR_IMR_S1_QCU_TXEOL_S  16

#define AR_IMR_S2              0x00ac
#define AR_IMR_S2_QCU_TXURN    0x000003FF
#define AR_IMR_S2_QCU_TXURN_S  0
#define AR_IMR_S2_CST          0x00400000
#define AR_IMR_S2_GTT          0x00800000
#define AR_IMR_S2_TIM          0x01000000
#define AR_IMR_S2_CABEND       0x02000000
#define AR_IMR_S2_DTIMSYNC     0x04000000
#define AR_IMR_S2_BCNTO        0x08000000
#define AR_IMR_S2_CABTO        0x10000000
#define AR_IMR_S2_DTIM         0x20000000
#define AR_IMR_S2_TSFOOR       0x40000000

#define AR_IMR_S3                0x00b0
#define AR_IMR_S3_QCU_QCBROVF    0x000003FF
#define AR_IMR_S3_QCU_QCBRURN    0x03FF0000
#define AR_IMR_S3_QCU_QCBRURN_S  16

#define AR_IMR_S4              0x00b4
#define AR_IMR_S4_QCU_QTRIG    0x000003FF
#define AR_IMR_S4_RESV0        0xFFFFFC00

#define AR_IMR_S5              0x00b8
#define AR_IMR_S5_TIMER_TRIG        0x000000FF
#define AR_IMR_S5_TIMER_THRESH      0x0000FF00


#define AR_ISR_RAC            0x00c0
#define AR_ISR_S0_S           0x00c4
#define AR_ISR_S0_QCU_TXOK      0x000003FF
#define AR_ISR_S0_QCU_TXOK_S    0
#define AR_ISR_S0_QCU_TXDESC    0x03FF0000
#define AR_ISR_S0_QCU_TXDESC_S  16

#define AR_ISR_S1_S           0x00c8
#define AR_ISR_S1_QCU_TXERR    0x000003FF
#define AR_ISR_S1_QCU_TXERR_S  0
#define AR_ISR_S1_QCU_TXEOL    0x03FF0000
#define AR_ISR_S1_QCU_TXEOL_S  16

#define AR_ISR_S2_S           0x00cc
#define AR_ISR_S3_S           0x00d0
#define AR_ISR_S4_S           0x00d4
#define AR_ISR_S5_S           0x00d8
#define AR_DMADBG_0           0x00e0
#define AR_DMADBG_1           0x00e4
#define AR_DMADBG_2           0x00e8
#define AR_DMADBG_3           0x00ec
#define AR_DMADBG_4           0x00f0
#define AR_DMADBG_5           0x00f4
#define AR_DMADBG_6           0x00f8
#define AR_DMADBG_7           0x00fc

#define AR_NUM_QCU      10
#define AR_QCU_0        0x0001
#define AR_QCU_1        0x0002
#define AR_QCU_2        0x0004
#define AR_QCU_3        0x0008
#define AR_QCU_4        0x0010
#define AR_QCU_5        0x0020
#define AR_QCU_6        0x0040
#define AR_QCU_7        0x0080
#define AR_QCU_8        0x0100
#define AR_QCU_9        0x0200

#define AR_Q0_TXDP           0x0800
#define AR_Q1_TXDP           0x0804
#define AR_Q2_TXDP           0x0808
#define AR_Q3_TXDP           0x080c
#define AR_Q4_TXDP           0x0810
#define AR_Q5_TXDP           0x0814
#define AR_Q6_TXDP           0x0818
#define AR_Q7_TXDP           0x081c
#define AR_Q8_TXDP           0x0820
#define AR_Q9_TXDP           0x0824
#define AR_QTXDP(_i)    (AR_Q0_TXDP + ((_i)<<2))

#define AR_Q_TXE             0x0840
#define AR_Q_TXE_M           0x000003FF

#define AR_Q_TXD             0x0880
#define AR_Q_TXD_M           0x000003FF

#define AR_Q0_CBRCFG         0x08c0
#define AR_Q1_CBRCFG         0x08c4
#define AR_Q2_CBRCFG         0x08c8
#define AR_Q3_CBRCFG         0x08cc
#define AR_Q4_CBRCFG         0x08d0
#define AR_Q5_CBRCFG         0x08d4
#define AR_Q6_CBRCFG         0x08d8
#define AR_Q7_CBRCFG         0x08dc
#define AR_Q8_CBRCFG         0x08e0
#define AR_Q9_CBRCFG         0x08e4
#define AR_QCBRCFG(_i)      (AR_Q0_CBRCFG + ((_i)<<2))
#define AR_Q_CBRCFG_INTERVAL     0x00FFFFFF
#define AR_Q_CBRCFG_INTERVAL_S   0
#define AR_Q_CBRCFG_OVF_THRESH   0xFF000000
#define AR_Q_CBRCFG_OVF_THRESH_S 24

#define AR_Q0_RDYTIMECFG         0x0900
#define AR_Q1_RDYTIMECFG         0x0904
#define AR_Q2_RDYTIMECFG         0x0908
#define AR_Q3_RDYTIMECFG         0x090c
#define AR_Q4_RDYTIMECFG         0x0910
#define AR_Q5_RDYTIMECFG         0x0914
#define AR_Q6_RDYTIMECFG         0x0918
#define AR_Q7_RDYTIMECFG         0x091c
#define AR_Q8_RDYTIMECFG         0x0920
#define AR_Q9_RDYTIMECFG         0x0924
#define AR_QRDYTIMECFG(_i)       (AR_Q0_RDYTIMECFG + ((_i)<<2))
#define AR_Q_RDYTIMECFG_DURATION   0x00FFFFFF
#define AR_Q_RDYTIMECFG_DURATION_S 0
#define AR_Q_RDYTIMECFG_EN         0x01000000

#define AR_Q_ONESHOTARM_SC       0x0940
#define AR_Q_ONESHOTARM_SC_M     0x000003FF
#define AR_Q_ONESHOTARM_SC_RESV0 0xFFFFFC00

#define AR_Q_ONESHOTARM_CC       0x0980
#define AR_Q_ONESHOTARM_CC_M     0x000003FF
#define AR_Q_ONESHOTARM_CC_RESV0 0xFFFFFC00

#define AR_Q0_MISC         0x09c0
#define AR_Q1_MISC         0x09c4
#define AR_Q2_MISC         0x09c8
#define AR_Q3_MISC         0x09cc
#define AR_Q4_MISC         0x09d0
#define AR_Q5_MISC         0x09d4
#define AR_Q6_MISC         0x09d8
#define AR_Q7_MISC         0x09dc
#define AR_Q8_MISC         0x09e0
#define AR_Q9_MISC         0x09e4
#define AR_QMISC(_i)       (AR_Q0_MISC + ((_i)<<2))
#define AR_Q_MISC_FSP                     0x0000000F
#define AR_Q_MISC_FSP_ASAP                0
#define AR_Q_MISC_FSP_CBR                 1
#define AR_Q_MISC_FSP_DBA_GATED           2
#define AR_Q_MISC_FSP_TIM_GATED           3
#define AR_Q_MISC_FSP_BEACON_SENT_GATED   4
#define AR_Q_MISC_FSP_BEACON_RCVD_GATED   5
#define AR_Q_MISC_ONE_SHOT_EN             0x00000010
#define AR_Q_MISC_CBR_INCR_DIS1           0x00000020
#define AR_Q_MISC_CBR_INCR_DIS0           0x00000040
#define AR_Q_MISC_BEACON_USE              0x00000080
#define AR_Q_MISC_CBR_EXP_CNTR_LIMIT_EN   0x00000100
#define AR_Q_MISC_RDYTIME_EXP_POLICY      0x00000200
#define AR_Q_MISC_RESET_CBR_EXP_CTR       0x00000400
#define AR_Q_MISC_DCU_EARLY_TERM_REQ      0x00000800
#define AR_Q_MISC_RESV0                   0xFFFFF000

#define AR_Q0_STS         0x0a00
#define AR_Q1_STS         0x0a04
#define AR_Q2_STS         0x0a08
#define AR_Q3_STS         0x0a0c
#define AR_Q4_STS         0x0a10
#define AR_Q5_STS         0x0a14
#define AR_Q6_STS         0x0a18
#define AR_Q7_STS         0x0a1c
#define AR_Q8_STS         0x0a20
#define AR_Q9_STS         0x0a24
#define AR_QSTS(_i)       (AR_Q0_STS + ((_i)<<2))
#define AR_Q_STS_PEND_FR_CNT          0x00000003
#define AR_Q_STS_RESV0                0x000000FC
#define AR_Q_STS_CBR_EXP_CNT          0x0000FF00
#define AR_Q_STS_RESV1                0xFFFF0000

#define AR_Q_RDYTIMESHDN    0x0a40
#define AR_Q_RDYTIMESHDN_M  0x000003FF


#define AR_NUM_DCU      10
#define AR_DCU_0        0x0001
#define AR_DCU_1        0x0002
#define AR_DCU_2        0x0004
#define AR_DCU_3        0x0008
#define AR_DCU_4        0x0010
#define AR_DCU_5        0x0020
#define AR_DCU_6        0x0040
#define AR_DCU_7        0x0080
#define AR_DCU_8        0x0100
#define AR_DCU_9        0x0200

#define AR_D0_QCUMASK     0x1000
#define AR_D1_QCUMASK     0x1004
#define AR_D2_QCUMASK     0x1008
#define AR_D3_QCUMASK     0x100c
#define AR_D4_QCUMASK     0x1010
#define AR_D5_QCUMASK     0x1014
#define AR_D6_QCUMASK     0x1018
#define AR_D7_QCUMASK     0x101c
#define AR_D8_QCUMASK     0x1020
#define AR_D9_QCUMASK     0x1024
#define AR_DQCUMASK(_i)   (AR_D0_QCUMASK + ((_i)<<2))
#define AR_D_QCUMASK         0x000003FF
#define AR_D_QCUMASK_RESV0   0xFFFFFC00

#define AR_D_TXBLK_CMD  0x1038
#define AR_D_TXBLK_DATA(i) (AR_D_TXBLK_CMD+(i))

#define AR_D0_LCL_IFS     0x1040
#define AR_D1_LCL_IFS     0x1044
#define AR_D2_LCL_IFS     0x1048
#define AR_D3_LCL_IFS     0x104c
#define AR_D4_LCL_IFS     0x1050
#define AR_D5_LCL_IFS     0x1054
#define AR_D6_LCL_IFS     0x1058
#define AR_D7_LCL_IFS     0x105c
#define AR_D8_LCL_IFS     0x1060
#define AR_D9_LCL_IFS     0x1064
#define AR_DLCL_IFS(_i)   (AR_D0_LCL_IFS + ((_i)<<2))
#define AR_D_LCL_IFS_CWMIN       0x000003FF
#define AR_D_LCL_IFS_CWMIN_S     0
#define AR_D_LCL_IFS_CWMAX       0x000FFC00
#define AR_D_LCL_IFS_CWMAX_S     10
#define AR_D_LCL_IFS_AIFS        0x0FF00000
#define AR_D_LCL_IFS_AIFS_S      20

#define AR_D_LCL_IFS_RESV0    0xF0000000

#define AR_D0_RETRY_LIMIT     0x1080
#define AR_D1_RETRY_LIMIT     0x1084
#define AR_D2_RETRY_LIMIT     0x1088
#define AR_D3_RETRY_LIMIT     0x108c
#define AR_D4_RETRY_LIMIT     0x1090
#define AR_D5_RETRY_LIMIT     0x1094
#define AR_D6_RETRY_LIMIT     0x1098
#define AR_D7_RETRY_LIMIT     0x109c
#define AR_D8_RETRY_LIMIT     0x10a0
#define AR_D9_RETRY_LIMIT     0x10a4
#define AR_DRETRY_LIMIT(_i)   (AR_D0_RETRY_LIMIT + ((_i)<<2))
#define AR_D_RETRY_LIMIT_FR_SH       0x0000000F
#define AR_D_RETRY_LIMIT_FR_SH_S     0
#define AR_D_RETRY_LIMIT_STA_SH      0x00003F00
#define AR_D_RETRY_LIMIT_STA_SH_S    8
#define AR_D_RETRY_LIMIT_STA_LG      0x000FC000
#define AR_D_RETRY_LIMIT_STA_LG_S    14
#define AR_D_RETRY_LIMIT_RESV0       0xFFF00000

#define AR_D0_CHNTIME     0x10c0
#define AR_D1_CHNTIME     0x10c4
#define AR_D2_CHNTIME     0x10c8
#define AR_D3_CHNTIME     0x10cc
#define AR_D4_CHNTIME     0x10d0
#define AR_D5_CHNTIME     0x10d4
#define AR_D6_CHNTIME     0x10d8
#define AR_D7_CHNTIME     0x10dc
#define AR_D8_CHNTIME     0x10e0
#define AR_D9_CHNTIME     0x10e4
#define AR_DCHNTIME(_i)   (AR_D0_CHNTIME + ((_i)<<2))
#define AR_D_CHNTIME_DUR         0x000FFFFF
#define AR_D_CHNTIME_DUR_S       0
#define AR_D_CHNTIME_EN          0x00100000
#define AR_D_CHNTIME_RESV0       0xFFE00000

#define AR_D0_MISC        0x1100
#define AR_D1_MISC        0x1104
#define AR_D2_MISC        0x1108
#define AR_D3_MISC        0x110c
#define AR_D4_MISC        0x1110
#define AR_D5_MISC        0x1114
#define AR_D6_MISC        0x1118
#define AR_D7_MISC        0x111c
#define AR_D8_MISC        0x1120
#define AR_D9_MISC        0x1124
#define AR_DMISC(_i)      (AR_D0_MISC + ((_i)<<2))
#define AR_D_MISC_BKOFF_THRESH        0x0000003F
#define AR_D_MISC_RETRY_CNT_RESET_EN  0x00000040
#define AR_D_MISC_CW_RESET_EN         0x00000080
#define AR_D_MISC_FRAG_WAIT_EN        0x00000100
#define AR_D_MISC_FRAG_BKOFF_EN       0x00000200
#define AR_D_MISC_CW_BKOFF_EN         0x00001000
#define AR_D_MISC_VIR_COL_HANDLING    0x0000C000
#define AR_D_MISC_VIR_COL_HANDLING_S  14
#define AR_D_MISC_VIR_COL_HANDLING_DEFAULT 0
#define AR_D_MISC_VIR_COL_HANDLING_IGNORE  1
#define AR_D_MISC_BEACON_USE          0x00010000
#define AR_D_MISC_ARB_LOCKOUT_CNTRL   0x00060000
#define AR_D_MISC_ARB_LOCKOUT_CNTRL_S 17
#define AR_D_MISC_ARB_LOCKOUT_CNTRL_NONE     0
#define AR_D_MISC_ARB_LOCKOUT_CNTRL_INTRA_FR 1
#define AR_D_MISC_ARB_LOCKOUT_CNTRL_GLOBAL   2
#define AR_D_MISC_ARB_LOCKOUT_IGNORE  0x00080000
#define AR_D_MISC_SEQ_NUM_INCR_DIS    0x00100000
#define AR_D_MISC_POST_FR_BKOFF_DIS   0x00200000
#define AR_D_MISC_VIT_COL_CW_BKOFF_EN 0x00400000
#define AR_D_MISC_BLOWN_IFS_RETRY_EN  0x00800000
#define AR_D_MISC_RESV0               0xFF000000

#define AR_D_SEQNUM      0x1140

#define AR_D_GBL_IFS_SIFS         0x1030
#define AR_D_GBL_IFS_SIFS_M       0x0000FFFF
#define AR_D_GBL_IFS_SIFS_RESV0   0xFFFFFFFF

#define AR_D_TXBLK_BASE            0x1038
#define AR_D_TXBLK_WRITE_BITMASK    0x0000FFFF
#define AR_D_TXBLK_WRITE_BITMASK_S  0
#define AR_D_TXBLK_WRITE_SLICE      0x000F0000
#define AR_D_TXBLK_WRITE_SLICE_S    16
#define AR_D_TXBLK_WRITE_DCU        0x00F00000
#define AR_D_TXBLK_WRITE_DCU_S      20
#define AR_D_TXBLK_WRITE_COMMAND    0x0F000000
#define AR_D_TXBLK_WRITE_COMMAND_S      24

#define AR_D_GBL_IFS_SLOT         0x1070
#define AR_D_GBL_IFS_SLOT_M       0x0000FFFF
#define AR_D_GBL_IFS_SLOT_RESV0   0xFFFF0000

#define AR_D_GBL_IFS_EIFS         0x10b0
#define AR_D_GBL_IFS_EIFS_M       0x0000FFFF
#define AR_D_GBL_IFS_EIFS_RESV0   0xFFFF0000

#define AR_D_GBL_IFS_MISC        0x10f0
#define AR_D_GBL_IFS_MISC_LFSR_SLICE_SEL        0x00000007
#define AR_D_GBL_IFS_MISC_TURBO_MODE            0x00000008
#define AR_D_GBL_IFS_MISC_USEC_DURATION         0x000FFC00
#define AR_D_GBL_IFS_MISC_DCU_ARBITER_DLY       0x00300000
#define AR_D_GBL_IFS_MISC_RANDOM_LFSR_SLICE_DIS 0x01000000
#define AR_D_GBL_IFS_MISC_SLOT_XMIT_WIND_LEN    0x06000000
#define AR_D_GBL_IFS_MISC_FORCE_XMIT_SLOT_BOUND 0x08000000
#define AR_D_GBL_IFS_MISC_IGNORE_BACKOFF        0x10000000

#define AR_D_FPCTL                  0x1230
#define AR_D_FPCTL_DCU              0x0000000F
#define AR_D_FPCTL_DCU_S            0
#define AR_D_FPCTL_PREFETCH_EN      0x00000010
#define AR_D_FPCTL_BURST_PREFETCH   0x00007FE0
#define AR_D_FPCTL_BURST_PREFETCH_S 5

#define AR_D_TXPSE                 0x1270
#define AR_D_TXPSE_CTRL            0x000003FF
#define AR_D_TXPSE_RESV0           0x0000FC00
#define AR_D_TXPSE_STATUS          0x00010000
#define AR_D_TXPSE_RESV1           0xFFFE0000

#define AR_D_TXSLOTMASK            0x12f0
#define AR_D_TXSLOTMASK_NUM        0x0000000F

#define AR_CFG_LED                     0x1f04
#define AR_CFG_SCLK_RATE_IND           0x00000003
#define AR_CFG_SCLK_RATE_IND_S         0
#define AR_CFG_SCLK_32MHZ              0x00000000
#define AR_CFG_SCLK_4MHZ               0x00000001
#define AR_CFG_SCLK_1MHZ               0x00000002
#define AR_CFG_SCLK_32KHZ              0x00000003
#define AR_CFG_LED_BLINK_SLOW          0x00000008
#define AR_CFG_LED_BLINK_THRESH_SEL    0x00000070
#define AR_CFG_LED_MODE_SEL            0x00000380
#define AR_CFG_LED_MODE_SEL_S          7
#define AR_CFG_LED_POWER               0x00000280
#define AR_CFG_LED_POWER_S             7
#define AR_CFG_LED_NETWORK             0x00000300
#define AR_CFG_LED_NETWORK_S           7
#define AR_CFG_LED_MODE_PROP           0x0
#define AR_CFG_LED_MODE_RPROP          0x1
#define AR_CFG_LED_MODE_SPLIT          0x2
#define AR_CFG_LED_MODE_RAND           0x3
#define AR_CFG_LED_MODE_POWER_OFF      0x4
#define AR_CFG_LED_MODE_POWER_ON       0x5
#define AR_CFG_LED_MODE_NETWORK_OFF    0x4
#define AR_CFG_LED_MODE_NETWORK_ON     0x6
#define AR_CFG_LED_ASSOC_CTL           0x00000c00
#define AR_CFG_LED_ASSOC_CTL_S         10
#define AR_CFG_LED_ASSOC_NONE          0x0
#define AR_CFG_LED_ASSOC_ACTIVE        0x1
#define AR_CFG_LED_ASSOC_PENDING       0x2

#define AR_CFG_LED_BLINK_SLOW          0x00000008
#define AR_CFG_LED_BLINK_SLOW_S        3

#define AR_CFG_LED_BLINK_THRESH_SEL    0x00000070
#define AR_CFG_LED_BLINK_THRESH_SEL_S  4

#define AR_MAC_SLEEP                0x1f00
#define AR_MAC_SLEEP_MAC_AWAKE      0x00000000
#define AR_MAC_SLEEP_MAC_ASLEEP     0x00000001

#define AR_RC                0x4000
#define AR_RC_AHB            0x00000001
#define AR_RC_APB            0x00000002
#define AR_RC_HOSTIF         0x00000100

#define AR_WA                0x4004

#define AR_PM_STATE                 0x4008
#define AR_PM_STATE_PME_D3COLD_VAUX 0x00100000

#define AR_HOST_TIMEOUT             0x4018
#define AR_HOST_TIMEOUT_APB_CNTR    0x0000FFFF
#define AR_HOST_TIMEOUT_APB_CNTR_S  0
#define AR_HOST_TIMEOUT_LCL_CNTR    0xFFFF0000
#define AR_HOST_TIMEOUT_LCL_CNTR_S  16

#define AR_EEPROM                0x401c
#define AR_EEPROM_ABSENT         0x00000100
#define AR_EEPROM_CORRUPT        0x00000200
#define AR_EEPROM_PROT_MASK      0x03FFFC00
#define AR_EEPROM_PROT_MASK_S    10

#define EEPROM_PROTECT_RP_0_31        0x0001
#define EEPROM_PROTECT_WP_0_31        0x0002
#define EEPROM_PROTECT_RP_32_63       0x0004
#define EEPROM_PROTECT_WP_32_63       0x0008
#define EEPROM_PROTECT_RP_64_127      0x0010
#define EEPROM_PROTECT_WP_64_127      0x0020
#define EEPROM_PROTECT_RP_128_191     0x0040
#define EEPROM_PROTECT_WP_128_191     0x0080
#define EEPROM_PROTECT_RP_192_255     0x0100
#define EEPROM_PROTECT_WP_192_255     0x0200
#define EEPROM_PROTECT_RP_256_511     0x0400
#define EEPROM_PROTECT_WP_256_511     0x0800
#define EEPROM_PROTECT_RP_512_1023    0x1000
#define EEPROM_PROTECT_WP_512_1023    0x2000
#define EEPROM_PROTECT_RP_1024_2047   0x4000
#define EEPROM_PROTECT_WP_1024_2047   0x8000

#define AR_SREV \
	((AR_SREV_9100(ah)) ? 0x0600 : 0x4020)

#define AR_SREV_ID \
	((AR_SREV_9100(ah)) ? 0x00000FFF : 0x000000FF)
#define AR_SREV_VERSION                       0x000000F0
#define AR_SREV_VERSION_S                     4
#define AR_SREV_REVISION                      0x00000007

#define AR_SREV_ID2                           0xFFFFFFFF
#define AR_SREV_VERSION2        	      0xFFFC0000
#define AR_SREV_VERSION2_S                    18
#define AR_SREV_TYPE2        	      	      0x0003F000
#define AR_SREV_TYPE2_S                       12
#define AR_SREV_TYPE2_CHAIN		      0x00001000
#define AR_SREV_TYPE2_HOST_MODE		      0x00002000
#define AR_SREV_REVISION2        	      0x00000F00
#define AR_SREV_REVISION2_S     	      8

#define AR_SREV_VERSION_5416_PCI               0xD
#define AR_SREV_VERSION_5416_PCIE              0xC
#define AR_SREV_REVISION_5416_10               0
#define AR_SREV_REVISION_5416_20               1
#define AR_SREV_REVISION_5416_22               2
#define AR_SREV_VERSION_9160        	      0x40
#define AR_SREV_REVISION_9160_10    	      0
#define AR_SREV_REVISION_9160_11    	      1
#define AR_SREV_VERSION_9280                0x80
#define AR_SREV_REVISION_9280_10            0
#define AR_SREV_REVISION_9280_20            1
#define AR_SREV_REVISION_9280_21            2
#define AR_SREV_VERSION_9285                  0xC0
#define AR_SREV_REVISION_9285_10              0

#define AR_SREV_9100_OR_LATER(_ah) \
	(((_ah)->ah_macVersion >= AR_SREV_VERSION_5416_PCIE))
#define AR_SREV_5416_20_OR_LATER(_ah) \
	(((_ah)->ah_macVersion >= AR_SREV_VERSION_9160) || \
		((_ah)->ah_macRev >= AR_SREV_REVISION_5416_20))
#define AR_SREV_5416_22_OR_LATER(_ah) \
	(((_ah)->ah_macVersion >= AR_SREV_VERSION_9160) || \
		((_ah)->ah_macRev >= AR_SREV_REVISION_5416_22))
#define AR_SREV_9160(_ah) \
	(((_ah)->ah_macVersion == AR_SREV_VERSION_9160))
#define AR_SREV_9160_10_OR_LATER(_ah) \
	(((_ah)->ah_macVersion >= AR_SREV_VERSION_9160))
#define AR_SREV_9160_11(_ah) \
	(AR_SREV_9160(_ah) && ((_ah)->ah_macRev == AR_SREV_REVISION_9160_11))
#define AR_SREV_9280(_ah) \
	(((_ah)->ah_macVersion == AR_SREV_VERSION_9280))
#define AR_SREV_9280_10_OR_LATER(_ah) \
	(((_ah)->ah_macVersion >= AR_SREV_VERSION_9280))
#define AR_SREV_9280_20(_ah) \
	(((_ah)->ah_macVersion == AR_SREV_VERSION_9280) && \
		((_ah)->ah_macRev >= AR_SREV_REVISION_9280_20))
#define AR_SREV_9280_20_OR_LATER(_ah) \
	(((_ah)->ah_macVersion > AR_SREV_VERSION_9280) || \
	(((_ah)->ah_macVersion == AR_SREV_VERSION_9280) && \
	((_ah)->ah_macRev >= AR_SREV_REVISION_9280_20)))

#define AR_SREV_9285(_ah) (((_ah)->ah_macVersion == AR_SREV_VERSION_9285))
#define AR_SREV_9285_10_OR_LATER(_ah) \
	(((_ah)->ah_macVersion >= AR_SREV_VERSION_9285))

#define AR_RADIO_SREV_MAJOR                   0xf0
#define AR_RAD5133_SREV_MAJOR                 0xc0
#define AR_RAD2133_SREV_MAJOR                 0xd0
#define AR_RAD5122_SREV_MAJOR                 0xe0
#define AR_RAD2122_SREV_MAJOR                 0xf0

#define AR_AHB_MODE                           0x4024
#define AR_AHB_EXACT_WR_EN                    0x00000000
#define AR_AHB_BUF_WR_EN                      0x00000001
#define AR_AHB_EXACT_RD_EN                    0x00000000
#define AR_AHB_CACHELINE_RD_EN                0x00000002
#define AR_AHB_PREFETCH_RD_EN                 0x00000004
#define AR_AHB_PAGE_SIZE_1K                   0x00000000
#define AR_AHB_PAGE_SIZE_2K                   0x00000008
#define AR_AHB_PAGE_SIZE_4K                   0x00000010

#define AR_INTR_RTC_IRQ                       0x00000001
#define AR_INTR_MAC_IRQ                       0x00000002
#define AR_INTR_EEP_PROT_ACCESS               0x00000004
#define AR_INTR_MAC_AWAKE                     0x00020000
#define AR_INTR_MAC_ASLEEP                    0x00040000
#define AR_INTR_SPURIOUS                      0xFFFFFFFF


#define AR_INTR_SYNC_CAUSE_CLR                0x4028

#define AR_INTR_SYNC_CAUSE                    0x4028

#define AR_INTR_SYNC_ENABLE                   0x402c
#define AR_INTR_SYNC_ENABLE_GPIO              0xFFFC0000
#define AR_INTR_SYNC_ENABLE_GPIO_S            18

enum {
	AR_INTR_SYNC_RTC_IRQ = 0x00000001,
	AR_INTR_SYNC_MAC_IRQ = 0x00000002,
	AR_INTR_SYNC_EEPROM_ILLEGAL_ACCESS = 0x00000004,
	AR_INTR_SYNC_APB_TIMEOUT = 0x00000008,
	AR_INTR_SYNC_PCI_MODE_CONFLICT = 0x00000010,
	AR_INTR_SYNC_HOST1_FATAL = 0x00000020,
	AR_INTR_SYNC_HOST1_PERR = 0x00000040,
	AR_INTR_SYNC_TRCV_FIFO_PERR = 0x00000080,
	AR_INTR_SYNC_RADM_CPL_EP = 0x00000100,
	AR_INTR_SYNC_RADM_CPL_DLLP_ABORT = 0x00000200,
	AR_INTR_SYNC_RADM_CPL_TLP_ABORT = 0x00000400,
	AR_INTR_SYNC_RADM_CPL_ECRC_ERR = 0x00000800,
	AR_INTR_SYNC_RADM_CPL_TIMEOUT = 0x00001000,
	AR_INTR_SYNC_LOCAL_TIMEOUT = 0x00002000,
	AR_INTR_SYNC_PM_ACCESS = 0x00004000,
	AR_INTR_SYNC_MAC_AWAKE = 0x00008000,
	AR_INTR_SYNC_MAC_ASLEEP = 0x00010000,
	AR_INTR_SYNC_MAC_SLEEP_ACCESS = 0x00020000,
	AR_INTR_SYNC_ALL = 0x0003FFFF,


	AR_INTR_SYNC_DEFAULT = (AR_INTR_SYNC_HOST1_FATAL |
				AR_INTR_SYNC_HOST1_PERR |
				AR_INTR_SYNC_RADM_CPL_EP |
				AR_INTR_SYNC_RADM_CPL_DLLP_ABORT |
				AR_INTR_SYNC_RADM_CPL_TLP_ABORT |
				AR_INTR_SYNC_RADM_CPL_ECRC_ERR |
				AR_INTR_SYNC_RADM_CPL_TIMEOUT |
				AR_INTR_SYNC_LOCAL_TIMEOUT |
				AR_INTR_SYNC_MAC_SLEEP_ACCESS),

	AR_INTR_SYNC_SPURIOUS = 0xFFFFFFFF,

};

#define AR_INTR_ASYNC_MASK                       0x4030
#define AR_INTR_ASYNC_MASK_GPIO                  0xFFFC0000
#define AR_INTR_ASYNC_MASK_GPIO_S                18

#define AR_INTR_SYNC_MASK                        0x4034
#define AR_INTR_SYNC_MASK_GPIO                   0xFFFC0000
#define AR_INTR_SYNC_MASK_GPIO_S                 18

#define AR_INTR_ASYNC_CAUSE_CLR                  0x4038
#define AR_INTR_ASYNC_CAUSE                      0x4038

#define AR_INTR_ASYNC_ENABLE                     0x403c
#define AR_INTR_ASYNC_ENABLE_GPIO                0xFFFC0000
#define AR_INTR_ASYNC_ENABLE_GPIO_S              18

#define AR_PCIE_SERDES                           0x4040
#define AR_PCIE_SERDES2                          0x4044
#define AR_PCIE_PM_CTRL                          0x4014
#define AR_PCIE_PM_CTRL_ENA                      0x00080000

#define AR_NUM_GPIO                              14
#define AR928X_NUM_GPIO                          10

#define AR_GPIO_IN_OUT                           0x4048
#define AR_GPIO_IN_VAL                           0x0FFFC000
#define AR_GPIO_IN_VAL_S                         14
#define AR928X_GPIO_IN_VAL                       0x000FFC00
#define AR928X_GPIO_IN_VAL_S                     10

#define AR_GPIO_OE_OUT                           0x404c
#define AR_GPIO_OE_OUT_DRV                       0x3
#define AR_GPIO_OE_OUT_DRV_NO                    0x0
#define AR_GPIO_OE_OUT_DRV_LOW                   0x1
#define AR_GPIO_OE_OUT_DRV_HI                    0x2
#define AR_GPIO_OE_OUT_DRV_ALL                   0x3

#define AR_GPIO_INTR_POL                         0x4050
#define AR_GPIO_INTR_POL_VAL                     0x00001FFF
#define AR_GPIO_INTR_POL_VAL_S                   0

#define AR_GPIO_INPUT_EN_VAL                     0x4054
#define AR_GPIO_INPUT_EN_VAL_RFSILENT_DEF        0x00000080
#define AR_GPIO_INPUT_EN_VAL_RFSILENT_DEF_S      7
#define AR_GPIO_INPUT_EN_VAL_RFSILENT_BB         0x00008000
#define AR_GPIO_INPUT_EN_VAL_RFSILENT_BB_S       15
#define AR_GPIO_RTC_RESET_OVERRIDE_ENABLE        0x00010000
#define AR_GPIO_JTAG_DISABLE                     0x00020000

#define AR_GPIO_INPUT_MUX1                       0x4058

#define AR_GPIO_INPUT_MUX2                       0x405c
#define AR_GPIO_INPUT_MUX2_CLK25                 0x0000000f
#define AR_GPIO_INPUT_MUX2_CLK25_S               0
#define AR_GPIO_INPUT_MUX2_RFSILENT              0x000000f0
#define AR_GPIO_INPUT_MUX2_RFSILENT_S            4
#define AR_GPIO_INPUT_MUX2_RTC_RESET             0x00000f00
#define AR_GPIO_INPUT_MUX2_RTC_RESET_S           8

#define AR_GPIO_OUTPUT_MUX1                      0x4060
#define AR_GPIO_OUTPUT_MUX2                      0x4064
#define AR_GPIO_OUTPUT_MUX3                      0x4068

#define AR_GPIO_OUTPUT_MUX_AS_OUTPUT             0
#define AR_GPIO_OUTPUT_MUX_AS_PCIE_ATTENTION_LED 1
#define AR_GPIO_OUTPUT_MUX_AS_PCIE_POWER_LED     2
#define AR_GPIO_OUTPUT_MUX_AS_MAC_NETWORK_LED    5
#define AR_GPIO_OUTPUT_MUX_AS_MAC_POWER_LED      6

#define AR_INPUT_STATE                           0x406c

#define AR_EEPROM_STATUS_DATA                    0x407c
#define AR_EEPROM_STATUS_DATA_VAL                0x0000ffff
#define AR_EEPROM_STATUS_DATA_VAL_S              0
#define AR_EEPROM_STATUS_DATA_BUSY               0x00010000
#define AR_EEPROM_STATUS_DATA_BUSY_ACCESS        0x00020000
#define AR_EEPROM_STATUS_DATA_PROT_ACCESS        0x00040000
#define AR_EEPROM_STATUS_DATA_ABSENT_ACCESS      0x00080000

#define AR_OBS                  0x4080

#define AR_PCIE_MSI                              0x4094
#define AR_PCIE_MSI_ENABLE                       0x00000001


#define AR_RTC_9160_PLL_DIV	0x000003ff
#define AR_RTC_9160_PLL_DIV_S   0
#define AR_RTC_9160_PLL_REFDIV  0x00003C00
#define AR_RTC_9160_PLL_REFDIV_S 10
#define AR_RTC_9160_PLL_CLKSEL	0x0000C000
#define AR_RTC_9160_PLL_CLKSEL_S 14

#define AR_RTC_BASE             0x00020000
#define AR_RTC_RC \
	(AR_SREV_9100(ah)) ? (AR_RTC_BASE + 0x0000) : 0x7000
#define AR_RTC_RC_M		0x00000003
#define AR_RTC_RC_MAC_WARM      0x00000001
#define AR_RTC_RC_MAC_COLD      0x00000002
#define AR_RTC_RC_COLD_RESET    0x00000004
#define AR_RTC_RC_WARM_RESET    0x00000008

#define AR_RTC_PLL_CONTROL \
	(AR_SREV_9100(ah)) ? (AR_RTC_BASE + 0x0014) : 0x7014

#define AR_RTC_PLL_DIV          0x0000001f
#define AR_RTC_PLL_DIV_S        0
#define AR_RTC_PLL_DIV2         0x00000020
#define AR_RTC_PLL_REFDIV_5     0x000000c0
#define AR_RTC_PLL_CLKSEL       0x00000300
#define AR_RTC_PLL_CLKSEL_S     8



#define AR_RTC_RESET \
	((AR_SREV_9100(ah)) ? (AR_RTC_BASE + 0x0040) : 0x7040)
#define AR_RTC_RESET_EN		(0x00000001)

#define AR_RTC_STATUS \
	((AR_SREV_9100(ah)) ? (AR_RTC_BASE + 0x0044) : 0x7044)

#define AR_RTC_STATUS_M \
	((AR_SREV_9100(ah)) ? 0x0000003f : 0x0000000f)

#define AR_RTC_PM_STATUS_M      0x0000000f

#define AR_RTC_STATUS_SHUTDOWN  0x00000001
#define AR_RTC_STATUS_ON        0x00000002
#define AR_RTC_STATUS_SLEEP     0x00000004
#define AR_RTC_STATUS_WAKEUP    0x00000008

#define AR_RTC_SLEEP_CLK \
	((AR_SREV_9100(ah)) ? (AR_RTC_BASE + 0x0048) : 0x7048)
#define AR_RTC_FORCE_DERIVED_CLK    0x2

#define AR_RTC_FORCE_WAKE \
	((AR_SREV_9100(ah)) ? (AR_RTC_BASE + 0x004c) : 0x704c)
#define AR_RTC_FORCE_WAKE_EN        0x00000001
#define AR_RTC_FORCE_WAKE_ON_INT    0x00000002


#define AR_RTC_INTR_CAUSE \
	((AR_SREV_9100(ah)) ? (AR_RTC_BASE + 0x0050) : 0x7050)

#define AR_RTC_INTR_ENABLE \
	((AR_SREV_9100(ah)) ? (AR_RTC_BASE + 0x0054) : 0x7054)

#define AR_RTC_INTR_MASK \
	((AR_SREV_9100(ah)) ? (AR_RTC_BASE + 0x0058) : 0x7058)

#define	AR_SEQ_MASK	0x8060

#define AR_AN_RF2G1_CH0         0x7810
#define AR_AN_RF2G1_CH0_OB      0x03800000
#define AR_AN_RF2G1_CH0_OB_S    23
#define AR_AN_RF2G1_CH0_DB      0x1C000000
#define AR_AN_RF2G1_CH0_DB_S    26

#define AR_AN_RF5G1_CH0         0x7818
#define AR_AN_RF5G1_CH0_OB5     0x00070000
#define AR_AN_RF5G1_CH0_OB5_S   16
#define AR_AN_RF5G1_CH0_DB5     0x00380000
#define AR_AN_RF5G1_CH0_DB5_S   19

#define AR_AN_RF2G1_CH1         0x7834
#define AR_AN_RF2G1_CH1_OB      0x03800000
#define AR_AN_RF2G1_CH1_OB_S    23
#define AR_AN_RF2G1_CH1_DB      0x1C000000
#define AR_AN_RF2G1_CH1_DB_S    26

#define AR_AN_RF5G1_CH1         0x783C
#define AR_AN_RF5G1_CH1_OB5     0x00070000
#define AR_AN_RF5G1_CH1_OB5_S   16
#define AR_AN_RF5G1_CH1_DB5     0x00380000
#define AR_AN_RF5G1_CH1_DB5_S   19

#define AR_AN_TOP2                  0x7894
#define AR_AN_TOP2_XPABIAS_LVL      0xC0000000
#define AR_AN_TOP2_XPABIAS_LVL_S    30
#define AR_AN_TOP2_LOCALBIAS        0x00200000
#define AR_AN_TOP2_LOCALBIAS_S      21
#define AR_AN_TOP2_PWDCLKIND        0x00400000
#define AR_AN_TOP2_PWDCLKIND_S      22

#define AR_AN_SYNTH9            0x7868
#define AR_AN_SYNTH9_REFDIVA    0xf8000000
#define AR_AN_SYNTH9_REFDIVA_S  27

#define AR_STA_ID0                 0x8000
#define AR_STA_ID1                 0x8004
#define AR_STA_ID1_SADH_MASK       0x0000FFFF
#define AR_STA_ID1_STA_AP          0x00010000
#define AR_STA_ID1_ADHOC           0x00020000
#define AR_STA_ID1_PWR_SAV         0x00040000
#define AR_STA_ID1_KSRCHDIS        0x00080000
#define AR_STA_ID1_PCF             0x00100000
#define AR_STA_ID1_USE_DEFANT      0x00200000
#define AR_STA_ID1_DEFANT_UPDATE   0x00400000
#define AR_STA_ID1_RTS_USE_DEF     0x00800000
#define AR_STA_ID1_ACKCTS_6MB      0x01000000
#define AR_STA_ID1_BASE_RATE_11B   0x02000000
#define AR_STA_ID1_SECTOR_SELF_GEN 0x04000000
#define AR_STA_ID1_CRPT_MIC_ENABLE 0x08000000
#define AR_STA_ID1_KSRCH_MODE      0x10000000
#define AR_STA_ID1_PRESERVE_SEQNUM 0x20000000
#define AR_STA_ID1_CBCIV_ENDIAN    0x40000000
#define AR_STA_ID1_MCAST_KSRCH     0x80000000

#define AR_BSS_ID0          0x8008
#define AR_BSS_ID1          0x800C
#define AR_BSS_ID1_U16       0x0000FFFF
#define AR_BSS_ID1_AID       0x07FF0000
#define AR_BSS_ID1_AID_S     16

#define AR_BCN_RSSI_AVE      0x8010
#define AR_BCN_RSSI_AVE_MASK 0x00000FFF

#define AR_TIME_OUT         0x8014
#define AR_TIME_OUT_ACK      0x00003FFF
#define AR_TIME_OUT_ACK_S    0
#define AR_TIME_OUT_CTS      0x3FFF0000
#define AR_TIME_OUT_CTS_S    16

#define AR_RSSI_THR          0x8018
#define AR_RSSI_THR_MASK     0x000000FF
#define AR_RSSI_THR_BM_THR   0x0000FF00
#define AR_RSSI_THR_BM_THR_S 8
#define AR_RSSI_BCN_WEIGHT   0x1F000000
#define AR_RSSI_BCN_WEIGHT_S 24
#define AR_RSSI_BCN_RSSI_RST 0x20000000

#define AR_USEC              0x801c
#define AR_USEC_USEC         0x0000007F
#define AR_USEC_TX_LAT       0x007FC000
#define AR_USEC_TX_LAT_S     14
#define AR_USEC_RX_LAT       0x1F800000
#define AR_USEC_RX_LAT_S     23

#define AR_RESET_TSF        0x8020
#define AR_RESET_TSF_ONCE   0x01000000

#define AR_MAX_CFP_DUR      0x8038
#define AR_CFP_VAL          0x0000FFFF

#define AR_RX_FILTER        0x803C
#define AR_RX_FILTER_ALL    0x00000000
#define AR_RX_UCAST         0x00000001
#define AR_RX_MCAST         0x00000002
#define AR_RX_BCAST         0x00000004
#define AR_RX_CONTROL       0x00000008
#define AR_RX_BEACON        0x00000010
#define AR_RX_PROM          0x00000020
#define AR_RX_PROBE_REQ     0x00000080
#define AR_RX_MY_BEACON     0x00000200
#define AR_RX_COMPR_BAR     0x00000400
#define AR_RX_COMPR_BA      0x00000800
#define AR_RX_UNCOM_BA_BAR  0x00001000

#define AR_MCAST_FIL0       0x8040
#define AR_MCAST_FIL1       0x8044

#define AR_DIAG_SW                  0x8048
#define AR_DIAG_CACHE_ACK           0x00000001
#define AR_DIAG_ACK_DIS             0x00000002
#define AR_DIAG_CTS_DIS             0x00000004
#define AR_DIAG_ENCRYPT_DIS         0x00000008
#define AR_DIAG_DECRYPT_DIS         0x00000010
#define AR_DIAG_RX_DIS              0x00000020
#define AR_DIAG_LOOP_BACK           0x00000040
#define AR_DIAG_CORR_FCS            0x00000080
#define AR_DIAG_CHAN_INFO           0x00000100
#define AR_DIAG_SCRAM_SEED          0x0001FE00
#define AR_DIAG_SCRAM_SEED_S        8
#define AR_DIAG_FRAME_NV0           0x00020000
#define AR_DIAG_OBS_PT_SEL1         0x000C0000
#define AR_DIAG_OBS_PT_SEL1_S       18
#define AR_DIAG_FORCE_RX_CLEAR      0x00100000
#define AR_DIAG_IGNORE_VIRT_CS      0x00200000
#define AR_DIAG_FORCE_CH_IDLE_HIGH  0x00400000
#define AR_DIAG_EIFS_CTRL_ENA       0x00800000
#define AR_DIAG_DUAL_CHAIN_INFO     0x01000000
#define AR_DIAG_RX_ABORT            0x02000000
#define AR_DIAG_SATURATE_CYCLE_CNT  0x04000000
#define AR_DIAG_OBS_PT_SEL2         0x08000000
#define AR_DIAG_RX_CLEAR_CTL_LOW    0x10000000
#define AR_DIAG_RX_CLEAR_EXT_LOW    0x20000000

#define AR_TSF_L32          0x804c
#define AR_TSF_U32          0x8050

#define AR_TST_ADDAC        0x8054
#define AR_DEF_ANTENNA      0x8058

#define AR_AES_MUTE_MASK0       0x805c
#define AR_AES_MUTE_MASK0_FC    0x0000FFFF
#define AR_AES_MUTE_MASK0_QOS   0xFFFF0000
#define AR_AES_MUTE_MASK0_QOS_S 16

#define AR_AES_MUTE_MASK1       0x8060
#define AR_AES_MUTE_MASK1_SEQ   0x0000FFFF

#define AR_GATED_CLKS       0x8064
#define AR_GATED_CLKS_TX    0x00000002
#define AR_GATED_CLKS_RX    0x00000004
#define AR_GATED_CLKS_REG   0x00000008

#define AR_OBS_BUS_CTRL     0x8068
#define AR_OBS_BUS_SEL_1    0x00040000
#define AR_OBS_BUS_SEL_2    0x00080000
#define AR_OBS_BUS_SEL_3    0x000C0000
#define AR_OBS_BUS_SEL_4    0x08040000
#define AR_OBS_BUS_SEL_5    0x08080000

#define AR_OBS_BUS_1               0x806c
#define AR_OBS_BUS_1_PCU           0x00000001
#define AR_OBS_BUS_1_RX_END        0x00000002
#define AR_OBS_BUS_1_RX_WEP        0x00000004
#define AR_OBS_BUS_1_RX_BEACON     0x00000008
#define AR_OBS_BUS_1_RX_FILTER     0x00000010
#define AR_OBS_BUS_1_TX_HCF        0x00000020
#define AR_OBS_BUS_1_QUIET_TIME    0x00000040
#define AR_OBS_BUS_1_CHAN_IDLE     0x00000080
#define AR_OBS_BUS_1_TX_HOLD       0x00000100
#define AR_OBS_BUS_1_TX_FRAME      0x00000200
#define AR_OBS_BUS_1_RX_FRAME      0x00000400
#define AR_OBS_BUS_1_RX_CLEAR      0x00000800
#define AR_OBS_BUS_1_WEP_STATE     0x0003F000
#define AR_OBS_BUS_1_WEP_STATE_S   12
#define AR_OBS_BUS_1_RX_STATE      0x01F00000
#define AR_OBS_BUS_1_RX_STATE_S    20
#define AR_OBS_BUS_1_TX_STATE      0x7E000000
#define AR_OBS_BUS_1_TX_STATE_S    25

#define AR_LAST_TSTP        0x8080
#define AR_NAV              0x8084
#define AR_RTS_OK           0x8088
#define AR_RTS_FAIL         0x808c
#define AR_ACK_FAIL         0x8090
#define AR_FCS_FAIL         0x8094
#define AR_BEACON_CNT       0x8098

#define AR_SLEEP1               0x80d4
#define AR_SLEEP1_ASSUME_DTIM   0x00080000
#define AR_SLEEP1_CAB_TIMEOUT   0xFFE00000
#define AR_SLEEP1_CAB_TIMEOUT_S 21

#define AR_SLEEP2                   0x80d8
#define AR_SLEEP2_BEACON_TIMEOUT    0xFFE00000
#define AR_SLEEP2_BEACON_TIMEOUT_S  21

#define AR_BSSMSKL            0x80e0
#define AR_BSSMSKU            0x80e4

#define AR_TPC                 0x80e8
#define AR_TPC_ACK             0x0000003f
#define AR_TPC_ACK_S           0x00
#define AR_TPC_CTS             0x00003f00
#define AR_TPC_CTS_S           0x08
#define AR_TPC_CHIRP           0x003f0000
#define AR_TPC_CHIRP_S         0x16

#define AR_TFCNT           0x80ec
#define AR_RFCNT           0x80f0
#define AR_RCCNT           0x80f4
#define AR_CCCNT           0x80f8

#define AR_QUIET1          0x80fc
#define AR_QUIET1_NEXT_QUIET_S         0
#define AR_QUIET1_NEXT_QUIET_M         0x0000ffff
#define AR_QUIET1_QUIET_ENABLE         0x00010000
#define AR_QUIET1_QUIET_ACK_CTS_ENABLE 0x00020000
#define AR_QUIET2          0x8100
#define AR_QUIET2_QUIET_PERIOD_S       0
#define AR_QUIET2_QUIET_PERIOD_M       0x0000ffff
#define AR_QUIET2_QUIET_DUR_S     16
#define AR_QUIET2_QUIET_DUR       0xffff0000

#define AR_TSF_PARM        0x8104
#define AR_TSF_INCREMENT_M     0x000000ff
#define AR_TSF_INCREMENT_S     0x00

#define AR_QOS_NO_ACK              0x8108
#define AR_QOS_NO_ACK_TWO_BIT      0x0000000f
#define AR_QOS_NO_ACK_TWO_BIT_S    0
#define AR_QOS_NO_ACK_BIT_OFF      0x00000070
#define AR_QOS_NO_ACK_BIT_OFF_S    4
#define AR_QOS_NO_ACK_BYTE_OFF     0x00000180
#define AR_QOS_NO_ACK_BYTE_OFF_S   7

#define AR_PHY_ERR         0x810c

#define AR_PHY_ERR_DCHIRP      0x00000008
#define AR_PHY_ERR_RADAR       0x00000020
#define AR_PHY_ERR_OFDM_TIMING 0x00020000
#define AR_PHY_ERR_CCK_TIMING  0x02000000

#define AR_RXFIFO_CFG          0x8114


#define AR_MIC_QOS_CONTROL 0x8118
#define AR_MIC_QOS_SELECT  0x811c

#define AR_PCU_MISC                0x8120
#define AR_PCU_FORCE_BSSID_MATCH   0x00000001
#define AR_PCU_MIC_NEW_LOC_ENA     0x00000004
#define AR_PCU_TX_ADD_TSF          0x00000008
#define AR_PCU_CCK_SIFS_MODE       0x00000010
#define AR_PCU_RX_ANT_UPDT         0x00000800
#define AR_PCU_TXOP_TBTT_LIMIT_ENA 0x00001000
#define AR_PCU_MISS_BCN_IN_SLEEP   0x00004000
#define AR_PCU_BUG_12306_FIX_ENA   0x00020000
#define AR_PCU_FORCE_QUIET_COLL    0x00040000
#define AR_PCU_TBTT_PROTECT        0x00200000
#define AR_PCU_CLEAR_VMF           0x01000000
#define AR_PCU_CLEAR_BA_VALID      0x04000000


#define AR_FILT_OFDM           0x8124
#define AR_FILT_OFDM_COUNT     0x00FFFFFF

#define AR_FILT_CCK            0x8128
#define AR_FILT_CCK_COUNT      0x00FFFFFF

#define AR_PHY_ERR_1           0x812c
#define AR_PHY_ERR_1_COUNT     0x00FFFFFF
#define AR_PHY_ERR_MASK_1      0x8130

#define AR_PHY_ERR_2           0x8134
#define AR_PHY_ERR_2_COUNT     0x00FFFFFF
#define AR_PHY_ERR_MASK_2      0x8138

#define AR_PHY_COUNTMAX        (3 << 22)
#define AR_MIBCNT_INTRMASK     (3 << 22)

#define AR_TSF_THRESHOLD       0x813c
#define AR_TSF_THRESHOLD_VAL   0x0000FFFF

#define AR_PHY_ERR_EIFS_MASK   8144

#define AR_PHY_ERR_3           0x8168
#define AR_PHY_ERR_3_COUNT     0x00FFFFFF
#define AR_PHY_ERR_MASK_3      0x816c

#define AR_TXSIFS              0x81d0
#define AR_TXSIFS_TIME         0x000000FF
#define AR_TXSIFS_TX_LATENCY   0x00000F00
#define AR_TXSIFS_TX_LATENCY_S 8
#define AR_TXSIFS_ACK_SHIFT    0x00007000
#define AR_TXSIFS_ACK_SHIFT_S  12

#define AR_TXOP_X          0x81ec
#define AR_TXOP_X_VAL      0x000000FF


#define AR_TXOP_0_3    0x81f0
#define AR_TXOP_4_7    0x81f4
#define AR_TXOP_8_11   0x81f8
#define AR_TXOP_12_15  0x81fc


#define AR_NEXT_TBTT_TIMER                  0x8200
#define AR_NEXT_DMA_BEACON_ALERT            0x8204
#define AR_NEXT_SWBA                        0x8208
#define AR_NEXT_CFP                         0x8208
#define AR_NEXT_HCF                         0x820C
#define AR_NEXT_TIM                         0x8210
#define AR_NEXT_DTIM                        0x8214
#define AR_NEXT_QUIET_TIMER                 0x8218
#define AR_NEXT_NDP_TIMER                   0x821C

#define AR_BEACON_PERIOD                    0x8220
#define AR_DMA_BEACON_PERIOD                0x8224
#define AR_SWBA_PERIOD                      0x8228
#define AR_HCF_PERIOD                       0x822C
#define AR_TIM_PERIOD                       0x8230
#define AR_DTIM_PERIOD                      0x8234
#define AR_QUIET_PERIOD                     0x8238
#define AR_NDP_PERIOD                       0x823C

#define AR_TIMER_MODE                       0x8240
#define AR_TBTT_TIMER_EN                    0x00000001
#define AR_DBA_TIMER_EN                     0x00000002
#define AR_SWBA_TIMER_EN                    0x00000004
#define AR_HCF_TIMER_EN                     0x00000008
#define AR_TIM_TIMER_EN                     0x00000010
#define AR_DTIM_TIMER_EN                    0x00000020
#define AR_QUIET_TIMER_EN                   0x00000040
#define AR_NDP_TIMER_EN                     0x00000080
#define AR_TIMER_OVERFLOW_INDEX             0x00000700
#define AR_TIMER_OVERFLOW_INDEX_S           8
#define AR_TIMER_THRESH                     0xFFFFF000
#define AR_TIMER_THRESH_S                   12

#define AR_SLP32_MODE                  0x8244
#define AR_SLP32_HALF_CLK_LATENCY      0x000FFFFF
#define AR_SLP32_ENA                   0x00100000
#define AR_SLP32_TSF_WRITE_STATUS      0x00200000

#define AR_SLP32_WAKE              0x8248
#define AR_SLP32_WAKE_XTL_TIME     0x0000FFFF

#define AR_SLP32_INC               0x824c
#define AR_SLP32_TST_INC           0x000FFFFF

#define AR_SLP_CNT         0x8250
#define AR_SLP_CYCLE_CNT   0x8254

#define AR_SLP_MIB_CTRL    0x8258
#define AR_SLP_MIB_CLEAR   0x00000001
#define AR_SLP_MIB_PENDING 0x00000002

#define AR_2040_MODE                0x8318
#define AR_2040_JOINED_RX_CLEAR 0x00000001


#define AR_EXTRCCNT         0x8328

#define AR_SELFGEN_MASK         0x832c

#define AR_PCU_TXBUF_CTRL               0x8340
#define AR_PCU_TXBUF_CTRL_SIZE_MASK     0x7FF
#define AR_PCU_TXBUF_CTRL_USABLE_SIZE   0x700
#define AR_9285_PCU_TXBUF_CTRL_USABLE_SIZE   0x380

#define AR_KEYTABLE_0           0x8800
#define AR_KEYTABLE(_n)         (AR_KEYTABLE_0 + ((_n)*32))
#define AR_KEY_CACHE_SIZE       128
#define AR_RSVD_KEYTABLE_ENTRIES 4
#define AR_KEY_TYPE             0x00000007
#define AR_KEYTABLE_TYPE_40     0x00000000
#define AR_KEYTABLE_TYPE_104    0x00000001
#define AR_KEYTABLE_TYPE_128    0x00000003
#define AR_KEYTABLE_TYPE_TKIP   0x00000004
#define AR_KEYTABLE_TYPE_AES    0x00000005
#define AR_KEYTABLE_TYPE_CCM    0x00000006
#define AR_KEYTABLE_TYPE_CLR    0x00000007
#define AR_KEYTABLE_ANT         0x00000008
#define AR_KEYTABLE_VALID       0x00008000
#define AR_KEYTABLE_KEY0(_n)    (AR_KEYTABLE(_n) + 0)
#define AR_KEYTABLE_KEY1(_n)    (AR_KEYTABLE(_n) + 4)
#define AR_KEYTABLE_KEY2(_n)    (AR_KEYTABLE(_n) + 8)
#define AR_KEYTABLE_KEY3(_n)    (AR_KEYTABLE(_n) + 12)
#define AR_KEYTABLE_KEY4(_n)    (AR_KEYTABLE(_n) + 16)
#define AR_KEYTABLE_TYPE(_n)    (AR_KEYTABLE(_n) + 20)
#define AR_KEYTABLE_MAC0(_n)    (AR_KEYTABLE(_n) + 24)
#define AR_KEYTABLE_MAC1(_n)    (AR_KEYTABLE(_n) + 28)

#endif
