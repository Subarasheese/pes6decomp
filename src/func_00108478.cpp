/* compiler: ee-gcc-2.96-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* types.h: the sized integer and float names every m2c draft uses (tools/cpu_solve.py PRELUDE),
 * once for every source instead of pasted into each (tools/cleanup.py headers). */
#ifndef TYPES_H
#define TYPES_H

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
typedef int s128 __attribute__((mode(TI))); typedef unsigned int u128 __attribute__((mode(TI)));

#endif

struct Struct_00886818 {
    char pad0[0x14];
    s32 unk14;
    s32 unk18;
};

extern Struct_00886818 D_003EC258;

extern "C" s32 func_00108478(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = D_003EC258.unk14;
    D_003EC258.unk18 = arg1;
    D_003EC258.unk14 = arg0;
    return temp_v0;
}
