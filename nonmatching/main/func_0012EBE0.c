/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0012AD50(s32);
extern void memclr(void *, int);
extern s32 func_0012ADE0(s32);
extern char D_003FB778[];
extern char D_003FB77C[];
extern void *D_003FB780;

s16 func_0012EBE0(s32 arg0) {
    s16 var_s1;
    s32 var_a3;
    void *var_a2;
    void *var_s0;

    var_s1 = -1;
    if ((*(s32 *)D_003FB778) != -1) {
        func_0012AD50((*(s32 *)D_003FB778));
    }
    var_s0 = NULL;
    var_a3 = 0;
    if ((*(s32 *)D_003FB77C) > 0) {
        var_a2 = D_003FB780;
loop_3:
        if (M2C_FIELD(var_a2, s16 *, 2) != -1) {
            var_a3 += 1;
            var_a2 += 0x78;
            if (var_a3 < (*(s32 *)D_003FB77C)) {
                goto loop_3;
            }
        } else {
            var_s0 = D_003FB780 + (var_a3 * 0x78);
        }
    }
    if (var_s0 != NULL) {
        M2C_FIELD(var_s0, s32 *, 4) = arg0;
        M2C_FIELD(var_s0, s16 *, 2) = 0;
        if ((var_s0 + 0x1C) != NULL) {
            memclr(var_s0 + 0x28, 0x50);
            M2C_FIELD(var_s0, s32 *, 0x20) = 0;
            M2C_FIELD(var_s0, s32 *, 0x24) = 0;
        }
        var_s1 = M2C_FIELD(var_s0, s16 *, 0);
    }
    if ((*(s32 *)D_003FB778) != -1) {
        func_0012ADE0((*(s32 *)D_003FB778));
    }
    return var_s1;
}
