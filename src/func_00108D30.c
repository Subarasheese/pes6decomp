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

s32 func_001086E8(s32, void *, s32, s32, s32, s32); /* extern */
void *func_00108BB0(s32, u32);                      /* extern */
void *func_00108BE0(s32, u32);                      /* extern */
s32 func_001111E0(s32, void *, void *);    /* extern */

void func_00108CF0();
struct func_005B1438_arg0 {
    char pad0[0x10];
    u32 unk10;
    s32 unk14;
    char pad18[0x4];
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
};
struct func_005B1438_var_v0 {
    char pad0[0x14];
    s32 unk14;
    char pad18[0x4];
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
};

void func_00108D30(struct func_005B1438_arg0 *arg0, s32 arg1) {
    u32 temp_a1;
    struct func_005B1438_var_v0 *var_v0;

    temp_a1 = arg0->unk10;
    if (temp_a1 & 4) {
        var_v0 = func_00108BE0(arg1, temp_a1 >> 0x10);
    } else {
        var_v0 = func_00108BB0(arg1, temp_a1);
    }
    {
        s32 a = arg0->unk14;
        s32 b = arg0->unk1C;
        var_v0->unk14 = a;
        var_v0->unk1C = b;
    }
    var_v0->unk20 = 0x8000000C;
    var_v0->unk24 = (s32) arg0->unk20;
    var_v0->unk28 = (s32) arg0->unk24;
    var_v0->unk2C = (s32) arg0->unk28;
    if (func_001086E8(0x80000008, var_v0, 0x40, arg0->unk20, arg0->unk24, arg0->unk28) == 0) {
        func_001111E0(0x800, func_00108CF0, var_v0);
    }
}
