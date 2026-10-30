/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK Pes6BitSet_Write(s32, M2C_UNK, u64);           /* extern */
u64 func_0032E8D0(M2C_UNK);                         /* extern */
s32 func_003336E0(void *, s32);                     /* extern */
s32 func_00333710(void *, s32, u64);                /* extern */
M2C_UNK func_00335600(s32, void *, s32, s32, s32);  /* extern */
M2C_UNK func_003357A0(s32, void *, s32, s32, s32);  /* extern */
M2C_UNK func_003359A0(s32, void *, s32, s32, s32);  /* extern */
M2C_UNK func_00335B50(s32, void *, s32, s32, s32);  /* extern */
s32 func_00340880(f32, f32);                        /* extern */
u64 func_003411A0(u8);                              /* extern */
u64 func_00341350(M2C_UNK *);                       /* extern */
extern char D_005F1C80[];
extern char D_005F1C86[];
extern char D_005F1C8C[];
extern char D_005F1C94[];
extern char D_005F1CA0[];
extern char D_005F1CA5[];
extern char D_005F1CA6[];
extern char D_005F1CA8[];

s32 func_00335CB0(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 var_f1;
    s32 temp_s0;
    s32 temp_s7;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_v0;
    u64 var_a2;
    u64 var_a2_2;
    u64 var_a2_3;
    u64 var_a2_4;
    u64 var_a2_5;
    u64 var_a2_6;
    u64 var_a2_7;
    u8 temp_v0;
    void *temp_s6;
    void *temp_s6_2;
    void *temp_v1;

    temp_s6 = M2C_FIELD(arg1, void **, 0x48);
    Pes6BitSet_Write(arg0, 0x24, func_00341350(((void *)D_005F1C80)));
    temp_s0 = arg3 & 0xFF;
    Pes6BitSet_Write(arg0, 0x25, (M2C_FIELD(temp_s6, u8 *, 0x35) == temp_s0) | (func_003336E0(temp_s6, temp_s0) == 0xD));
    var_a2 = (*(u8 *)D_005F1CA6) == 2;
    if (var_a2 != 0) {
        var_a2 = M2C_FIELD(((void *)D_005F1C80), u8 *, 5) != 0x10;
    }
    Pes6BitSet_Write(arg0, 0x26, var_a2);
    Pes6BitSet_Write(arg0, 0x28, (u64) ((s64) (*(u8 *)D_005F1CA5) << 0x3E) >> 0x3F);
    Pes6BitSet_Write(arg0, 0x29, func_0032E8D0(0x32));
    Pes6BitSet_Write(arg0, 0x27, (u64) M2C_FIELD(M2C_FIELD(arg1, void **, 0x3C), u8 *, 0x35));
    Pes6BitSet_Write(arg0, 0x2A, (u64) M2C_FIELD(M2C_FIELD(arg1, void **, 0x3C), u8 *, 0x3B));
    Pes6BitSet_Write(arg0, 0x2B, func_0032E8D0(0x32));
    temp_v1 = M2C_FIELD(arg1, void **, 0x3C);
    var_a2_2 = M2C_FIELD(temp_v1, s32 *, 0x48) == 2;
    if (var_a2_2 != 0) {
        var_a2_2 = M2C_FIELD(temp_v1, u8 *, 0x3E) != 0;
    }
    Pes6BitSet_Write(arg0, 0x2C, var_a2_2);
    var_a2_3 = 1;
    var_a0 = 0;
    if (((s32) (*(u16 *)D_005F1CA8) >= 0x2001) && ((s32) (*(u16 *)D_005F1CA8) < 0x4000)) {
        var_a0 = 1;
    }
    if (var_a0 == 0) {
        var_v0 = (s32) (*(u16 *)D_005F1CA8) >= 0xC001;
        if (var_v0 != 0) {
            var_v0 = (s32) (*(u16 *)D_005F1CA8) < 0xE000;
        }
        if (var_v0 == 0) {
            var_a2_3 = 0;
        }
    }
    Pes6BitSet_Write(arg0, 0x30, var_a2_3);
    temp_s7 = M2C_FIELD(arg1, s32 *, 0x4C);
    temp_s6_2 = M2C_FIELD(arg1, void **, 0x48);
    switch (M2C_FIELD(((void *)D_005F1CA0), s32 *, 0)) {     /* irregular */
    case 11:
        var_a2_4 = 0;
        break;
    default:
        temp_v1_2 = M2C_FIELD(M2C_FIELD(arg1, void **, 0x3C), s32 *, 0x48);
        if ((temp_v1_2 != 3) && (temp_v1_2 != 2)) {
            var_a2_4 = 0;
        } else {
            var_a2_4 = 1;
        }
        break;
    case 12:
    case 4:
    case 8:
    case 10:
        var_a2_4 = 0;
        break;
    }
    Pes6BitSet_Write(arg0, 0x31, var_a2_4);
    var_a2_5 = M2C_FIELD((((arg3 & 0xFF) * 4) + temp_s7), s32 *, 0x8D4) == 5;
    if (var_a2_5 != 0) {
        var_a2_5 = func_00333710(temp_s6_2, temp_s0, var_a2_5) < 0xD;
    }
    Pes6BitSet_Write(arg0, 0x32, var_a2_5);
    func_00335B50(arg0, arg1, arg2, arg3, arg4);
    temp_v0 = M2C_FIELD(M2C_FIELD(arg1, void **, 0x3C), u8 *, 0x3A);
    Pes6BitSet_Write(arg0, 0x6E, (temp_v0 == 6) | (temp_v0 == 7));
    func_003359A0(arg0, arg1, arg2, arg3, arg4);
    temp_v0_2 = func_00340880((*(f32 *)D_005F1C8C), (*(f32 *)D_005F1C94));
    if (M2C_FIELD(((void *)D_005F1CA0), s32 *, 0x10) < 0) {
        var_f1 = 2.0f * (f32) (((u32) M2C_FIELD(((void *)D_005F1CA0), s32 *, 0x10) >> 1) | (M2C_FIELD(((void *)D_005F1CA0), s32 *, 0x10) & 1));
    } else {
        var_f1 = (f32) M2C_FIELD(((void *)D_005F1CA0), s32 *, 0x10);
    }
    var_a0_2 = 1;
    if (var_f1 < 2359296.0f) {
        var_a0_2 = 0;
    }
    var_a2_6 = (temp_v0_2 & var_a0_2) != 0;
    if (var_a2_6 != 0) {
        var_a2_6 = M2C_FIELD(((void *)D_005F1CA0), s32 *, 0) != 0xA;
    }
    if (var_a2_6 != 0) {
        var_a2_6 = M2C_FIELD(((void *)D_005F1CA0), s32 *, 0) != 8;
    }
    Pes6BitSet_Write(arg0, 0x8C, var_a2_6);
    Pes6BitSet_Write(arg0, 0x8F, M2C_FIELD(M2C_FIELD(arg1, void **, 0x3C), u8 *, 0x3A) == 5);
    func_003357A0(arg0, arg1, arg2, arg3, arg4);
    Pes6BitSet_Write(arg0, 0xA1, func_003411A0((u8) M2C_FIELD(((void *)D_005F1CA0), s32 *, 0)));
    Pes6BitSet_Write(arg0, 0xA3, M2C_FIELD(arg1, s32 *, 0x2C) == 2);
    Pes6BitSet_Write(arg0, 0xA6, (*(u8 *)D_005F1C86) & 1);
    var_a2_7 = 0;
    temp_v0_3 = M2C_FIELD(M2C_FIELD(arg1, void **, 0x3C), s32 *, 0x20);
    var_a0_3 = 0;
    if ((temp_v0_3 < 0xBB8) && (temp_v0_3 != 0)) {
        var_a0_3 = 1;
    }
    if ((var_a0_3 != 0) && (M2C_FIELD(((void *)D_005F1C80), u8 *, 5) != 0x10)) {
        var_a2_7 = 1;
    }
    Pes6BitSet_Write(arg0, 0xA7, var_a2_7);
    func_00335600(arg0, arg1, arg2, arg3, arg4);
    return 1;
}
