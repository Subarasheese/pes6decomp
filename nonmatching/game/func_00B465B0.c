/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00207BE0(void *);
extern s32 func_002079F0(void *);
M2C_UNK func_002075B0(void *, s32, M2C_UNK, M2C_UNK); /* extern */
s32 func_00BB1310(u16);                             /* extern */
extern char D_00CBCB34[];

void func_00B465B0(void *arg0) {
    s32 var_s0;
    u16 temp_v1;
    u8 temp_v1_3;
    void *temp_v1_2;

    var_s0 = 0;
    func_00207BE0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4));
    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x3E);
    switch (temp_v1) {                              /* irregular */
    case 0x6C:
        if (func_002079F0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) != 0) {
            var_s0 = 1;
        }
        break;
    case 0x6D:
        if (func_002079F0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) != 0) {
            var_s0 = 1;
        }
        break;
    default:
        if (func_002079F0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) != 0) {
            temp_v1_2 = M2C_FIELD(arg0, void **, 0);
            temp_v1_3 = M2C_FIELD(temp_v1_2, u8 *, 0x4E);
            if ((s32) temp_v1_3 <= 0) {
                var_s0 = 1;
            } else if (temp_v1_3 != 0) {
                M2C_FIELD(temp_v1_2, u8 *, 0x4E) = (u8) (temp_v1_3 - 1);
            }
        }
        break;
    }
    if (var_s0 != 0) {
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), func_00BB1310(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x3E)) & 0xFFFF, 0, 8);
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x3E) == 0x81) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xC;
        } else {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xA;
            (*(u16 *)D_00CBCB34) |= 0x10;
        }
    }
}
