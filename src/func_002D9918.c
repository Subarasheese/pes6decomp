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

u8 func_002D98F8(u8);                               /* extern */

struct func_0058D160_arg0 {
    char pad0[0x1];
    u8 unk1;
    u8 unk2;
    u8 unk3;
    char pad4[0x1];
    u8 unk5;
    u8 unk6;
    u8 unk7;
};

void func_002D9918(struct func_0058D160_arg0 *arg0) {
    arg0->unk7 = func_002D98F8(arg0->unk7);
    arg0->unk6 = func_002D98F8(arg0->unk6);
    arg0->unk5 = func_002D98F8(arg0->unk5);
    arg0->unk3 = func_002D98F8(arg0->unk3);
    arg0->unk2 = func_002D98F8(arg0->unk2);
    arg0->unk1 = func_002D98F8(arg0->unk1);
}
