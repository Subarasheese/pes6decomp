/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001237A0(s32);                             /* extern */
M2C_UNK func_001237E0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_0012FE68();                                /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
s32 func_00135D48();                                /* extern */
s32 func_00135D70();                                /* extern */
s32 func_00135DA8();                                /* extern */
s32 func_00135DB8();                                /* extern */
M2C_UNK func_00137898();                            /* extern */
M2C_UNK func_001378D8();                            /* extern */
extern char D_005B3744[];
extern char D_005B58F4[];
extern char D_005B58FC[];
extern char D_005BC210[];
extern M2C_UNK func_00123358;
extern M2C_UNK func_001233B0;

s32 func_00123488(void) {
    M2C_UNK *var_a4;
    M2C_UNK var_a0;
    s32 var_a3;

    if (func_0012FE68() == 2) {
        if ((func_00135D48() & 0x2000) && !(func_00135D70() & 0x2000)) {
            if (func_001237A0((*(s32 *)D_005B58FC)) != 0) {
                func_00137898();
            }
        } else if ((func_00135D48() & 0x8000) && !(func_00135D70() & 0x8000)) {
            if (func_001237A0((*(s32 *)D_005B58F4)) != 0) {
                func_001378D8();
            }
        } else if ((func_00135D48() & (*(s32 *)D_005BC210)) && !(func_00135D70() & (*(s32 *)D_005BC210))) {
            if (func_00135DB8() == 0) {
                var_a3 = func_00135080(0x11);
                var_a4 = &func_00123358;
            } else {
                var_a0 = 0x10;
                if (func_00135DA8() == 0) {
                    var_a0 = 0xF;
                }
                var_a3 = func_00135080(var_a0);
                var_a4 = &func_001233B0;
            }
            func_0012DD30(1, 0x1F4, 0xFA, var_a3, var_a4, (*(s32 *)D_005B3744));
        }
    } else if ((func_00135D48() & (*(s32 *)D_005BC210)) && !(func_00135D70() & (*(s32 *)D_005BC210))) {
        func_001237E0(0, 0);
    }
    return 1;
}
