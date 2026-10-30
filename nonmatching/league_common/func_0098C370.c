/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00226710();                                /* extern */
s32 func_00228F20(s32);                             /* extern */
s32 func_002291C0();                                /* extern */
void *func_00229460();                              /* extern */
s32 func_0022F150();                                /* extern */
s32 func_002307F0();                                /* extern */
M2C_UNK func_002332F0();                            /* extern */
s8 func_00234E00(s32);                              /* extern */
s32 func_00236DC0();                                /* extern */
M2C_UNK func_0094BC50();                            /* extern */
M2C_UNK func_0098B950();                            /* extern */
M2C_UNK func_0098BF20();                            /* extern */
M2C_UNK func_0098C700();                            /* extern */
extern void *D_003E77B0;
extern void *D_003E7B0C;

void func_0098C370(void) {
    s32 var_s1;
    u8 temp_v1;
    void *temp_v0;

    if (func_0022F150() != 0) {
        if ((func_00226710() & 0xFF) != 6) {
            if (!(M2C_FIELD(D_003E77B0, u32 *, 0x20) & 0x40000)) {
                func_0098B950();
            } else {
                func_0098BF20();
            }
        } else {
            func_0098BF20();
        }
        func_002332F0();
        func_0094BC50();
        temp_v1 = M2C_FIELD(D_003E7B0C, u8 *, 0);
        switch (temp_v1) {                          /* irregular */
        case 3:
        case 1:
        case 4:
            break;
        case 0:
            temp_v0 = func_00229460();
            if (temp_v0 != NULL) {
                M2C_FIELD(D_003E7B0C, s8 *, 0x28) = 0;
                var_s1 = 0;
                if ((s32) M2C_FIELD(temp_v0, u8 *, 0x1364) > 0) {
loop_14:
                    if ((func_00228F20(var_s1 & 0xFF) & 0xFF) <= 0) {
                        var_s1 += 1;
                        if (var_s1 >= (s32) M2C_FIELD(temp_v0, u8 *, 0x1364)) {

                        } else {
                            goto loop_14;
                        }
                    } else {
                        M2C_FIELD(D_003E7B0C, s8 *, 0x28) = func_00234E00(var_s1 & 0xFF);
                    }
                }
            }
            break;
        }
        if (((func_00236DC0() == 1) || ((func_002291C0() == 1) && ((M2C_FIELD(D_003E77B0, u8 *, 0x24) & 1) != 1))) && !(func_002307F0() & 0xFF)) {
            func_0098C700();
        }
    }
}
