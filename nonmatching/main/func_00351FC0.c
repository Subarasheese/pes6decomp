/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00351EB0(s32);
extern void func_00295610(void);
s32 func_00151EA0(M2C_UNK);                         /* extern */
M2C_UNK func_00295650(u8 *, s8 *);                  /* extern */
extern char D_00591BB4[];
extern char D_00591BB6[];
extern char D_00591BB8[];

void func_00351FC0(s8 arg0, s8 arg1, s8 arg2, s8 arg3) {
    u8 sp58;
    s8 sp59;
    s8 sp5A;
    s8 sp5B;
    s8 sp5C;
    s8 sp5D;
    s8 sp5E;
    s8 sp5F;
    s8 var_s1;
    s8 var_v0;
    s8 var_v0_2;

    var_s1 = arg2;
    sp5F = 0;
    if (!(var_s1 & 0xFF)) {
        do {
            var_s1 = func_00151EA0(0xFF) & 0xFF;
        } while (var_s1 == 0);
    }
    sp58 = func_00351EB0((s32) (*(u8 *)D_00591BB4));
    sp59 = arg0;
    sp5A = arg1;
    if ((*(u8 *)D_00591BB8) == 0) {
        var_v0 = 8;
    } else {
        var_v0 = 2;
    }
    sp5B = var_v0;
    if ((*(u8 *)D_00591BB6) != 0) {
        var_v0_2 = 0x15;
    } else {
        var_v0_2 = 0xD;
    }
    sp5C = var_v0_2;
    sp5D = var_s1;
    sp5E = arg3;
    func_00295650(&sp58, &sp5F);
    func_00295610();
}
