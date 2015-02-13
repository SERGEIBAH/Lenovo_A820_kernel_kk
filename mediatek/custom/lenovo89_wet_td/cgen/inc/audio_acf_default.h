/*******************************************************************************
 *
 * Filename:
 * ---------
 * audio_acf_default.h
 *
 * Project:
 * --------
 *   ALPS
 *
 * Description:
 * ------------
 * This file is the header of audio customization related parameters or definition.
 *
 * Author:
 * -------
 * Tina Tsai
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef AUDIO_ACF_DEFAULT_H
#define AUDIO_ACF_DEFAULT_H

    /* Compensation Filter HSF coeffs: default all pass filter       */
    /* BesLoudness also uses this coeffs    */ 
    #define BES_LOUDNESS_HSF_COEFF \
0x7e7713f,   0xf0311d83,   0x7e7713f,   0x7e76c188,   0x0,     \
0x7e54a66,   0xf0356b34,   0x7e54a66,   0x7e53c1aa,   0x0,     \
0x7db51a8,   0xf0495caf,   0x7db51a8,   0x7db2c248,   0x0,     \
0x7cf4c25,   0xf06167b6,   0x7cf4c25,   0x7cefc306,   0x0,     \
0x7cb11ae,   0xf069dca4,   0x7cb11ae,   0x7cabc348,   0x0,     \
0x7b78e02,   0xf090e3fd,   0x7b78e02,   0x7b6dc47b,   0x0,     \
0x7a0343d,   0xf0bf9786,   0x7a0343d,   0x79eec5e7,   0x0,     \
0x7980936,   0xf0cfed93,   0x7980936,   0x7967c666,   0x0,     \
0x772a3e5,   0xf11ab836,   0x772a3e5,   0x76fbc8a7,   0x0,     \
    \
0x7f5b47f,   0xf0149702,   0x7f5b47f,   0x7f5ac0a3,   0x0,     \
0x7f4ca8d,   0xf0166ae5,   0x7f4ca8d,   0x7f4bc0b2,   0x0,     \
0x7f087fe,   0xf01ef003,   0x7f087fe,   0x7f05c0f4,   0x0,     \
0x7eb571d,   0xf02951c5,   0x7eb571d,   0x7eb0c145,   0x0,     \
0x7e98001,   0xf02cfffe,   0x7e98001,   0x7e91c161,   0x0,     \
0x7e0e896,   0xf03e2ed4,   0x7e0e896,   0x7e02c1e5,   0x0,     \
0x7d669a2,   0xf0532cbb,   0x7d669a2,   0x7d51c283,   0x0,     \
0x7d2af5a,   0xf05aa14c,   0x7d2af5a,   0x7d11c2bb,   0x0,     \
0x7c13d5c,   0xf07d8548,   0x7c13d5c,   0x7be3c3bb,   0x0

    /* Compensation Filter BPF coeffs: default all pass filter      */ 
    #define BES_LOUDNESS_BPF_COEFF \
0x3f6282bb,   0x3e267d44,   0xc2770000,     \
0x3f5482ff,   0x3dfd7d00,   0xc2ad0000,     \
0x3f168443,   0x3d407bbc,   0xc3a90000,     \
0x3ecb85e4,   0x3c5e7a1b,   0xc4d60000,     \
0x3eb0867e,   0x3c0f7981,   0xc53f0000,     \
0x3e388973,   0x3aa6768c,   0xc7200000,     \
    \
0x3f8a82bb,   0x3dfd7d44,   0xc2770000,     \
0x3f8082ff,   0x3dd17d00,   0xc2ad0000,     \
0x3f528443,   0x3d047bbc,   0xc3a90000,     \
0x3f1a85e4,   0x3c0e7a1b,   0xc4d60000,     \
0x3f06867e,   0x3bb97981,   0xc53f0000,     \
0x3ead8973,   0x3a31768c,   0xc7200000,     \
    \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
    \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
    \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
    \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
    \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
    \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0
    
    #define BES_LOUDNESS_LPF_COEFF \
0xe171c2f,   0xe1713af,   0xf3f20000,     \
0x1016202d,   0x10160af5,   0xf4af0000,     \
0x1ac33586,   0x1ac3e25f,   0xf2940000,     \
0x2c1d583b,   0x2c1dae1a,   0xe16f0000,     \
0x340c6818,   0x340c9a28,   0xd5a70000,     \
0x0,   0x0,   0x0

    #define BES_LOUDNESS_WS_GAIN_MAX  0
           
    #define BES_LOUDNESS_WS_GAIN_MIN  0
           
    #define BES_LOUDNESS_FILTER_FIRST  0
           
    #define BES_LOUDNESS_GAIN_MAP_IN \
0xd3, 0xe2, 0xf6, 0x0, 0x0
   
    #define BES_LOUDNESS_GAIN_MAP_OUT \            
0x12, 0xa, 0x6, 0x0, 0x0

	#define BES_LOUDNESS_ATT_TIME	0 //164
	#define BES_LOUDNESS_REL_TIME	0 //16400              

#endif
