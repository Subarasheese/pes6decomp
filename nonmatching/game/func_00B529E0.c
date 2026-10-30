/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6270(void);
extern s32 func_00B61440(void *);
extern s32 func_00BBB8C0(s32);
extern void * func_00B2A420(u32);
M2C_UNK func_00209A00(void *, s32, M2C_UNK);        /* extern */
s32 func_00BB1310(M2C_UNK);                         /* extern */
extern char D_00CBCB37[];

void func_00B529E0(void) {
    s32 temp_v0;
    u16 var_v0;
    void *temp_s0;

    temp_s0 = func_00B2A420(func_00BF6270());
    if ((*(u8 *)D_00CBCB37) == 0x13) {
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), s16 *, 0x2C) = func_00B61440(temp_s0);
        temp_v0 = func_00BBB8C0(2);
        switch (temp_v0) {                          /* irregular */
        case 0:
            M2C_FIELD(temp_v0, s8 *, 0x4C) = 9;
            M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), s8 *, 0x4E) = func_00BBB8C0(3);
            break;
        default:
        case 1:
            M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s8 *, 0x4C) = 0xD;
            M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), s8 *, 0x4E) = func_00BBB8C0(3);
            break;
        }
    } else {
        if (!(M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), f32 *, 0xE0) < 0.0f)) {
            M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), u16 *, 0x26) = (u16) (0xCE2C - func_00BBB8C0(0x1000));
            var_v0 = M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), u16 *, 0x26);
        } else {
            M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), u16 *, 0x26) = (u16) (0x4E34 - func_00BBB8C0(0x1000));
            var_v0 = M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), u16 *, 0x26);
        }
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), u16 *, 0x28) = var_v0;
        M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), void **, 4), s8 *, 0x2D) = 0;
        func_00209A00(M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), void **, 4), func_00BB1310(0x151) & 0xFFFF, 0);
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s8 *, 0x4C) = 0xFF;
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), s8 *, 0x16) = 0x32;
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), s16 *, 0x18) = 0xC;
    }
}
