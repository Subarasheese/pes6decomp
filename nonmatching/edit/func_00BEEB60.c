/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BEEB60(void *arg0) {
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_a4;
    s32 var_a5;
    s32 var_a6;
    s32 var_a7;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s6;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    s32 var_t3;
    s32 var_t8;
    s32 var_t9;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;

    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x11) << 0x38) >> 0x3F) == 0) {
        var_s6 = 0;
    } else {
        var_s6 = 2;
    }
    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x12) << 0x38) >> 0x3F) != 0) {
        var_s4 = 4;
    } else {
        var_s4 = 0;
    }
    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x13) << 0x38) >> 0x3F) == 0) {
        var_s3 = 0;
    } else {
        var_s3 = 8;
    }
    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x14) << 0x38) >> 0x3F) == 0) {
        var_s2 = 0;
    } else {
        var_s2 = 0x10;
    }
    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x15) << 0x38) >> 0x3F) == 0) {
        var_s1 = 0;
    } else {
        var_s1 = 0x20;
    }
    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x16) << 0x38) >> 0x3F) == 0) {
        var_s0 = 0;
    } else {
        var_s0 = 0x40;
    }
    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x17) << 0x38) >> 0x3F) == 0) {
        var_t9 = 0;
    } else {
        var_t9 = 0x80;
    }
    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x18) << 0x38) >> 0x3F) == 0) {
        var_t8 = 0;
    } else {
        var_t8 = 0x100;
    }
    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x19) << 0x38) >> 0x3F) == 0) {
        var_t3 = 0;
    } else {
        var_t3 = 0x200;
    }
    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x1A) << 0x38) >> 0x3F) == 0) {
        var_t2 = 0;
    } else {
        var_t2 = 0x400;
    }
    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x1B) << 0x38) >> 0x3F) == 0) {
        var_t1 = 0;
    } else {
        var_t1 = 0x800;
    }
    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0xF) << 0x38) >> 0x3F) == 0) {
        var_t0 = 0;
    } else {
        var_t0 = 0x1000;
    }
    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0xE) << 0x38) >> 0x3F) == 0) {
        var_a7 = 0;
    } else {
        var_a7 = 0x2000;
    }
    if (!(M2C_FIELD(arg0, u8 *, 0x1E) & 1)) {
        var_a6 = 0;
    } else {
        var_a6 = 0x4000;
    }
    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x1E) << 0x3E) >> 0x3F) == 0) {
        var_a5 = 0;
    } else {
        var_a5 = 0x8000;
    }
    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x1E) << 0x3D) >> 0x3F) == 0) {
        var_a4 = 0;
    } else {
        var_a4 = 0x10000;
    }
    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x1E) << 0x3C) >> 0x3F) == 0) {
        var_a3 = 0;
    } else {
        var_a3 = 0x20000;
    }
    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x1E) << 0x3B) >> 0x3F) == 0) {
        var_a2 = 0;
    } else {
        var_a2 = 0x40000;
    }
    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x1E) << 0x3A) >> 0x3F) == 0) {
        var_a1 = 0;
    } else {
        var_a1 = 0x80000;
    }
    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x1E) << 0x39) >> 0x3F) == 0) {
        var_v1 = 0;
    } else {
        var_v1 = 0x100000;
    }
    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x1E) << 0x38) >> 0x3F) == 0) {
        var_v0_2 = 0;
    } else {
        var_v0_2 = 0x200000;
    }
    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x20) << 0x38) >> 0x3F) != 0) {
        var_v0 = 0x400000;
    } else {
        var_v0 = 0;
    }
    return var_v0 | (var_v0_2 | (var_v1 | (var_a1 | (var_a2 | (var_a3 | (var_a4 | (var_a5 | (var_a6 | (var_a7 | (var_t0 | (var_t1 | (var_t2 | (var_t3 | (var_t8 | (var_t9 | (var_s0 | (var_s1 | (var_s2 | (var_s3 | (var_s4 | ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x10) << 0x38) >> 0x3F) != 0) | var_s6)))))))))))))))))))));
}
