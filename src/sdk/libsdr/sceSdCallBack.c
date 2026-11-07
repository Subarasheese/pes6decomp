/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/sdr_main.c). This SDK
   release also saves the caller's $gp, which sceSdRemote restores around the handler's RPC. */
typedef int (*sceSdSpu2IntrHandler)(int core, void *common);

extern sceSdSpu2IntrHandler D_00372A10; /* the handler sceSdRemote passes to the RPC */
extern void *D_00372A14;                /* the $gp it runs with */

/* Install the SPU2 end-of-transfer callback; returns the previous one. */
sceSdSpu2IntrHandler sceSdCallBack(sceSdSpu2IntrHandler func)
{
    sceSdSpu2IntrHandler old;
    void *gp;

    old = D_00372A10;
    D_00372A10 = func;
    __asm__ volatile("move %0, $gp" : "=r"(gp));
    D_00372A14 = gp;
    return old;
}
