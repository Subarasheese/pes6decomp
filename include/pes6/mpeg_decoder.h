/* SPDX-License-Identifier: GPL-3.0-or-later */
/* MPEG decoder structures adapted from OpenThievius/sly2-decomp, include/mpeg.h. */
#ifndef PES6_MPEG_DECODER_H
#define PES6_MPEG_DECODER_H
#include "types.h"

/* One block of a macroblock: a destination, two row counts and the sources of the two halves (0x1C bytes).
   `blocks` of a buffer holds four luma entries, then four chroma entries. */
typedef struct MPEGBLOCK {
    u32 address;
    int offset;
    int firstCount;
    int secondCount;
    int stride;
    u8 *firstSource;
    u8 *secondSource;
} MPEGBLOCK;

typedef struct MPEGBUFFER {
    u8 *base;                                     /* 0x00 */
    void *coefficients;                           /* 0x04 */
    u8 *upper[4];                                 /* 0x08 */
    u8 *lower[4];                                 /* 0x18 */
    void (*inverseQuantize[4])(MPEGBLOCK *);      /* 0x28, one routine per luma block */
    void (*inverseTransform[4])(MPEGBLOCK *);     /* 0x38, one routine per chroma block */
    MPEGBLOCK blocks[8];                          /* 0x48 */
    void *destination;                            /* 0x128 */
    int blockCount;                               /* 0x12C */
    int intra;                                    /* 0x130 */
    int field_0x134;                              /* 0x134 */
    int hasBlocks;                                /* 0x138 */
    int noCoefficients;                           /* 0x13C */
} MPEGBUFFER;

typedef struct MPEGDEC {
    int done;                                     /* 0x000 */
    u8 unknown_0x4[0xA8 - 0x4];
    int countA8;                                  /* 0x0A8, the three counts and three indices are read by one function */
    int countAC;                                  /* 0x0AC */
    int countB0;                                  /* 0x0B0 */
    int indexB4;                                  /* 0x0B4 */
    int indexB8;                                  /* 0x0B8 */
    int indexBC;                                  /* 0x0BC */
    u8 unknown_0xC0[0xE8 - 0xC0];
    int targetE8;                                 /* 0x0E8 */
    unsigned int imageBuffer;                     /* 0x0EC */
    u8 unknown_0xF0[4];
    int strideSelect;                             /* 0x0F4, a multiple of 16: 0 means the destination steps by the block size */
    int strideStep;                               /* 0x0F8, the base advances by strideStep * 0xC0 per pass */
    u8 unknown_0xFC[0x12C - 0xFC];
    int field_0x12C;                              /* a fault flag in one reader, "last code zero" in another */
    u8 unknown_0x130[0x13C - 0x130];
    int width;                                    /* 0x13C, in macroblocks */
    int height;                                   /* 0x140 */
    u8 unknown_0x144[0x154 - 0x144];
    int field_0x154;                              /* 0x154, an 8-bit value from the sequence header */
    int field_0x158;                              /* 0x158, 14 bits */
    int field_0x15C;                              /* 0x15C, 14 bits */
    int pictureCodingType;                        /* 0x160 */
    int fullPelForward;                           /* 0x164 */
    int forwardCode;                              /* 0x168 */
    int fullPelBackward;                          /* 0x16C */
    int backwardCode;                             /* 0x170 */
    int motionCode[2][2];                         /* 0x174, [direction][horizontal, vertical] */
    int pictureStructure;                         /* 0x184, 3 is a frame picture */
    int topFieldFirst;                            /* 0x188, picks which dual-prime vector pair goes first */
    int framePredFrameDct;                        /* 0x18C */
    int concealmentVectors;                       /* 0x190 */
    u8 unknown_0x194[0x1C0 - 0x194];
    int resetDcPredictor;                         /* 0x1C0 */
    int quantizerScaleCode;                       /* 0x1C4 */
    u8 unknown_0x1C8[0x5A0 - 0x1C8];
    MPEGBUFFER buffers[2];                        /* 0x5A0 */
    int bufferIndex;                              /* 0x820 */
    int field_0x824;                              /* 0x824, cleared with the buffer index by one reader */
    int commandPending;                           /* 0x828 */
    unsigned int commandState;                    /* 0x82C */
    void *output;                                 /* 0x830, the destination or scratch picture */
    int stop;                                     /* 0x834 */
    u8 unknown_0x838[0x848 - 0x838];
    int topBits;                                  /* 0x848 */
    int bitsAvailable;                            /* 0x84C */
    u8 unknown_0x850[0x858 - 0x850];
    int field_0x858;                              /* "mpeg2" in one reader, "keep going" in another */
    u8 unknown_0x85C[0x868 - 0x85C];
    int field_0x868;                              /* 0x868 */
    u8 unknown_0x86C[0x878 - 0x86C];
    int field_0x878;                              /* "aborted" in one reader */
    int sameFrame;                                /* 0x87C */
} MPEGDEC;

/* What the decoder's entry points are given: the decoder sits at 0x40 (one reader so far: func_0024ACD8) */
typedef struct MPEGHANDLE {
    u8 unknown_0x0[0x40];
    MPEGDEC *state;                               /* 0x40 */
} MPEGHANDLE;

typedef char check_MPEGBLOCK_size[(sizeof(MPEGBLOCK) == 0x1C) ? 1 : -1];
typedef char check_MPEGBUFFER_size[(sizeof(MPEGBUFFER) == 0x140) ? 1 : -1];
typedef char check_MPEGBUFFER_blocks[((u32)&((MPEGBUFFER *)0)->blocks == 0x48) ? 1 : -1];
typedef char check_MPEGBUFFER_destination[((u32)&((MPEGBUFFER *)0)->destination == 0x128) ? 1 : -1];
typedef char check_MPEGBUFFER_noCoefficients[((u32)&((MPEGBUFFER *)0)->noCoefficients == 0x13C) ? 1 : -1];
typedef char check_MPEGDEC_buffers[((u32)&((MPEGDEC *)0)->buffers == 0x5A0) ? 1 : -1];
typedef char check_MPEGDEC_bufferIndex[((u32)&((MPEGDEC *)0)->bufferIndex == 0x820) ? 1 : -1];
typedef char check_MPEGDEC_output[((u32)&((MPEGDEC *)0)->output == 0x830) ? 1 : -1];
typedef char check_MPEGDEC_topBits[((u32)&((MPEGDEC *)0)->topBits == 0x848) ? 1 : -1];
typedef char check_MPEGDEC_stop[((u32)&((MPEGDEC *)0)->stop == 0x834) ? 1 : -1];
typedef char check_MPEGDEC_imageBuffer[((u32)&((MPEGDEC *)0)->imageBuffer == 0xEC) ? 1 : -1];
typedef char check_MPEGDEC_strideSelect[((u32)&((MPEGDEC *)0)->strideSelect == 0xF4) ? 1 : -1];
typedef char check_MPEGDEC_strideStep[((u32)&((MPEGDEC *)0)->strideStep == 0xF8) ? 1 : -1];
typedef char check_MPEGDEC_pictureStructure[((u32)&((MPEGDEC *)0)->pictureStructure == 0x184) ? 1 : -1];
typedef char check_MPEGDEC_quantizerScaleCode[((u32)&((MPEGDEC *)0)->quantizerScaleCode == 0x1C4) ? 1 : -1];
typedef char check_MPEGDEC_sameFrame[((u32)&((MPEGDEC *)0)->sameFrame == 0x87C) ? 1 : -1];
typedef char check_MPEGDEC_field_0x878[((u32)&((MPEGDEC *)0)->field_0x878 == 0x878) ? 1 : -1];

#endif
