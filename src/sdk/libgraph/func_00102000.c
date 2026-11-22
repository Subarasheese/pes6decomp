/* compiler: ee-gcc-2.9-G0 */
/* Voicedrew11/kfiv-decomp, src/sce/libdma/libdma.c (sceDmaPutEnv). See THIRD_PARTY.md. */

typedef struct {
    unsigned char mfd;
    unsigned char sts;
    unsigned char std;
    unsigned char rcyc;
    unsigned short cde;
    unsigned short cpc;
    unsigned short sqwc;
    unsigned short tqwc;
    void *rbadr;
    int rbsize;
} DmaEnv;
extern unsigned char D_003C38A0[16];
extern unsigned char D_003C38B0[16];
extern unsigned char D_003C38C0[16];
extern DmaEnv D_003EB4C8;

int func_00102000(DmaEnv *env) {
    int ctrl = *((volatile int *)0x1000E000);
    int pcr = *((volatile int *)0x1000E020);
    int sqwc = *((volatile int *)0x1000E030);
    int rbor = *((volatile int *)0x1000E050);
    int rbsr = *((volatile int *)0x1000E040);
    if (env->mfd >= 10) {
        return -1;
    }
    if (env->sts >= 10) {
        return -2;
    }
    if (env->std >= 10) {
        return -3;
    }
    if (env->rcyc >= 7) {
        return -4;
    }
    ctrl = (ctrl & 0xFFFFFFCF) | (D_003C38A0[env->mfd] << 4);
    ctrl = (ctrl & 0xFFFFFF3F) | (D_003C38B0[env->sts] << 6);
    ctrl = (ctrl & 0xFFFFFFF3) | (D_003C38C0[env->std] << 2);
    if (env->rcyc != 0) {
        ctrl |= 2;
        ctrl = (ctrl & 0xFFFFFCFF) | ((env->rcyc - 1) << 8);
    } else {
        ctrl &= 0xFFFFFFFD;
    }
    pcr = (env->cde << 16) | env->cpc;
    sqwc = (env->tqwc << 16) | env->sqwc;
    rbor = (int)env->rbadr;
    rbsr = env->rbsize;
    *((volatile int *)0x1000E000) = ctrl;
    *((volatile int *)0x1000E020) = pcr;
    *((volatile int *)0x1000E030) = sqwc;
    *((volatile int *)0x1000E050) = rbor;
    *((volatile int *)0x1000E040) = rbsr;
    D_003EB4C8 = *env;
    return 0;
}
