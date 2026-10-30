/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00209A00(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */

void func_00B6D3E0(void **arg0) {
    s16 var_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    u8 temp_v1;
    void *temp_a0;

    if (!(M2C_FIELD(*arg0, s32 *, 0x94) & 1)) {
        temp_v0 = func_00BBB8C0(4);
        switch (temp_v0) {                          /* switch 1; irregular */
        case 3:                                     /* switch 1 */
            func_00209A00(M2C_FIELD(*arg0, s32 *, 4), 0x59B, 0);
            break;
        case 2:                                     /* switch 1 */
            func_00209A00(M2C_FIELD(*arg0, s32 *, 4), 0x59D, 0);
            break;
        case 1:                                     /* switch 1 */
            func_00209A00(M2C_FIELD(*arg0, s32 *, 4), 0x59C, 0);
            break;
        case 0:                                     /* switch 1 */
            func_00209A00(M2C_FIELD(*arg0, s32 *, 4), 0x59A, 0);
            break;
        }
        var_a0 = 1;
    } else if (func_00BBB8C0(5) == 0) {
        func_00209A00(M2C_FIELD(*arg0, s32 *, 4), 0x489, 0);
        var_a0 = 4;
        M2C_FIELD(*arg0, s32 *, 0x1C) = 0;
    } else {
        if ((func_00BBB8C0(0x64) == 0) && (temp_a0 = *arg0, temp_v1 = M2C_FIELD(temp_a0, u8 *, 0), (temp_v1 != 1)) && (temp_v1 != 0xC)) {
            func_00209A00(M2C_FIELD(temp_a0, s32 *, 4), 0x5A1, 0);
        } else {
            temp_v0_2 = func_00BBB8C0(4);
            switch (temp_v0_2) {                    /* switch 2; irregular */
            case 3:                                 /* switch 2 */
                func_00209A00(M2C_FIELD(*arg0, s32 *, 4), 0x59B, 0);
                break;
            case 2:                                 /* switch 2 */
                func_00209A00(M2C_FIELD(*arg0, s32 *, 4), 0x59D, 0);
                break;
            case 1:                                 /* switch 2 */
                func_00209A00(M2C_FIELD(*arg0, s32 *, 4), 0x59C, 0);
                break;
            case 0:                                 /* switch 2 */
                func_00209A00(M2C_FIELD(*arg0, s32 *, 4), 0x59A, 0);
                break;
            }
        }
        var_a0 = 1;
    }
    M2C_FIELD(*arg0, s16 *, 0x18) = var_a0;
}
