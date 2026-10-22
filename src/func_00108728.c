/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
#ifndef EE_KERNEL_H
#define EE_KERNEL_H

/* The interrupt-handler exit of Sony's EE kernel header (eekernel.h): one asm statement holding
 * both instructions. As one statement the compiler keeps sync.l and ei together after the
 * epilogue's loads, the order every retail handler has (0054CFA8, 0054D960, 0054D9A0, 00551728,
 * 00555290, 00557AF0, 0055EB08, 004AB668, 005036D8); two separate one-instruction asms do not.
 * Owner's rule (2026-10-15): the most faithful source wins, so this macro, and no other
 * multi-instruction asm. */
#define ExitHandler() __asm__ volatile("sync.l; ei")

/* The module gp switch of the EE kernel header (GetGp/SetGp): code that calls back into another
 * module (Sony's SIF command handler, 005B0E30) saves $gp, loads the callee's, and restores it.
 * Retail moves $gp with `daddu`, one instruction each way. Like the kernel header, both clobber
 * memory, so what the callee may have changed is loaded again after the switch (005B0E30). */
static __inline__ void *GetGp(void)
{
    void *gp;
    __asm__ volatile("move %0, $gp" : "=r"(gp) : : "memory");
    return gp;
}

static __inline__ void *SetGp(void *gp)
{
    void *old;
    __asm__ volatile("move %0, $gp" : "=r"(old));
    __asm__ volatile("move $gp, %0" : : "r"(gp) : "memory");
    return old;
}

#endif
typedef unsigned int u_long128 __attribute__((mode(TI)));

typedef void (*sceSifCmdHandler)(void *, void *);

typedef struct {
    sceSifCmdHandler func;
    void *data;
    void *gp;
} sceSifCmdData;

typedef struct {
    unsigned int psize:8;
    unsigned int dsize:24;
    unsigned int dest;
    unsigned int fcode;
    unsigned int opt;
} sceSifCmdHdr;

struct CmdData {
    void *pktbuf;
    void *unused;
    void *iopbuf;
    sceSifCmdData *sys;
    int nsys;
    sceSifCmdData *usr;
    int nusr;
};

extern struct CmdData D_003EC258;
extern int func_00105750(void);

/* eekernel.h's SetGp carries a "memory" clobber: the handler table is reloaded after it. */

/* _sceSifCmdIntrHdlr */
int func_00108728(void)
{
    u_long128 pkt[7];
    struct CmdData *cd = &D_003EC258;
    volatile sceSifCmdHdr *h = (volatile sceSifCmdHdr *)cd->pktbuf;
    sceSifCmdHandler func;
    u_long128 *src;
    int size, i;

    size = h->psize;
    if (size == 0)
        return 0;
    size = (size + 15) / 16;
    h->psize = 0;
    src = (u_long128 *)h;
    for (i = 0; i < size; i++)
        pkt[i] = *src++;
    func_00105750();
    h = (volatile sceSifCmdHdr *)pkt;
    if (h->fcode & 0x80000000) {
        size = h->fcode & 0x7FFFFFFF;
        if (size < cd->nsys) {
            func = cd->sys[size].func;
            if (func) {
                void *gp = SetGp(cd->sys[size].gp);
                func(pkt, cd->sys[size].data);
                SetGp(gp);
            }
        }
    } else {
        size = h->fcode;
        if (size < cd->nusr) {
            func = cd->usr[size].func;
            if (func) {
                void *gp = SetGp(cd->usr[size].gp);
                func(pkt, cd->usr[size].data);
                SetGp(gp);
            }
        }
    }
    ExitHandler();
    return 0;
}
