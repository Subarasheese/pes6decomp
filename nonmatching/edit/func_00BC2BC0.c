/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_002E33D0(s32);                         /* extern */
s32 func_00B90090(s32, M2C_UNK);                    /* extern */
s32 func_00B91390();                                /* extern */
M2C_UNK func_00BA5D90();                            /* extern */
s32 func_00BC1EA0();                                /* extern */
M2C_UNK func_00BC2CE0(s32, s32);                    /* extern */
M2C_UNK func_00BC3030(s32, s32);                    /* extern */
M2C_UNK func_00BC3910(s32);                         /* extern */
M2C_UNK func_00BC7280(M2C_UNK *);                   /* extern */
extern char D_00CE4E70[];
extern char D_00CE4E71[];
extern char D_00CE4E84[];
extern char D_00CE4E88[];

void func_00BC2BC0(void *arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s1;
    u8 *var_s0;

    if (func_00B91390() == 0) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 8);
        if (func_00B90090(temp_s0, 0x11) != 0) {
            func_00BC3910(temp_s0);
        }
        if (M2C_FIELD(arg0, u8 *, 0x11) != 0) {
            temp_s1 = func_00BC1EA0();
            if ((*(u8 *)D_00CE4E70) != 0) {
                func_00BC3030(temp_s0, temp_s1);
            }
            if ((*(u8 *)D_00CE4E71) != 0) {
                func_00BC2CE0(temp_s0, temp_s1);
            }
        }
        (*(u8 *)D_00CE4E70) = 0;
        (*(u8 *)D_00CE4E71) = 0;
        return;
    }
    func_00BA5D90();
    var_s1 = 0;
    var_s0 = ((void *)D_00CE4E70);
    do {
        func_002E33D0(M2C_FIELD(var_s0, s32 *, 4));
        func_001EDD90(M2C_FIELD(var_s0, s32 *, 0xC));
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2);
    func_002DF960((*(s32 *)D_00CE4E84));
    func_00BC7280(((void *)D_00CE4E88));
}
