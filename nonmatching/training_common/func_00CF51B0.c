/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F58C0(void *);
M2C_UNK func_002F4980(s32, void *);                 /* extern */
M2C_UNK func_002F5FF0(void *, void ***);            /* extern */

s32 func_00CF51B0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *sp30;
    void *sp34;
    void **sp38;
    s32 sp3C;
    s32 var_v0;
    void ***var_v1;

    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
    M2C_FIELD(arg0, s32 *, 0x14) = arg3;
    func_002F4980(M2C_FIELD(arg0, s32 *, 0), arg0 + 4);
    if (M2C_FIELD(arg0, void **, 0x128) != NULL) {
        var_v1 = &sp38;
        var_v0 = 8;
        if (var_v1 != NULL) {
            do {
                *var_v1 = 0;
                var_v0 -= 1;
                var_v1 += 1;
            } while (var_v0 != 0);
        }
        sp34 = arg0 + 0x10;
        sp30 = arg0 + 4;
        sp38 = &sp30;
        sp3C = 2;
        func_002F5FF0(M2C_FIELD(arg0, void **, 0x128), &sp38);
        func_002F58C0(M2C_FIELD(arg0, void **, 0x128));
    }
    return 1;
}
