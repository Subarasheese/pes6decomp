/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_0082B290();                                /* extern */
s32 func_00841100();                                /* extern */
s32 func_00862110(s32, s32);                        /* extern */
s32 func_008692E0(s32, M2C_UNK *);                  /* extern */
s32 func_0086CAF0(s32, M2C_UNK *);                  /* extern */
extern char D_008A4398[];
extern char D_008A43B0[];
extern char D_008A5F84[];
extern char D_008AB460[];

s32 func_00825640(s32 arg0, void *arg1) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;

    temp_v0 = func_0082B290();
    if ((temp_v0 != -0x96) && ((*(s32 *)D_008A4398) != 0) && ((*(s8 *)D_008A43B0) != 1) && (temp_v0 != -0x3E) && (temp_v0 != -0x49)) {
        func_00862110((*(s32 *)D_008A4398), arg0);
    }
    if ((*(s32 *)D_008A4398) == 0) {
        return 2;
    }
    if (arg1 == NULL) {
        return 2;
    }
    if (arg0 < 0) {
        return 2;
    }
    if (arg0 >= 9) {
        return 2;
    }
    func_001C48E8(((void *)D_008AB460), 0, 0x48);
    M2C_FIELD(((void *)D_008AB460), s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(((void *)D_008AB460), s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    func_001C4730(((void *)D_008AB460) + 8, arg1 + 8, 0x40);
    if (arg0 != 5) {
        if ((*(s32 *)D_008A4398) == 0) {
            var_v1 = 9;
        } else {
            var_v1 = (*(s32 *)D_008A5F84);
        }
        if ((var_v1 != 5) && (func_00841100() == 0)) {
            goto block_37;
        }
        goto block_23;
    }
block_23:
    if (func_00862110((*(s32 *)D_008A4398), arg0) != 1) {
        return 1;
    }
    if ((*(s32 *)D_008A4398) == 0) {
        var_v1_2 = 9;
    } else {
        var_v1_2 = (*(s32 *)D_008A5F84);
    }
    if (var_v1_2 != 5) {
        var_v0 = func_0086CAF0((*(s32 *)D_008A4398) + (arg0 * 0x24), ((void *)D_008AB460));
    } else {
        var_v0 = func_008692E0((*(s32 *)D_008A4398) + (arg0 * 0x24), ((void *)D_008AB460));
    }
    if (var_v0 != 0) {
        return 2;
    }
block_37:
    return 4;
}
