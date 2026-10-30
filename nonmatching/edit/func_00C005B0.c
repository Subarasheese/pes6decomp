/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B91390();                                /* extern */
M2C_UNK func_00C00830(s32, M2C_UNK *);              /* extern */
M2C_UNK func_00C00AF0(s32, M2C_UNK *);              /* extern */
M2C_UNK func_00C00D70(s32, M2C_UNK *);              /* extern */
extern char D_00CEBA40[];

void func_00C005B0(void *arg0) {
    s32 temp_s0;
    u8 temp_a0;

    if (func_00B91390() != 1) {
        temp_a0 = M2C_FIELD(arg0, u8 *, 0x14);
        temp_s0 = M2C_FIELD(arg0, s32 *, 8);
        switch (temp_a0) {                          /* irregular */
        case 0:
            func_00C00D70(temp_s0, ((void *)D_00CEBA40));
            M2C_FIELD(arg0, u8 *, 0x14) = 1U;
            /* fallthrough */
        case 1:
            func_00C00AF0(temp_s0, ((void *)D_00CEBA40));
            return;
        case 2:
            func_00C00830(temp_s0, ((void *)D_00CEBA40));
            break;
        }
    }
}
