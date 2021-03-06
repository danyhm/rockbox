/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * This file was automatically generated by headergen, DO NOT EDIT it.
 * headergen version: 3.0.0
 * imx233 version: 2.4.0
 * imx233 authors: Amaury Pouly
 *
 * Copyright (C) 2015 by the authors
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/
#ifndef __HEADERGEN_IMX233_SPDIF_H__
#define __HEADERGEN_IMX233_SPDIF_H__

#define HW_SPDIF_CTRL                           HW(SPDIF_CTRL)
#define HWA_SPDIF_CTRL                          (0x80054000 + 0x0)
#define HWT_SPDIF_CTRL                          HWIO_32_RW
#define HWN_SPDIF_CTRL                          SPDIF_CTRL
#define HWI_SPDIF_CTRL                          
#define HW_SPDIF_CTRL_SET                       HW(SPDIF_CTRL_SET)
#define HWA_SPDIF_CTRL_SET                      (HWA_SPDIF_CTRL + 0x4)
#define HWT_SPDIF_CTRL_SET                      HWIO_32_WO
#define HWN_SPDIF_CTRL_SET                      SPDIF_CTRL
#define HWI_SPDIF_CTRL_SET                      
#define HW_SPDIF_CTRL_CLR                       HW(SPDIF_CTRL_CLR)
#define HWA_SPDIF_CTRL_CLR                      (HWA_SPDIF_CTRL + 0x8)
#define HWT_SPDIF_CTRL_CLR                      HWIO_32_WO
#define HWN_SPDIF_CTRL_CLR                      SPDIF_CTRL
#define HWI_SPDIF_CTRL_CLR                      
#define HW_SPDIF_CTRL_TOG                       HW(SPDIF_CTRL_TOG)
#define HWA_SPDIF_CTRL_TOG                      (HWA_SPDIF_CTRL + 0xc)
#define HWT_SPDIF_CTRL_TOG                      HWIO_32_WO
#define HWN_SPDIF_CTRL_TOG                      SPDIF_CTRL
#define HWI_SPDIF_CTRL_TOG                      
#define BP_SPDIF_CTRL_SFTRST                    31
#define BM_SPDIF_CTRL_SFTRST                    0x80000000
#define BF_SPDIF_CTRL_SFTRST(v)                 (((v) & 0x1) << 31)
#define BFM_SPDIF_CTRL_SFTRST(v)                BM_SPDIF_CTRL_SFTRST
#define BF_SPDIF_CTRL_SFTRST_V(e)               BF_SPDIF_CTRL_SFTRST(BV_SPDIF_CTRL_SFTRST__##e)
#define BFM_SPDIF_CTRL_SFTRST_V(v)              BM_SPDIF_CTRL_SFTRST
#define BP_SPDIF_CTRL_CLKGATE                   30
#define BM_SPDIF_CTRL_CLKGATE                   0x40000000
#define BF_SPDIF_CTRL_CLKGATE(v)                (((v) & 0x1) << 30)
#define BFM_SPDIF_CTRL_CLKGATE(v)               BM_SPDIF_CTRL_CLKGATE
#define BF_SPDIF_CTRL_CLKGATE_V(e)              BF_SPDIF_CTRL_CLKGATE(BV_SPDIF_CTRL_CLKGATE__##e)
#define BFM_SPDIF_CTRL_CLKGATE_V(v)             BM_SPDIF_CTRL_CLKGATE
#define BP_SPDIF_CTRL_RSRVD1                    21
#define BM_SPDIF_CTRL_RSRVD1                    0x3fe00000
#define BF_SPDIF_CTRL_RSRVD1(v)                 (((v) & 0x1ff) << 21)
#define BFM_SPDIF_CTRL_RSRVD1(v)                BM_SPDIF_CTRL_RSRVD1
#define BF_SPDIF_CTRL_RSRVD1_V(e)               BF_SPDIF_CTRL_RSRVD1(BV_SPDIF_CTRL_RSRVD1__##e)
#define BFM_SPDIF_CTRL_RSRVD1_V(v)              BM_SPDIF_CTRL_RSRVD1
#define BP_SPDIF_CTRL_DMAWAIT_COUNT             16
#define BM_SPDIF_CTRL_DMAWAIT_COUNT             0x1f0000
#define BF_SPDIF_CTRL_DMAWAIT_COUNT(v)          (((v) & 0x1f) << 16)
#define BFM_SPDIF_CTRL_DMAWAIT_COUNT(v)         BM_SPDIF_CTRL_DMAWAIT_COUNT
#define BF_SPDIF_CTRL_DMAWAIT_COUNT_V(e)        BF_SPDIF_CTRL_DMAWAIT_COUNT(BV_SPDIF_CTRL_DMAWAIT_COUNT__##e)
#define BFM_SPDIF_CTRL_DMAWAIT_COUNT_V(v)       BM_SPDIF_CTRL_DMAWAIT_COUNT
#define BP_SPDIF_CTRL_RSRVD0                    6
#define BM_SPDIF_CTRL_RSRVD0                    0xffc0
#define BF_SPDIF_CTRL_RSRVD0(v)                 (((v) & 0x3ff) << 6)
#define BFM_SPDIF_CTRL_RSRVD0(v)                BM_SPDIF_CTRL_RSRVD0
#define BF_SPDIF_CTRL_RSRVD0_V(e)               BF_SPDIF_CTRL_RSRVD0(BV_SPDIF_CTRL_RSRVD0__##e)
#define BFM_SPDIF_CTRL_RSRVD0_V(v)              BM_SPDIF_CTRL_RSRVD0
#define BP_SPDIF_CTRL_WAIT_END_XFER             5
#define BM_SPDIF_CTRL_WAIT_END_XFER             0x20
#define BF_SPDIF_CTRL_WAIT_END_XFER(v)          (((v) & 0x1) << 5)
#define BFM_SPDIF_CTRL_WAIT_END_XFER(v)         BM_SPDIF_CTRL_WAIT_END_XFER
#define BF_SPDIF_CTRL_WAIT_END_XFER_V(e)        BF_SPDIF_CTRL_WAIT_END_XFER(BV_SPDIF_CTRL_WAIT_END_XFER__##e)
#define BFM_SPDIF_CTRL_WAIT_END_XFER_V(v)       BM_SPDIF_CTRL_WAIT_END_XFER
#define BP_SPDIF_CTRL_WORD_LENGTH               4
#define BM_SPDIF_CTRL_WORD_LENGTH               0x10
#define BF_SPDIF_CTRL_WORD_LENGTH(v)            (((v) & 0x1) << 4)
#define BFM_SPDIF_CTRL_WORD_LENGTH(v)           BM_SPDIF_CTRL_WORD_LENGTH
#define BF_SPDIF_CTRL_WORD_LENGTH_V(e)          BF_SPDIF_CTRL_WORD_LENGTH(BV_SPDIF_CTRL_WORD_LENGTH__##e)
#define BFM_SPDIF_CTRL_WORD_LENGTH_V(v)         BM_SPDIF_CTRL_WORD_LENGTH
#define BP_SPDIF_CTRL_FIFO_UNDERFLOW_IRQ        3
#define BM_SPDIF_CTRL_FIFO_UNDERFLOW_IRQ        0x8
#define BF_SPDIF_CTRL_FIFO_UNDERFLOW_IRQ(v)     (((v) & 0x1) << 3)
#define BFM_SPDIF_CTRL_FIFO_UNDERFLOW_IRQ(v)    BM_SPDIF_CTRL_FIFO_UNDERFLOW_IRQ
#define BF_SPDIF_CTRL_FIFO_UNDERFLOW_IRQ_V(e)   BF_SPDIF_CTRL_FIFO_UNDERFLOW_IRQ(BV_SPDIF_CTRL_FIFO_UNDERFLOW_IRQ__##e)
#define BFM_SPDIF_CTRL_FIFO_UNDERFLOW_IRQ_V(v)  BM_SPDIF_CTRL_FIFO_UNDERFLOW_IRQ
#define BP_SPDIF_CTRL_FIFO_OVERFLOW_IRQ         2
#define BM_SPDIF_CTRL_FIFO_OVERFLOW_IRQ         0x4
#define BF_SPDIF_CTRL_FIFO_OVERFLOW_IRQ(v)      (((v) & 0x1) << 2)
#define BFM_SPDIF_CTRL_FIFO_OVERFLOW_IRQ(v)     BM_SPDIF_CTRL_FIFO_OVERFLOW_IRQ
#define BF_SPDIF_CTRL_FIFO_OVERFLOW_IRQ_V(e)    BF_SPDIF_CTRL_FIFO_OVERFLOW_IRQ(BV_SPDIF_CTRL_FIFO_OVERFLOW_IRQ__##e)
#define BFM_SPDIF_CTRL_FIFO_OVERFLOW_IRQ_V(v)   BM_SPDIF_CTRL_FIFO_OVERFLOW_IRQ
#define BP_SPDIF_CTRL_FIFO_ERROR_IRQ_EN         1
#define BM_SPDIF_CTRL_FIFO_ERROR_IRQ_EN         0x2
#define BF_SPDIF_CTRL_FIFO_ERROR_IRQ_EN(v)      (((v) & 0x1) << 1)
#define BFM_SPDIF_CTRL_FIFO_ERROR_IRQ_EN(v)     BM_SPDIF_CTRL_FIFO_ERROR_IRQ_EN
#define BF_SPDIF_CTRL_FIFO_ERROR_IRQ_EN_V(e)    BF_SPDIF_CTRL_FIFO_ERROR_IRQ_EN(BV_SPDIF_CTRL_FIFO_ERROR_IRQ_EN__##e)
#define BFM_SPDIF_CTRL_FIFO_ERROR_IRQ_EN_V(v)   BM_SPDIF_CTRL_FIFO_ERROR_IRQ_EN
#define BP_SPDIF_CTRL_RUN                       0
#define BM_SPDIF_CTRL_RUN                       0x1
#define BF_SPDIF_CTRL_RUN(v)                    (((v) & 0x1) << 0)
#define BFM_SPDIF_CTRL_RUN(v)                   BM_SPDIF_CTRL_RUN
#define BF_SPDIF_CTRL_RUN_V(e)                  BF_SPDIF_CTRL_RUN(BV_SPDIF_CTRL_RUN__##e)
#define BFM_SPDIF_CTRL_RUN_V(v)                 BM_SPDIF_CTRL_RUN

#define HW_SPDIF_STAT                   HW(SPDIF_STAT)
#define HWA_SPDIF_STAT                  (0x80054000 + 0x10)
#define HWT_SPDIF_STAT                  HWIO_32_RW
#define HWN_SPDIF_STAT                  SPDIF_STAT
#define HWI_SPDIF_STAT                  
#define HW_SPDIF_STAT_SET               HW(SPDIF_STAT_SET)
#define HWA_SPDIF_STAT_SET              (HWA_SPDIF_STAT + 0x4)
#define HWT_SPDIF_STAT_SET              HWIO_32_WO
#define HWN_SPDIF_STAT_SET              SPDIF_STAT
#define HWI_SPDIF_STAT_SET              
#define HW_SPDIF_STAT_CLR               HW(SPDIF_STAT_CLR)
#define HWA_SPDIF_STAT_CLR              (HWA_SPDIF_STAT + 0x8)
#define HWT_SPDIF_STAT_CLR              HWIO_32_WO
#define HWN_SPDIF_STAT_CLR              SPDIF_STAT
#define HWI_SPDIF_STAT_CLR              
#define HW_SPDIF_STAT_TOG               HW(SPDIF_STAT_TOG)
#define HWA_SPDIF_STAT_TOG              (HWA_SPDIF_STAT + 0xc)
#define HWT_SPDIF_STAT_TOG              HWIO_32_WO
#define HWN_SPDIF_STAT_TOG              SPDIF_STAT
#define HWI_SPDIF_STAT_TOG              
#define BP_SPDIF_STAT_PRESENT           31
#define BM_SPDIF_STAT_PRESENT           0x80000000
#define BF_SPDIF_STAT_PRESENT(v)        (((v) & 0x1) << 31)
#define BFM_SPDIF_STAT_PRESENT(v)       BM_SPDIF_STAT_PRESENT
#define BF_SPDIF_STAT_PRESENT_V(e)      BF_SPDIF_STAT_PRESENT(BV_SPDIF_STAT_PRESENT__##e)
#define BFM_SPDIF_STAT_PRESENT_V(v)     BM_SPDIF_STAT_PRESENT
#define BP_SPDIF_STAT_RSRVD1            1
#define BM_SPDIF_STAT_RSRVD1            0x7ffffffe
#define BF_SPDIF_STAT_RSRVD1(v)         (((v) & 0x3fffffff) << 1)
#define BFM_SPDIF_STAT_RSRVD1(v)        BM_SPDIF_STAT_RSRVD1
#define BF_SPDIF_STAT_RSRVD1_V(e)       BF_SPDIF_STAT_RSRVD1(BV_SPDIF_STAT_RSRVD1__##e)
#define BFM_SPDIF_STAT_RSRVD1_V(v)      BM_SPDIF_STAT_RSRVD1
#define BP_SPDIF_STAT_END_XFER          0
#define BM_SPDIF_STAT_END_XFER          0x1
#define BF_SPDIF_STAT_END_XFER(v)       (((v) & 0x1) << 0)
#define BFM_SPDIF_STAT_END_XFER(v)      BM_SPDIF_STAT_END_XFER
#define BF_SPDIF_STAT_END_XFER_V(e)     BF_SPDIF_STAT_END_XFER(BV_SPDIF_STAT_END_XFER__##e)
#define BFM_SPDIF_STAT_END_XFER_V(v)    BM_SPDIF_STAT_END_XFER

#define HW_SPDIF_FRAMECTRL                  HW(SPDIF_FRAMECTRL)
#define HWA_SPDIF_FRAMECTRL                 (0x80054000 + 0x20)
#define HWT_SPDIF_FRAMECTRL                 HWIO_32_RW
#define HWN_SPDIF_FRAMECTRL                 SPDIF_FRAMECTRL
#define HWI_SPDIF_FRAMECTRL                 
#define HW_SPDIF_FRAMECTRL_SET              HW(SPDIF_FRAMECTRL_SET)
#define HWA_SPDIF_FRAMECTRL_SET             (HWA_SPDIF_FRAMECTRL + 0x4)
#define HWT_SPDIF_FRAMECTRL_SET             HWIO_32_WO
#define HWN_SPDIF_FRAMECTRL_SET             SPDIF_FRAMECTRL
#define HWI_SPDIF_FRAMECTRL_SET             
#define HW_SPDIF_FRAMECTRL_CLR              HW(SPDIF_FRAMECTRL_CLR)
#define HWA_SPDIF_FRAMECTRL_CLR             (HWA_SPDIF_FRAMECTRL + 0x8)
#define HWT_SPDIF_FRAMECTRL_CLR             HWIO_32_WO
#define HWN_SPDIF_FRAMECTRL_CLR             SPDIF_FRAMECTRL
#define HWI_SPDIF_FRAMECTRL_CLR             
#define HW_SPDIF_FRAMECTRL_TOG              HW(SPDIF_FRAMECTRL_TOG)
#define HWA_SPDIF_FRAMECTRL_TOG             (HWA_SPDIF_FRAMECTRL + 0xc)
#define HWT_SPDIF_FRAMECTRL_TOG             HWIO_32_WO
#define HWN_SPDIF_FRAMECTRL_TOG             SPDIF_FRAMECTRL
#define HWI_SPDIF_FRAMECTRL_TOG             
#define BP_SPDIF_FRAMECTRL_RSRVD2           18
#define BM_SPDIF_FRAMECTRL_RSRVD2           0xfffc0000
#define BF_SPDIF_FRAMECTRL_RSRVD2(v)        (((v) & 0x3fff) << 18)
#define BFM_SPDIF_FRAMECTRL_RSRVD2(v)       BM_SPDIF_FRAMECTRL_RSRVD2
#define BF_SPDIF_FRAMECTRL_RSRVD2_V(e)      BF_SPDIF_FRAMECTRL_RSRVD2(BV_SPDIF_FRAMECTRL_RSRVD2__##e)
#define BFM_SPDIF_FRAMECTRL_RSRVD2_V(v)     BM_SPDIF_FRAMECTRL_RSRVD2
#define BP_SPDIF_FRAMECTRL_V_CONFIG         17
#define BM_SPDIF_FRAMECTRL_V_CONFIG         0x20000
#define BF_SPDIF_FRAMECTRL_V_CONFIG(v)      (((v) & 0x1) << 17)
#define BFM_SPDIF_FRAMECTRL_V_CONFIG(v)     BM_SPDIF_FRAMECTRL_V_CONFIG
#define BF_SPDIF_FRAMECTRL_V_CONFIG_V(e)    BF_SPDIF_FRAMECTRL_V_CONFIG(BV_SPDIF_FRAMECTRL_V_CONFIG__##e)
#define BFM_SPDIF_FRAMECTRL_V_CONFIG_V(v)   BM_SPDIF_FRAMECTRL_V_CONFIG
#define BP_SPDIF_FRAMECTRL_AUTO_MUTE        16
#define BM_SPDIF_FRAMECTRL_AUTO_MUTE        0x10000
#define BF_SPDIF_FRAMECTRL_AUTO_MUTE(v)     (((v) & 0x1) << 16)
#define BFM_SPDIF_FRAMECTRL_AUTO_MUTE(v)    BM_SPDIF_FRAMECTRL_AUTO_MUTE
#define BF_SPDIF_FRAMECTRL_AUTO_MUTE_V(e)   BF_SPDIF_FRAMECTRL_AUTO_MUTE(BV_SPDIF_FRAMECTRL_AUTO_MUTE__##e)
#define BFM_SPDIF_FRAMECTRL_AUTO_MUTE_V(v)  BM_SPDIF_FRAMECTRL_AUTO_MUTE
#define BP_SPDIF_FRAMECTRL_RSRVD1           15
#define BM_SPDIF_FRAMECTRL_RSRVD1           0x8000
#define BF_SPDIF_FRAMECTRL_RSRVD1(v)        (((v) & 0x1) << 15)
#define BFM_SPDIF_FRAMECTRL_RSRVD1(v)       BM_SPDIF_FRAMECTRL_RSRVD1
#define BF_SPDIF_FRAMECTRL_RSRVD1_V(e)      BF_SPDIF_FRAMECTRL_RSRVD1(BV_SPDIF_FRAMECTRL_RSRVD1__##e)
#define BFM_SPDIF_FRAMECTRL_RSRVD1_V(v)     BM_SPDIF_FRAMECTRL_RSRVD1
#define BP_SPDIF_FRAMECTRL_USER_DATA        14
#define BM_SPDIF_FRAMECTRL_USER_DATA        0x4000
#define BF_SPDIF_FRAMECTRL_USER_DATA(v)     (((v) & 0x1) << 14)
#define BFM_SPDIF_FRAMECTRL_USER_DATA(v)    BM_SPDIF_FRAMECTRL_USER_DATA
#define BF_SPDIF_FRAMECTRL_USER_DATA_V(e)   BF_SPDIF_FRAMECTRL_USER_DATA(BV_SPDIF_FRAMECTRL_USER_DATA__##e)
#define BFM_SPDIF_FRAMECTRL_USER_DATA_V(v)  BM_SPDIF_FRAMECTRL_USER_DATA
#define BP_SPDIF_FRAMECTRL_V                13
#define BM_SPDIF_FRAMECTRL_V                0x2000
#define BF_SPDIF_FRAMECTRL_V(v)             (((v) & 0x1) << 13)
#define BFM_SPDIF_FRAMECTRL_V(v)            BM_SPDIF_FRAMECTRL_V
#define BF_SPDIF_FRAMECTRL_V_V(e)           BF_SPDIF_FRAMECTRL_V(BV_SPDIF_FRAMECTRL_V__##e)
#define BFM_SPDIF_FRAMECTRL_V_V(v)          BM_SPDIF_FRAMECTRL_V
#define BP_SPDIF_FRAMECTRL_L                12
#define BM_SPDIF_FRAMECTRL_L                0x1000
#define BF_SPDIF_FRAMECTRL_L(v)             (((v) & 0x1) << 12)
#define BFM_SPDIF_FRAMECTRL_L(v)            BM_SPDIF_FRAMECTRL_L
#define BF_SPDIF_FRAMECTRL_L_V(e)           BF_SPDIF_FRAMECTRL_L(BV_SPDIF_FRAMECTRL_L__##e)
#define BFM_SPDIF_FRAMECTRL_L_V(v)          BM_SPDIF_FRAMECTRL_L
#define BP_SPDIF_FRAMECTRL_RSRVD0           11
#define BM_SPDIF_FRAMECTRL_RSRVD0           0x800
#define BF_SPDIF_FRAMECTRL_RSRVD0(v)        (((v) & 0x1) << 11)
#define BFM_SPDIF_FRAMECTRL_RSRVD0(v)       BM_SPDIF_FRAMECTRL_RSRVD0
#define BF_SPDIF_FRAMECTRL_RSRVD0_V(e)      BF_SPDIF_FRAMECTRL_RSRVD0(BV_SPDIF_FRAMECTRL_RSRVD0__##e)
#define BFM_SPDIF_FRAMECTRL_RSRVD0_V(v)     BM_SPDIF_FRAMECTRL_RSRVD0
#define BP_SPDIF_FRAMECTRL_CC               4
#define BM_SPDIF_FRAMECTRL_CC               0x7f0
#define BF_SPDIF_FRAMECTRL_CC(v)            (((v) & 0x7f) << 4)
#define BFM_SPDIF_FRAMECTRL_CC(v)           BM_SPDIF_FRAMECTRL_CC
#define BF_SPDIF_FRAMECTRL_CC_V(e)          BF_SPDIF_FRAMECTRL_CC(BV_SPDIF_FRAMECTRL_CC__##e)
#define BFM_SPDIF_FRAMECTRL_CC_V(v)         BM_SPDIF_FRAMECTRL_CC
#define BP_SPDIF_FRAMECTRL_PRE              3
#define BM_SPDIF_FRAMECTRL_PRE              0x8
#define BF_SPDIF_FRAMECTRL_PRE(v)           (((v) & 0x1) << 3)
#define BFM_SPDIF_FRAMECTRL_PRE(v)          BM_SPDIF_FRAMECTRL_PRE
#define BF_SPDIF_FRAMECTRL_PRE_V(e)         BF_SPDIF_FRAMECTRL_PRE(BV_SPDIF_FRAMECTRL_PRE__##e)
#define BFM_SPDIF_FRAMECTRL_PRE_V(v)        BM_SPDIF_FRAMECTRL_PRE
#define BP_SPDIF_FRAMECTRL_COPY             2
#define BM_SPDIF_FRAMECTRL_COPY             0x4
#define BF_SPDIF_FRAMECTRL_COPY(v)          (((v) & 0x1) << 2)
#define BFM_SPDIF_FRAMECTRL_COPY(v)         BM_SPDIF_FRAMECTRL_COPY
#define BF_SPDIF_FRAMECTRL_COPY_V(e)        BF_SPDIF_FRAMECTRL_COPY(BV_SPDIF_FRAMECTRL_COPY__##e)
#define BFM_SPDIF_FRAMECTRL_COPY_V(v)       BM_SPDIF_FRAMECTRL_COPY
#define BP_SPDIF_FRAMECTRL_AUDIO            1
#define BM_SPDIF_FRAMECTRL_AUDIO            0x2
#define BF_SPDIF_FRAMECTRL_AUDIO(v)         (((v) & 0x1) << 1)
#define BFM_SPDIF_FRAMECTRL_AUDIO(v)        BM_SPDIF_FRAMECTRL_AUDIO
#define BF_SPDIF_FRAMECTRL_AUDIO_V(e)       BF_SPDIF_FRAMECTRL_AUDIO(BV_SPDIF_FRAMECTRL_AUDIO__##e)
#define BFM_SPDIF_FRAMECTRL_AUDIO_V(v)      BM_SPDIF_FRAMECTRL_AUDIO
#define BP_SPDIF_FRAMECTRL_PRO              0
#define BM_SPDIF_FRAMECTRL_PRO              0x1
#define BF_SPDIF_FRAMECTRL_PRO(v)           (((v) & 0x1) << 0)
#define BFM_SPDIF_FRAMECTRL_PRO(v)          BM_SPDIF_FRAMECTRL_PRO
#define BF_SPDIF_FRAMECTRL_PRO_V(e)         BF_SPDIF_FRAMECTRL_PRO(BV_SPDIF_FRAMECTRL_PRO__##e)
#define BFM_SPDIF_FRAMECTRL_PRO_V(v)        BM_SPDIF_FRAMECTRL_PRO

#define HW_SPDIF_SRR                HW(SPDIF_SRR)
#define HWA_SPDIF_SRR               (0x80054000 + 0x30)
#define HWT_SPDIF_SRR               HWIO_32_RW
#define HWN_SPDIF_SRR               SPDIF_SRR
#define HWI_SPDIF_SRR               
#define HW_SPDIF_SRR_SET            HW(SPDIF_SRR_SET)
#define HWA_SPDIF_SRR_SET           (HWA_SPDIF_SRR + 0x4)
#define HWT_SPDIF_SRR_SET           HWIO_32_WO
#define HWN_SPDIF_SRR_SET           SPDIF_SRR
#define HWI_SPDIF_SRR_SET           
#define HW_SPDIF_SRR_CLR            HW(SPDIF_SRR_CLR)
#define HWA_SPDIF_SRR_CLR           (HWA_SPDIF_SRR + 0x8)
#define HWT_SPDIF_SRR_CLR           HWIO_32_WO
#define HWN_SPDIF_SRR_CLR           SPDIF_SRR
#define HWI_SPDIF_SRR_CLR           
#define HW_SPDIF_SRR_TOG            HW(SPDIF_SRR_TOG)
#define HWA_SPDIF_SRR_TOG           (HWA_SPDIF_SRR + 0xc)
#define HWT_SPDIF_SRR_TOG           HWIO_32_WO
#define HWN_SPDIF_SRR_TOG           SPDIF_SRR
#define HWI_SPDIF_SRR_TOG           
#define BP_SPDIF_SRR_RSRVD1         31
#define BM_SPDIF_SRR_RSRVD1         0x80000000
#define BF_SPDIF_SRR_RSRVD1(v)      (((v) & 0x1) << 31)
#define BFM_SPDIF_SRR_RSRVD1(v)     BM_SPDIF_SRR_RSRVD1
#define BF_SPDIF_SRR_RSRVD1_V(e)    BF_SPDIF_SRR_RSRVD1(BV_SPDIF_SRR_RSRVD1__##e)
#define BFM_SPDIF_SRR_RSRVD1_V(v)   BM_SPDIF_SRR_RSRVD1
#define BP_SPDIF_SRR_BASEMULT       28
#define BM_SPDIF_SRR_BASEMULT       0x70000000
#define BF_SPDIF_SRR_BASEMULT(v)    (((v) & 0x7) << 28)
#define BFM_SPDIF_SRR_BASEMULT(v)   BM_SPDIF_SRR_BASEMULT
#define BF_SPDIF_SRR_BASEMULT_V(e)  BF_SPDIF_SRR_BASEMULT(BV_SPDIF_SRR_BASEMULT__##e)
#define BFM_SPDIF_SRR_BASEMULT_V(v) BM_SPDIF_SRR_BASEMULT
#define BP_SPDIF_SRR_RSRVD0         20
#define BM_SPDIF_SRR_RSRVD0         0xff00000
#define BF_SPDIF_SRR_RSRVD0(v)      (((v) & 0xff) << 20)
#define BFM_SPDIF_SRR_RSRVD0(v)     BM_SPDIF_SRR_RSRVD0
#define BF_SPDIF_SRR_RSRVD0_V(e)    BF_SPDIF_SRR_RSRVD0(BV_SPDIF_SRR_RSRVD0__##e)
#define BFM_SPDIF_SRR_RSRVD0_V(v)   BM_SPDIF_SRR_RSRVD0
#define BP_SPDIF_SRR_RATE           0
#define BM_SPDIF_SRR_RATE           0xfffff
#define BF_SPDIF_SRR_RATE(v)        (((v) & 0xfffff) << 0)
#define BFM_SPDIF_SRR_RATE(v)       BM_SPDIF_SRR_RATE
#define BF_SPDIF_SRR_RATE_V(e)      BF_SPDIF_SRR_RATE(BV_SPDIF_SRR_RATE__##e)
#define BFM_SPDIF_SRR_RATE_V(v)     BM_SPDIF_SRR_RATE

#define HW_SPDIF_DEBUG                      HW(SPDIF_DEBUG)
#define HWA_SPDIF_DEBUG                     (0x80054000 + 0x40)
#define HWT_SPDIF_DEBUG                     HWIO_32_RW
#define HWN_SPDIF_DEBUG                     SPDIF_DEBUG
#define HWI_SPDIF_DEBUG                     
#define HW_SPDIF_DEBUG_SET                  HW(SPDIF_DEBUG_SET)
#define HWA_SPDIF_DEBUG_SET                 (HWA_SPDIF_DEBUG + 0x4)
#define HWT_SPDIF_DEBUG_SET                 HWIO_32_WO
#define HWN_SPDIF_DEBUG_SET                 SPDIF_DEBUG
#define HWI_SPDIF_DEBUG_SET                 
#define HW_SPDIF_DEBUG_CLR                  HW(SPDIF_DEBUG_CLR)
#define HWA_SPDIF_DEBUG_CLR                 (HWA_SPDIF_DEBUG + 0x8)
#define HWT_SPDIF_DEBUG_CLR                 HWIO_32_WO
#define HWN_SPDIF_DEBUG_CLR                 SPDIF_DEBUG
#define HWI_SPDIF_DEBUG_CLR                 
#define HW_SPDIF_DEBUG_TOG                  HW(SPDIF_DEBUG_TOG)
#define HWA_SPDIF_DEBUG_TOG                 (HWA_SPDIF_DEBUG + 0xc)
#define HWT_SPDIF_DEBUG_TOG                 HWIO_32_WO
#define HWN_SPDIF_DEBUG_TOG                 SPDIF_DEBUG
#define HWI_SPDIF_DEBUG_TOG                 
#define BP_SPDIF_DEBUG_RSRVD1               2
#define BM_SPDIF_DEBUG_RSRVD1               0xfffffffc
#define BF_SPDIF_DEBUG_RSRVD1(v)            (((v) & 0x3fffffff) << 2)
#define BFM_SPDIF_DEBUG_RSRVD1(v)           BM_SPDIF_DEBUG_RSRVD1
#define BF_SPDIF_DEBUG_RSRVD1_V(e)          BF_SPDIF_DEBUG_RSRVD1(BV_SPDIF_DEBUG_RSRVD1__##e)
#define BFM_SPDIF_DEBUG_RSRVD1_V(v)         BM_SPDIF_DEBUG_RSRVD1
#define BP_SPDIF_DEBUG_DMA_PREQ             1
#define BM_SPDIF_DEBUG_DMA_PREQ             0x2
#define BF_SPDIF_DEBUG_DMA_PREQ(v)          (((v) & 0x1) << 1)
#define BFM_SPDIF_DEBUG_DMA_PREQ(v)         BM_SPDIF_DEBUG_DMA_PREQ
#define BF_SPDIF_DEBUG_DMA_PREQ_V(e)        BF_SPDIF_DEBUG_DMA_PREQ(BV_SPDIF_DEBUG_DMA_PREQ__##e)
#define BFM_SPDIF_DEBUG_DMA_PREQ_V(v)       BM_SPDIF_DEBUG_DMA_PREQ
#define BP_SPDIF_DEBUG_FIFO_STATUS          0
#define BM_SPDIF_DEBUG_FIFO_STATUS          0x1
#define BF_SPDIF_DEBUG_FIFO_STATUS(v)       (((v) & 0x1) << 0)
#define BFM_SPDIF_DEBUG_FIFO_STATUS(v)      BM_SPDIF_DEBUG_FIFO_STATUS
#define BF_SPDIF_DEBUG_FIFO_STATUS_V(e)     BF_SPDIF_DEBUG_FIFO_STATUS(BV_SPDIF_DEBUG_FIFO_STATUS__##e)
#define BFM_SPDIF_DEBUG_FIFO_STATUS_V(v)    BM_SPDIF_DEBUG_FIFO_STATUS

#define HW_SPDIF_DATA               HW(SPDIF_DATA)
#define HWA_SPDIF_DATA              (0x80054000 + 0x50)
#define HWT_SPDIF_DATA              HWIO_32_RW
#define HWN_SPDIF_DATA              SPDIF_DATA
#define HWI_SPDIF_DATA              
#define HW_SPDIF_DATA_SET           HW(SPDIF_DATA_SET)
#define HWA_SPDIF_DATA_SET          (HWA_SPDIF_DATA + 0x4)
#define HWT_SPDIF_DATA_SET          HWIO_32_WO
#define HWN_SPDIF_DATA_SET          SPDIF_DATA
#define HWI_SPDIF_DATA_SET          
#define HW_SPDIF_DATA_CLR           HW(SPDIF_DATA_CLR)
#define HWA_SPDIF_DATA_CLR          (HWA_SPDIF_DATA + 0x8)
#define HWT_SPDIF_DATA_CLR          HWIO_32_WO
#define HWN_SPDIF_DATA_CLR          SPDIF_DATA
#define HWI_SPDIF_DATA_CLR          
#define HW_SPDIF_DATA_TOG           HW(SPDIF_DATA_TOG)
#define HWA_SPDIF_DATA_TOG          (HWA_SPDIF_DATA + 0xc)
#define HWT_SPDIF_DATA_TOG          HWIO_32_WO
#define HWN_SPDIF_DATA_TOG          SPDIF_DATA
#define HWI_SPDIF_DATA_TOG          
#define BP_SPDIF_DATA_HIGH          16
#define BM_SPDIF_DATA_HIGH          0xffff0000
#define BF_SPDIF_DATA_HIGH(v)       (((v) & 0xffff) << 16)
#define BFM_SPDIF_DATA_HIGH(v)      BM_SPDIF_DATA_HIGH
#define BF_SPDIF_DATA_HIGH_V(e)     BF_SPDIF_DATA_HIGH(BV_SPDIF_DATA_HIGH__##e)
#define BFM_SPDIF_DATA_HIGH_V(v)    BM_SPDIF_DATA_HIGH
#define BP_SPDIF_DATA_LOW           0
#define BM_SPDIF_DATA_LOW           0xffff
#define BF_SPDIF_DATA_LOW(v)        (((v) & 0xffff) << 0)
#define BFM_SPDIF_DATA_LOW(v)       BM_SPDIF_DATA_LOW
#define BF_SPDIF_DATA_LOW_V(e)      BF_SPDIF_DATA_LOW(BV_SPDIF_DATA_LOW__##e)
#define BFM_SPDIF_DATA_LOW_V(v)     BM_SPDIF_DATA_LOW

#define HW_SPDIF_VERSION                HW(SPDIF_VERSION)
#define HWA_SPDIF_VERSION               (0x80054000 + 0x60)
#define HWT_SPDIF_VERSION               HWIO_32_RW
#define HWN_SPDIF_VERSION               SPDIF_VERSION
#define HWI_SPDIF_VERSION               
#define BP_SPDIF_VERSION_MAJOR          24
#define BM_SPDIF_VERSION_MAJOR          0xff000000
#define BF_SPDIF_VERSION_MAJOR(v)       (((v) & 0xff) << 24)
#define BFM_SPDIF_VERSION_MAJOR(v)      BM_SPDIF_VERSION_MAJOR
#define BF_SPDIF_VERSION_MAJOR_V(e)     BF_SPDIF_VERSION_MAJOR(BV_SPDIF_VERSION_MAJOR__##e)
#define BFM_SPDIF_VERSION_MAJOR_V(v)    BM_SPDIF_VERSION_MAJOR
#define BP_SPDIF_VERSION_MINOR          16
#define BM_SPDIF_VERSION_MINOR          0xff0000
#define BF_SPDIF_VERSION_MINOR(v)       (((v) & 0xff) << 16)
#define BFM_SPDIF_VERSION_MINOR(v)      BM_SPDIF_VERSION_MINOR
#define BF_SPDIF_VERSION_MINOR_V(e)     BF_SPDIF_VERSION_MINOR(BV_SPDIF_VERSION_MINOR__##e)
#define BFM_SPDIF_VERSION_MINOR_V(v)    BM_SPDIF_VERSION_MINOR
#define BP_SPDIF_VERSION_STEP           0
#define BM_SPDIF_VERSION_STEP           0xffff
#define BF_SPDIF_VERSION_STEP(v)        (((v) & 0xffff) << 0)
#define BFM_SPDIF_VERSION_STEP(v)       BM_SPDIF_VERSION_STEP
#define BF_SPDIF_VERSION_STEP_V(e)      BF_SPDIF_VERSION_STEP(BV_SPDIF_VERSION_STEP__##e)
#define BFM_SPDIF_VERSION_STEP_V(v)     BM_SPDIF_VERSION_STEP

#endif /* __HEADERGEN_IMX233_SPDIF_H__*/
