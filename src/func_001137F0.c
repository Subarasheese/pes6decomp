/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
/* types.h: the sized integer and float names every m2c draft uses (tools/cpu_solve.py PRELUDE),
 * once for every source instead of pasted into each (tools/cleanup.py headers). */
#ifndef TYPES_H
#define TYPES_H

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
typedef int s128 __attribute__((mode(TI))); typedef unsigned int u128 __attribute__((mode(TI)));

#endif
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_001084A8(s32, s32, s32);   /* extern */
s32 DIntr();                                /* extern */
s32 EIntr();                            /* extern */

extern s32 D_00372AA4;
extern s32 D_00372AC8;
void func_00113798();
s32 func_001137F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_s0;

    D_00372AA4 = 1;
    temp_s0 = DIntr();
    func_001084A8(0x80000012, func_00113798, 0);
    if (temp_s0 != 0) {
        EIntr();
    }
    D_00372AA4 = 0;
    D_00372AC8 = 1;
    return 1;
}
