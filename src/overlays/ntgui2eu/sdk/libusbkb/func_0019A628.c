/* compiler: ee-gcc-2.9-G0 */
/* Voicedrew11/kfiv-decomp, src/sce/libdma/libdma.c (sceDmaReset). See THIRD_PARTY.md. */

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
typedef struct DmaChan {
    volatile int chcr;
    int pad0[3];
    int madr;
    int pad1[3];
    int qwc;
    int pad2[3];
    int tadr;
} DmaChan;
extern void func_0019A5C8(void *p, int n);
extern DmaChan *D_005CAB10[10];
extern int D_006001B0[10];
extern int func_0019A708(DmaEnv *env);

int func_0019A628(int mode) {
    DmaEnv env;
    int old;
    int i;
    old = (*((volatile int *)0x1000E000)) & 1;
    for (i = 0; i < 10; i++) {
        if (D_006001B0[i] != 0) {
            int *ch = (int *)D_005CAB10[i];
            ch[0x00 / 4] = 0;
            ch[0x30 / 4] = 0;
            ch[0x10 / 4] = 0;
            ch[0x50 / 4] = 0;
            ch[0x40 / 4] = 0;
            ch[0x80 / 4] = 0;
        }
    }

    *((volatile int *)0x1000E010) = 0xFF1F;
    *((int *)((volatile int *)0x1000E010)) = (*((volatile int *)0x1000E010)) & 0xFF1F0000;
    func_0019A5C8(&env, 0x14);
    func_0019A708(&env);
    if (mode == 1) {
        *((volatile int *)0x1000E000) = (*((volatile int *)0x1000E000)) | 1;
    }
    return old;
}
