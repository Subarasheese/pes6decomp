/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001ABA60(void *, void *);              /* extern */
M2C_UNK func_008FCF70(s8 *, s8 *);                  /* extern */
extern char D_00907D48[];
extern char D_00908435[];
extern void *D_00908CA0;
extern void *D_00908CEC;
extern void *D_00908CF0;
extern void *D_00908CF4;

s32 func_008FAEC0(void) {
    s8 sp30;
    s32 var_s1;
    s32 var_v1;
    s8 *var_a0;
    s8 *var_a1;
    void **var_s0;
    void *temp_a0;
    void *temp_a1;

    var_a1 = ((void *)D_00907D48);
    var_a0 = &sp30;
    var_v1 = 0xF;
    do {
        var_v1 -= 1;
        *var_a0 = *var_a1;
        var_a1 += 1;
        var_a0 += 1;
    } while (var_v1 > 0);
    func_008FCF70(&sp30, var_a1);
    var_s1 = 0;
    var_s0 = &D_00908CA0;
    M2C_FIELD(*M2C_FIELD(D_00908CEC, void ***, 4), s8 *, 0x39) = 0xB7;
    M2C_FIELD(*M2C_FIELD(D_00908CF0, void ***, 4), s8 *, 0x39) = 0xB7;
    M2C_FIELD(*M2C_FIELD(D_00908CF4, void ***, 4), s8 *, 0x39) = 0xB7;
    do {
        if ((var_s1 < 8) || (var_s1 >= (s32) (*(u8 *)D_00908435))) {
            temp_a1 = *var_s0;
            temp_a0 = *M2C_FIELD(temp_a1, void ***, 4);
            if (temp_a0 != NULL) {
                M2C_FIELD(temp_a0, s8 *, 0x39) = 0xB7;
                if (var_s1 >= (s32) (*(u8 *)D_00908435)) {
                    M2C_FIELD(*M2C_FIELD(temp_a1, void ***, 4), s8 *, 0x3A) = 0x49;
                }
                func_001ABA60(*M2C_FIELD(temp_a1, void ***, 4), temp_a1);
            }
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 0x19);
    return 1;
}
