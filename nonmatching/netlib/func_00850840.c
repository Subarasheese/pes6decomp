/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00154220(s32);
extern s32 func_001543E0(s32);
extern u32 func_001541F0(s32);
extern s32 func_00154350(s32);
extern u8 func_00154160(s32, s32);
extern int func_002DCA50(void);
extern u32 func_001541C0(s32);
extern u32 func_00154190(s32);
extern s32 func_001543B0(s32);
extern s32 func_00853B50(s8, s8, s8, s8, s16, s32, s32, s32);
extern s32 func_00154380(s32);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s16 *func_008472D0();                               /* extern */
M2C_UNK func_008505F0(void *, u8, u8);              /* extern */
extern char D_008B1594[];

void func_00850840(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_s0;
    u8 temp_a2;
    u8 temp_s2;
    u8 var_a1;
    void *temp_s1;
    void *temp_v1;

    temp_s2 = M2C_FIELD(arg0, u8 *, 0x17);
    temp_s1 = arg0 + 0x28;
    if (M2C_FIELD(arg0, u8 *, 0x16) != 0) {
        if (temp_s2 != 0xFF) {
            temp_s0 = ~(*(s32 *)D_008B1594);
            M2C_FIELD(temp_s1, s32 *, 0xC) = (s32) (temp_s0 & func_001543E0((s32) temp_s2));
            M2C_FIELD(temp_s1, s32 *, 0x10) = (s32) (temp_s0 & func_001543B0((s32) temp_s2));
            M2C_FIELD(temp_s1, s32 *, 0x1C) = (s32) (temp_s0 & func_00154220((s32) temp_s2));
            M2C_FIELD(temp_s1, s32 *, 0x20) = (s32) (temp_s0 & func_001541F0((s32) temp_s2));
            M2C_FIELD(temp_s1, s32 *, 4) = (s32) (temp_s0 & func_00154380((s32) temp_s2));
            M2C_FIELD(temp_s1, s32 *, 0x14) = (s32) (temp_s0 & func_001541C0((s32) temp_s2));
            M2C_FIELD(temp_s1, s32 *, 8) = func_00154350((s32) temp_s2);
            M2C_FIELD(temp_s1, u32 *, 0x18) = func_00154190((s32) temp_s2);
            var_s0 = 0;
            do {
                M2C_FIELD((temp_s1 + var_s0), u8 *, 0x24) = func_00154160((s32) temp_s2, var_s0);
                var_s0 += 1;
            } while ((u32) var_s0 < 0x18U);
            if (func_002DCA50() == 0) {
                if ((M2C_FIELD(temp_s1, s32 *, 0xC) | M2C_FIELD(temp_s1, s32 *, 0x10)) != 0) {
                    M2C_FIELD(arg0, s8 *, 0x11) = 1;
                }
                temp_a2 = M2C_FIELD(arg0, u8 *, 0x1B);
                if (temp_a2 != 0) {
                    temp_v1 = M2C_FIELD(arg0, void **, 0x24);
                    if (temp_v1 != NULL) {
                        var_a1 = M2C_FIELD(temp_v1, u8 *, 4);
                    } else {
                        var_a1 = 0;
                    }
                    if (M2C_FIELD(temp_s1, s32 *, 4) & 4) {
                        var_a1 = var_a1 == 0;
                    }
                    func_008505F0(temp_s1, var_a1, temp_a2);
                }
            }
            if ((arg1 != 0) && (M2C_FIELD(temp_s1, s32 *, 0xC) != 0)) {
                func_00853B50(1, 0x1A, 0, 0, *func_008472D0(), 0, 0, 0);
            }
        }
    } else {
        func_001C48E8(temp_s1, 0, 0x3C);
    }
}
