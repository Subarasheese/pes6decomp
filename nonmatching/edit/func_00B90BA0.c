/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F4E10(void *);
M2C_UNK func_001C4730(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_001C48E8(void **, M2C_UNK, M2C_UNK);   /* extern */
s32 func_002F3850(void *);                          /* extern */
extern char D_00CB3EC0[];
extern void *D_00CDF8F0;
extern char D_00CDF9E4[];
extern char D_00CDF9E8[];

s32 func_00B90BA0(void) {
    s32 temp_v0;
    s32 var_v0;

    if (D_00CDF8F0 == NULL) {
        var_v0 = 1;
    } else {
        temp_v0 = func_002F3850(D_00CDF8F0);
        if ((temp_v0 != 4) && (temp_v0 != 0) && (temp_v0 != 2)) {
            goto block_17;
        }
        if (!(((u32) (*(u32 *)D_00CDF9E4) >> 1) & 1)) {
            if (!(((u32) (*(u32 *)D_00CDF9E4) >> 5) & 1)) {
                if (!(((u32) (*(u32 *)D_00CDF9E4) >> 2) & 1)) {
                    var_v0 = 1;
                } else {
                    goto block_17;
                }
            } else {
                goto block_17;
            }
        } else {
block_17:
            var_v0 = 0;
        }
    }
    if (var_v0 == 0) {
        return 0;
    }
    if (D_00CDF8F0 != NULL) {
        func_002F4E10(D_00CDF8F0);
        D_00CDF8F0 = NULL;
    }
    func_001C48E8(&D_00CDF8F0, 0, 0x10C);
    func_001C4730(((void *)D_00CDF9E8), ((void *)D_00CB3EC0), 0x10);
    return 1;
}
