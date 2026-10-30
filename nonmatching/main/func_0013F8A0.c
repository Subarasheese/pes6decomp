/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0013F970(u8, u8, void *, void *, s32); /* extern */
M2C_UNK func_0013FBB0(u8, u8, void *, void *, s32); /* extern */
M2C_UNK func_0013FF30(u8, u8, void *, void *, s32); /* extern */
extern char D_00376350[];
extern char D_004FDBFC[];
extern char D_004FDC00[];

void func_0013F8A0(void) {
    M2C_UNK *var_a2;
    u8 temp_a1;
    u8 temp_a1_2;
    void *temp_a3;
    void *temp_a4;

    var_a2 = ((void *)D_00376350);
    temp_a4 = ((void *)D_00376350) + ((*(s32 *)D_004FDBFC) * 0x2C);
    temp_a3 = ((void *)D_00376350) + ((*(s32 *)D_004FDC00) * 0x2C);
    if ((*(s32 *)D_004FDBFC) != (*(s32 *)D_004FDC00)) {
        temp_a1 = M2C_FIELD(temp_a4, u8 *, 4);
        if ((temp_a1 != 2) && (var_a2 = (M2C_UNK *) M2C_FIELD(temp_a3, u8 *, 4), (var_a2 != (M2C_UNK *)2))) {
            if ((temp_a1 ^ (s32) var_a2) != 0) {
                temp_a1_2 = M2C_FIELD(temp_a4, u8 *, 0);
                if ((temp_a1_2 ^ M2C_FIELD(temp_a3, u8 *, 0)) == 0) {
                    if (var_a2 != NULL) {
                        func_0013FF30(temp_a1_2, (u8) var_a2, temp_a3, temp_a4, (*(s32 *)D_004FDBFC));
                    } else {
                        func_0013FBB0(temp_a1_2, (u8) var_a2, temp_a3, temp_a4, (*(s32 *)D_004FDBFC));
                    }
                }
            }
        } else {
            func_0013F970(temp_a1, (u8) var_a2, temp_a3, temp_a4, (*(s32 *)D_004FDBFC));
        }
    }
}
