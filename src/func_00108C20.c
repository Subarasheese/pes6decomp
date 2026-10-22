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
struct Client { void *packet; int a4; int sema; char padC[8]; int b14; void *gp; int (* volatile end)(void *); void *arg; int b24; };
struct Packet { char pad[28]; struct Client *client; unsigned int cid; int a24; int a28; };
extern void iSignalSema(int);
extern void _sceRpcFreePacket(void *);
void func_00108C20(struct Packet *p) {
    struct Client *c;
    switch (p->cid) {
    case 0x8000000A:
        c = p->client;
        if (c->end) {
            void *old = SetGp(c->gp);
            int (*callback)(void *) = *(int (**)(void *))&c->end;
            callback(c->arg);
            SetGp(old);
        }
        break;
    case 0x80000009:
        c = p->client;
        c->b24 = p->a24;
        c->b14 = p->a28;
        break;
    case 0x8000000B:
    default: break;
    }
    c = p->client;
    if (c->sema >= 0) iSignalSema(c->sema);
    _sceRpcFreePacket(c->packet);
    c->packet = 0;
}
