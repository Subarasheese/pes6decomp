/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207920(void *);
extern u32 func_00288670(u32, u32);
extern s32 func_002AE670(s32);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209540(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_009BAE30(void *);                          /* extern */
M2C_UNK func_00B7C220(void *);                      /* extern */
s8 func_00BBB8C0(u8);                               /* extern */
extern char D_00591BE4[];
extern char Pes6MatchSquads[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
void func_00B7BB60(void *arg0) {
    f32 var_f20;
    s16 var_v0;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v1;
    u8 temp_s1;
    void *temp_a0;

    M2C_FIELD(arg0, s8 *, 0x16) = 0x11;
    M2C_FIELD(arg0, s16 *, 0x18) = 0;
    temp_a0 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_a0, u16 *, 0x30) == 0x29E) {
        var_f20 = (f32) func_00207920(temp_a0);
    } else {
        var_f20 = 0.0f;
    }
    var_s1 = 0;
    if (func_009BAE30(arg0) != 0) {
        var_s1 = 1;
    }
    if (var_s1 != 0) {
        func_00B7C220(arg0);
    } else {
        if ((func_00BBB8C0(4U) == 0) && (M2C_FIELD(arg0, u8 *, 0x10) == 0)) {
            temp_s1 = M2C_FIELD(arg0, u8 *, 0x5C);
            temp_v0 = func_002AE670(0x14);
            var_v1 = temp_v0 >> 1;
            if (temp_v0 < 0) {
                var_v1 = (s32) (temp_v0 + 1) >> 1;
            }
            if (((s32) temp_s1 < var_v1) && (func_00BBB8C0(3U) == 0) && (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x81) & 0x7F, 0x28U) >= 0x46)) {
                func_00209540(M2C_FIELD(arg0, void **, 4), 0x2A1, (s32) var_f20);
                var_v0 = 2;
            } else {
                M2C_FIELD(arg0, s8 *, 0x62) = func_00BBB8C0((*(u8 *)D_00591BE4));
                func_00209A00(M2C_FIELD(arg0, void **, 4), 0x2A4, 0);
                var_v0 = 0xB;
            }
        } else {
            func_00209540(M2C_FIELD(arg0, void **, 4), 0x2A5, (s32) var_f20);
            var_v0 = 5;
        }
        M2C_FIELD(arg0, s16 *, 0x18) = var_v0;
        func_00207390(M2C_FIELD(arg0, void **, 4), 8);
    }
}
