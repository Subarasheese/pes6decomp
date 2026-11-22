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
extern void func_00101EC0(void *p, int n);
extern DmaChan *D_003711E0[10];
extern int D_003C3878[10];
extern int func_00102000(DmaEnv *env);

int func_00101F20(int mode) {
    DmaEnv env;
    int old;
    int i;
    old = (*((volatile int *)0x1000E000)) & 1;
    for (i = 0; i < 10; i++) {
        if (D_003C3878[i] != 0) {
            int *ch = (int *)D_003711E0[i];
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
    func_00101EC0(&env, 0x14);
    func_00102000(&env);
    if (mode == 1) {
        *((volatile int *)0x1000E000) = (*((volatile int *)0x1000E000)) | 1;
    }
    return old;
}
