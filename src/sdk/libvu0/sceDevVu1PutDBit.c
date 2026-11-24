/* Sony SDK / C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/devvu1.c). */
/* VU control registers (cfc2/ctc2), which C cannot reach: inline assembly, as in Sony's libdev. */

typedef unsigned int u_int;
typedef unsigned short u_short;

#define CFC2(value, reg) __asm__ volatile ("cfc2 %0, " reg : "=r" (value))
#define CTC2(value, reg) __asm__ volatile ("ctc2 %0, " reg : : "r" (value))

#define VU_FBRST "$vi28"
#define VU_CMSAR1 "$vi31"

void sceDevVu1PutDBit(int bit)
{
    u_int fbrst;

    CFC2(fbrst, VU_FBRST);
    if (bit == 1) {
        fbrst |= 0x400;
    } else {
        fbrst &= ~0x400;
    }
    CTC2(fbrst, VU_FBRST);
}
