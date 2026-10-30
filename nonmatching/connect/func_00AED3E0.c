/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001EDC80(s32, M2C_UNK);                    /* extern */
M2C_UNK func_001EEE60(s32, u8 *, u8);               /* extern */
extern char D_00AFFA80[];
extern char D_00AFFA84[];
extern char D_00AFFA88[];
extern char D_00AFFA8C[];

void func_00AED3E0(void *arg0, s32 arg1) {
    u8 sp4C;
    u8 sp4D;
    u8 sp4E;
    s8 sp4F;
    M2C_UNK *var_s2;
    s32 temp_a0;
    s32 temp_v0;
    u8 temp_a2;
    u8 var_v1;

    switch (arg1) {                                 /* switch 1; irregular */
    default:                                        /* switch 1 */
        var_s2 = ((void *)D_00AFFA80);
        break;
    case 1:                                         /* switch 1 */
        var_s2 = ((void *)D_00AFFA84);
        break;
    case 2:                                         /* switch 1 */
        var_s2 = ((void *)D_00AFFA88);
        break;
    case 3:                                         /* switch 1 */
        var_s2 = ((void *)D_00AFFA8C);
        break;
    }
    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_a0 != 0) {
            temp_v0 = func_001EDC80(temp_a0, 0);
            if (temp_v0 != 0) {
                temp_a2 = M2C_FIELD(var_s2, u8 *, 0);
                sp4C = temp_a2;
                sp4D = M2C_FIELD(var_s2, u8 *, 1);
                sp4E = M2C_FIELD(var_s2, u8 *, 2);
                sp4F = (s8) M2C_FIELD(arg0, s32 *, 4);
                func_001EEE60(temp_v0, &sp4C, temp_a2);
            }
        }
    }
    switch (arg1) {                                 /* switch 2; irregular */
    default:                                        /* switch 2 */
    case 1:                                         /* switch 2 */
        if (arg0 != NULL) {
            var_v1 = (M2C_FIELD(arg0, u8 *, 8) & ~1) | (0 & 1);
block_18:
            M2C_FIELD(arg0, u8 *, 8) = var_v1;
        }
        break;
    case 3:                                         /* switch 2 */
    case 2:                                         /* switch 2 */
        if (arg0 != NULL) {
            var_v1 = (M2C_FIELD(arg0, u8 *, 8) & ~1) | 1;
            goto block_18;
        }
        break;
    }
}
