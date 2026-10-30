/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern int func_002646D0(int);
extern void func_002648F0(int);
extern void func_002648E0(int);
M2C_UNK func_001A5BE0(M2C_UNK32);                   /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
extern char D_00CF9620[];
extern char D_00CF9624[];
extern char D_00CF9628[];
extern char D_00CF962C[];

s32 func_00CD4060(s32 arg0, s32 arg1) {
    M2C_UNK32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    M2C_UNK32 *var_s0;
    s32 temp_v1;
    s32 var_s1;

    func_002648F0(arg0);
    temp_v1 = func_002646D0(arg0) & 0xFF;
    if (temp_v1 != 1) {
        if (temp_v1 != 0) {
            func_00264790((void *) arg0, 0U);
        }
        var_s0 = &sp50;
        var_s1 = 0;
        sp50 = (*(M2C_UNK32 *)D_00CF9620);
        sp54 = (*(f32 *)D_00CF9624);
        sp58 = (*(f32 *)D_00CF9628);
        sp5C = (*(f32 *)D_00CF962C);
        do {
            if (arg1 & (1 << var_s1)) {
                func_001A5BE0(*var_s0);
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 4);
        func_002646E0(arg0);
    }
    func_002648E0(arg0);
    return 1;
}
