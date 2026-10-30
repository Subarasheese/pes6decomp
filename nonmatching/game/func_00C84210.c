/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_00C76850(s32);                             /* extern */
M2C_UNK func_00C835B0(s32);                         /* extern */
M2C_UNK func_00C839D0(s32);                         /* extern */
M2C_UNK func_00C83E20(s32);                         /* extern */
M2C_UNK func_00C843A0();                            /* extern */
M2C_UNK func_00C88DD0(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_00C88EC0(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern char D_00CCC200[];
extern char D_00CCCD90[];
extern char D_00CCCD98[];
extern char D_00CCCDA0[];
extern char D_00CCCDA8[];
extern char D_00CCCDB0[];
extern M2C_UNK func_00C820D0;
extern M2C_UNK func_00C82150;

void func_00C84210(void) {
    M2C_UNK *var_s0;
    s32 var_s1;
    s32 var_v0;

    if (func_002DCA30() != 0) {
        func_00C843A0();
    }
    var_s1 = 0;
    var_s0 = ((void *)D_00CCC200);
    do {
        var_v0 = func_00C76850(var_s1);
        if ((var_v0 != 2) && (var_v0 != 1) && (var_v0 != 0)) {
            var_v0 = 0;
        }
        if (var_v0 != 1) {
            if (var_v0 != 2) {
                func_00C83E20(var_s1);
            } else {
                func_00C839D0(var_s1);
            }
        } else {
            func_00C835B0(var_s1);
        }
        if (func_002DCA30() != 0) {
            M2C_FIELD(var_s0, s32 *, 0x8C) = 0x3F800000;
            M2C_FIELD(var_s0, s32 *, 0x90) = 0xBC343957;
        }
        var_s1 += 1;
        var_s0 += 0x140;
    } while (var_s1 < 8);
    if (func_002DCA30() != 0) {
        func_001C48E8(((void *)D_00CCCDB0), 0, 8);
        func_001C48E8(((void *)D_00CCCDA8), 0, 8);
        func_001C48E8(((void *)D_00CCCDA0), 0, 8);
        func_001C48E8(((void *)D_00CCCD98), 0, 8);
        func_001C48E8(((void *)D_00CCCD90), 0, 8);
    }
    func_00C88EC0(0, &func_00C820D0, 0);
    func_00C88DD0(0, &func_00C82150, 0);
}
