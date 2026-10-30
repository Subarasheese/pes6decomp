/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B4B90(void *, s32);
extern void func_001ED880(void *, f32);
extern void func_001ED840(void *, s8);
M2C_UNK func_001BDE00(void *);                      /* extern */
M2C_UNK func_001BDF00(void *);                      /* extern */
M2C_UNK func_001BE320(M2C_UNK, s32);                /* extern */
M2C_UNK func_001EDBA0(void *, s32);                 /* extern */
M2C_UNK func_001EDD90(void *);                      /* extern */
extern char D_003F7790[];
extern char D_003FB10C[];

s32 func_001BDBD0(void *arg0) {
    f32 temp_f1;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    u32 var_s4;
    void *temp_a0;
    void *var_s3;

    var_s0 = M2C_FIELD(arg0, s32 *, 0);
    var_s1 = 0;
    switch (var_s0) {                               /* irregular */
    case 1:
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x28) + 1;
        M2C_FIELD(arg0, s32 *, 0x28) = temp_v0;
        if ((temp_v0 >= 0x15) && (M2C_FIELD(arg0, u8 *, 0x38) & 1)) {
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
            var_s0 += 1;
        }
        break;
    default:
        var_s1 = 1;
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (*(s32 *)D_003F7790);
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        M2C_FIELD(arg0, s32 *, 0x20) = 0xFF;
        M2C_FIELD(arg0, s32 *, 0x30) = 0xC3580000;
        M2C_FIELD(arg0, s32 *, 0x34) = 0x43380000;
        func_001BE320(0xFF, (*(s32 *)D_003F7790));
        var_s0 += 1;
        break;
    case 2:
        if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
            var_s4 = 0;
            var_s3 = arg0;
            do {
                func_001EDBA0(M2C_FIELD(arg0, void **, 4), M2C_FIELD(var_s3, s32 *, 8));
                var_s4 += 1;
                M2C_FIELD(var_s3, s32 *, 8) = 0;
                var_s3 += 4;
            } while (var_s4 < 3U);
            func_001EDD90(M2C_FIELD(arg0, void **, 4));
            M2C_FIELD(arg0, void **, 4) = NULL;
            var_s0 += 1;
            M2C_FIELD(arg0, void **, 0x14) = NULL;
        }
        break;
    }
    if (M2C_FIELD(arg0, void **, 4) != NULL) {
        temp_f1 = (f32) ((*(s32 *)D_003F7790) - M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, f32 *, 0x2C) = temp_f1;
        if (temp_f1 < 0.0f) {
            M2C_FIELD(arg0, f32 *, 0x2C) = 0.0f;
        }
        func_001BDF00(arg0);
        func_001BDE00(arg0);
        if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x38) << 0x3E) >> 0x3F) != 0) {
            temp_s3 = M2C_FIELD(arg0, s32 *, 0x18);
            func_001ED840(M2C_FIELD(arg0, void **, 4), temp_s3 & 0xFF);
            if (temp_s3 == 1) {
                temp_a0 = M2C_FIELD(arg0, void **, 0x14);
                if (temp_a0 == NULL) {
                    func_001B4B90(temp_a0, 1);
                }
            }
            func_001B4B90(M2C_FIELD(arg0, void **, 0x14), temp_s3);
            M2C_FIELD(arg0, u8 *, 0x38) = (u8) ((M2C_FIELD(arg0, u8 *, 0x38) & ~2) | ((0 & 1) * 2));
        }
        if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x38) << 0x3D) >> 0x3F) != 0) {
            func_001ED880(M2C_FIELD(arg0, void **, 4), 2.0f + (*(f32 *)D_003FB10C));
        }
    }
    M2C_FIELD(arg0, s32 *, 0) = var_s0;
    return var_s1;
}
