/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0017F900(void);
s32 func_0093D150();                                /* extern */
M2C_UNK func_00971770();                            /* extern */
M2C_UNK func_00971780();                            /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
s32 func_00971920();                                /* extern */
void *func_0099C7F0(M2C_UNK);                       /* extern */
M2C_UNK func_009B2E80(void *);                      /* extern */
extern void *D_003EAD18;

s32 func_009B34B0(void) {
    s32 temp_v0;
    s32 var_s1;
    void *temp_s0;
    void *temp_v0_2;

    temp_s0 = D_003EAD18;
    var_s1 = 0;
    func_00971780();
    temp_v0 = func_00971920();
    switch (temp_v0) {                              /* irregular */
    case 3:
        func_009B2E80(temp_s0);
        var_s1 = 1;
        break;
    case 0:
        temp_v0_2 = func_0099C7F0(0x1A8);
        D_003EAD18 = temp_v0_2;
        M2C_FIELD(temp_v0_2, s32 *, 0) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 4) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 8) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 0x1A4) = func_0093D150();
        func_009717C0(1);
        break;
    case 1:
        func_009717C0(2);
        /* fallthrough */
    case 2:
        if (func_0017F900() != 0) {
            func_009717C0(3);
        }
        break;
    }
    func_00971770();
    return var_s1;
}
