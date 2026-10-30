/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * Pes6Player_GetParams(int);
extern u8 func_00226E70(void);
extern void * func_00229750(void);
s32 func_00210DF0();                                /* extern */
void *func_00223E00(s32);                           /* extern */
s32 func_00230410();                                /* extern */
s32 func_00AF7070();                                /* extern */
void *func_00AF71D0(s32);                           /* extern */
extern char D_00591C09[];

void *func_00970870(s32 arg0) {
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *var_v0;
    void *var_v0_2;

    var_v1 = 1;
    if (func_00230410() == 1) {
        temp_s1 = arg0 & 0xFFFF;
        if ((temp_s1 >= 0x8000) && (temp_s1 < 0x80B8)) {

        } else {
            var_v1 = 0;
        }
        if (var_v1 == 1) {
            return Pes6Player_GetParams(arg0);
        }
        temp_v0 = func_00AF7070();
        if (temp_v0 != 0) {
            if ((temp_s1 >= 0x7000) && (temp_s1 < 0x7020)) {
                temp_v0_2 = func_00223E00(arg0);
                if (temp_v0_2 != NULL) {
                    if (!(M2C_FIELD(temp_v0_2, u8 *, 6) & 0x3F)) {
                        temp_v0_3 = func_00229750();
                        if (temp_v0_3 != NULL) {
                            var_v0_2 = temp_v0_3 + 4;
                        } else {
                            var_v0_2 = NULL;
                        }
                        return var_v0_2;
                    }
                    return temp_v0 + ((temp_s1 - 0x5C78) * 0x48);
                }
                return NULL;
            }
            if (temp_s1 < 0x1388) {
                if (func_00226E70() != 0) {
                    return temp_v0 + ((arg0 & 0xFFFF) * 0x48);
                }
                goto block_30;
            }
block_30:
            return Pes6Player_GetParams(arg0);
        }
        return NULL;
    }
    var_v1_2 = 1;
    if (func_00210DF0() == 1) {
        temp_a0 = arg0 & 0xFFFF;
        if ((temp_a0 >= 0x1770) && (temp_a0 < 0x18F7)) {

        } else {
            var_v1_2 = 0;
        }
        if (var_v1_2 == 1) {
            return func_00AF71D0(arg0);
        }
        if (((*(u8 *)D_00591C09) == 0xE) && (temp_a0 >= 0x7000) && (temp_a0 < 0x7020)) {
            temp_v0_4 = func_00229750();
            if (temp_v0_4 != NULL) {
                var_v0 = temp_v0_4 + 4;
            } else {
                var_v0 = NULL;
            }
            return var_v0;
        }
        goto block_47;
    }
block_47:
    return Pes6Player_GetParams(arg0);
}
