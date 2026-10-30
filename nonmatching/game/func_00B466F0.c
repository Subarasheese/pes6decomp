/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00207BE0(void *);
extern s32 func_002079F0(void *);
M2C_UNK func_002075B0(void *, s32, M2C_UNK, M2C_UNK); /* extern */
s32 func_00BB1310(u16);                             /* extern */

void func_00B466F0(void *arg0) {
    s32 var_s0;
    u8 temp_v1_2;
    void *temp_a0;
    void *temp_v1;

    var_s0 = 0;
    func_00207BE0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4));
    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
    if (M2C_FIELD(temp_a0, u16 *, 0x30) != 0x48E) {
        if (func_002079F0(temp_a0) != 0) {
            temp_v1 = M2C_FIELD(arg0, void **, 0);
            temp_v1_2 = M2C_FIELD(temp_v1, u8 *, 0x4E);
            if ((s32) temp_v1_2 <= 0) {
                var_s0 = 1;
            } else if (temp_v1_2 != 0) {
                M2C_FIELD(temp_v1, u8 *, 0x4E) = (u8) (temp_v1_2 - 1);
            }
        }
    } else if (func_002079F0(temp_a0) != 0) {
        var_s0 = 1;
    }
    if (var_s0 != 0) {
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), func_00BB1310(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x3E)) & 0xFFFF, 0, 8);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0;
    }
}
