/* compiler: ee-gcc-2.9-G0 */
/* Source: nathanialf/ico, sce/libipu/libipu.c (sceIpuStopDMA). See LICENSES/ico-MIT.txt. */
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

void func_001049C0(sceIpuDmaEnv *env) {
    func_00104948(1);
    env->d4madr = *((volatile int *)0x1000B410);
    env->d4tadr = *((volatile int *)0x1000B430);
    env->d4qwc = *((volatile int *)0x1000B420);
    env->d4chcr = *((volatile int *)0x1000B400);
    while ((*((volatile int *)0x10002010)) & 0xF0) {
    }

    func_001048D0(0);
    env->d3madr = *((volatile int *)0x1000B010);
    env->d3qwc = *((volatile int *)0x1000B020);
    env->d3chcr = *((volatile int *)0x1000B000);
    env->ipubp = *((volatile int *)0x10002020);
    env->ipuctrl = *((volatile int *)0x10002010);
}
