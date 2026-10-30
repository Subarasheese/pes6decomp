/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E4570(void *);
extern void func_00265730(void *);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_002E33D0(s32);                         /* extern */
s32 func_00B90090(s32, M2C_UNK);                    /* extern */
s32 func_00B91390();                                /* extern */
M2C_UNK func_00BA0CB0(s32, u8);                     /* extern */
M2C_UNK func_00BA1C60(s32);                         /* extern */
extern char D_00CE4120[];
extern void *D_00CE413C;
extern char D_00CE4140[];
extern void *D_00CE4148;

void func_00BA0BC0(void *arg0) {
    s32 *var_s0;
    s32 *var_s1_2;
    s32 temp_s0;
    s32 var_s0_2;
    s32 var_s1;

    if (func_00B91390() == 0) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 8);
        if (func_00B90090(temp_s0, 0x15) != 0) {
            func_00BA1C60(temp_s0);
        }
        if (M2C_FIELD(arg0, u8 *, 0x11) != 0) {
            func_00BA0CB0(temp_s0, M2C_FIELD(arg0, u8 *, 0x14));
        }
        return;
    }
    var_s1 = 0;
    var_s0 = ((void *)D_00CE4120);
    do {
        func_002E33D0(*var_s0);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 3);
    var_s0_2 = 0;
    var_s1_2 = ((void *)D_00CE4120);
    do {
        func_002DF960(M2C_FIELD(var_s1_2, s32 *, 0xC));
        var_s0_2 += 1;
        var_s1_2 += 4;
    } while (var_s0_2 < 4);
    func_002E4570(D_00CE413C);
    func_001EDD90((*(s32 *)D_00CE4140));
    func_00265730(D_00CE4148);
}
