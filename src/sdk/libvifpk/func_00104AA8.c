/* compiler: ee-gcc-2.9-G0 */
/* Source: nathanialf/ico, sce/libipu/libipu.c (sceIpuRestartDMA). See LICENSES/ico-MIT.txt. */
typedef struct {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv;
extern void func_001048D0(int chcr);
extern void func_00104948(int chcr);

void func_00104AA8(sceIpuDmaEnv *env) {
    unsigned int bp = env->ipubp;
    int cmd = bp & 0x7F;
    int n = ((bp >> 16) & 3) + ((bp >> 8) & 0xF);
    int madr = env->d4madr - (n << 4);
    int qwc = env->d4qwc + n;
    if ((env->d3madr != 0) && (env->d3qwc != 0)) {
        *((volatile int *)0x1000B010) = env->d3madr;
        *((volatile int *)0x1000B020) = env->d3qwc;
        func_001048D0(env->d3chcr | 0x100);
    }
    while ((*((volatile int *)0x10002010)) < 0) {
    }

    *((volatile int *)0x10002000) = cmd;
    while ((*((volatile int *)0x10002010)) < 0) {
    }

    if ((madr != 0) && (qwc != 0)) {
        *((volatile int *)0x1000B410) = madr;
        *((volatile int *)0x1000B430) = env->d4tadr;
        *((volatile int *)0x1000B420) = qwc;
        func_00104948(env->d4chcr | 0x100);
    }
}
