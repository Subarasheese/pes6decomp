/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK sprintf(s8 *, M2C_UNK *, s32);        /* extern */
M2C_UNK func_001D7BE0(s32, f32 *);                  /* extern */
M2C_UNK func_001D7CE0(s32, f32 *);                  /* extern */
M2C_UNK func_001DF4F0(s32, s32);                    /* extern */
M2C_UNK func_001DF820(s32, s8 *);                   /* extern */
f32 func_001E4E30(s32);                             /* extern */
s8 *func_001F08B0(s32);                             /* extern */
M2C_UNK func_00AEB530();                            /* extern */
extern char D_002C0064[];
extern char D_00B005E0[];
extern char D_00B005E8[];
extern void *D_00B02A90;
extern char D_00B02AA4[];
extern char D_00B02AA6[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54], gap at: 0x8. */
void func_00AEA740(void *arg0) {
    f32 sp60;
    s8 sp70;
    M2C_UNK *var_v0_3;
    f32 temp_f20;
    s32 temp_s3;
    s32 var_s0_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s8 *var_a1;
    s8 *var_a1_2;
    u16 var_s0;
    void *temp_v0;
    void *temp_v1;
    void *var_s2;

    var_s0 = (*(u16 *)D_00B02AA4);
    var_v0 = (s32) var_s0 >= 0x400;
    if (var_v0 != 0) {
        var_v0 = (s32) var_s0 < 0x10000;
    }
    if (var_v0 == 0) {
        var_s0 = 0xE4A;
    }
    var_v0_2 = (s32) var_s0 >= 0x400;
    if (var_v0_2 != 0) {
        var_v0_2 = (s32) var_s0 < 0x10000;
    }
    if (var_v0_2 != 0) {
        sprintf(&sp70, ((void *)D_00B005E0), (s32) var_s0);
        var_a1 = &sp70;
        if (D_00B02A90 == NULL) {
            var_s2 = NULL;
        } else if (var_a1 != NULL) {
            var_s2 = M2C_FIELD(D_00B02A90, void **, 0x18);
            if (var_s2 != NULL) {
                if (sp70 == 0) {
                    var_a1 = ((void *)D_00B005E8);
                }
                func_001DF820(M2C_FIELD(var_s2, s32 *, 0xC), var_a1);
            } else {
                var_s2 = NULL;
            }
        } else {
            var_s2 = NULL;
        }
        if (var_s2 != NULL) {
            temp_s3 = M2C_FIELD(D_00B02A90, s32 *, 0x30);
            if (temp_s3 != 0) {
                temp_f20 = func_001E4E30(M2C_FIELD(var_s2, s32 *, 0xC));
                func_001D7BE0(temp_s3, &sp60);
                sp60 = M2C_FIELD(D_00B02A90, f32 *, 0x50) + temp_f20;
                func_001D7CE0(temp_s3, &sp60);
            }
        }
        (*(u16 *)D_00B02AA4) = var_s0;
    }
    if ((*(u8 *)D_00B02AA6) != 0) {
        var_s0_2 = 0;
        var_v1 = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s8 *, 0x20) = 0;
    } else {
        var_s0_2 = 1;
        var_v1 = 1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s8 *, 0x20) = 1;
    }
    if (D_00B02A90 != NULL) {
        temp_v0 = M2C_FIELD(D_00B02A90, void **, 0x18);
        if (temp_v0 != NULL) {
            func_001DF4F0(M2C_FIELD(temp_v0, s32 *, 0xC), var_v1 & 0xFF);
        }
    }
    if (D_00B02A90 == NULL) {
        var_v0_3 = ((void *)D_002C0064);
    } else {
        M2C_FIELD(D_00B02A90, s32 *, 0) = var_s0_2;
        func_00AEB530();
        var_v0_3 = (M2C_UNK *)0x2C0000;
    }
    var_a1_2 = func_001F08B0((s32) var_v0_3 | 0x86);
    if ((D_00B02A90 != NULL) && (var_a1_2 != NULL)) {
        temp_v1 = M2C_FIELD(D_00B02A90, void **, 0x14);
        if (temp_v1 != NULL) {
            if (*var_a1_2 == 0) {
                var_a1_2 = ((void *)D_00B005E8);
            }
            func_001DF820(M2C_FIELD(temp_v1, s32 *, 0xC), var_a1_2);
        }
    }
}
