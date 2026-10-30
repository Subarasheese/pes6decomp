/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

u32 func_001C80F0(s32);                             /* extern */
M2C_UNK func_002DE2D0(s32);                         /* extern */
s32 func_002DE530(s32, s32, u32, M2C_UNK);          /* extern */
s32 func_002DE610(s32, M2C_UNK *, M2C_UNK);         /* extern */
s32 func_00862160(s32);                             /* extern */
extern char D_00A89AD0[];
extern char D_00A89AD4[];
extern char D_00A89AE0[];
extern char D_00A89BEC[];
extern char D_00A89C08[];
extern char D_00A89C0C[];

s32 func_009FDFE0(void) {
    u32 temp_v0;
    u32 temp_v1;

    if ((*(s32 *)D_00A89C08) == 0) {
        return -3;
    }
    if (func_002DE610((*(s32 *)D_00A89AD4), ((void *)D_00A89BEC), 0x10) == 0) {
        temp_v0 = func_001C80F0((*(s32 *)D_00A89C08));
        if (temp_v0 >= (u32) (*(u32 *)D_00A89C0C)) {
            if (func_00862160((*(s32 *)D_00A89AD4)) == 1) {
                func_002DE2D0((*(s32 *)D_00A89AD4));
            }
            (*(s32 *)D_00A89AD4) = -1;
            (*(u32 *)D_00A89AE0) = 0;
            (*(s32 *)D_00A89AD0) = 6;
            return -2;
        }
        if (func_002DE530((*(s32 *)D_00A89AD4), (*(s32 *)D_00A89C08), temp_v0, 0) != temp_v0) {
            if (func_00862160((*(s32 *)D_00A89AD4)) == 1) {
                func_002DE2D0((*(s32 *)D_00A89AD4));
            }
            (*(s32 *)D_00A89AD4) = -1;
            (*(u32 *)D_00A89AE0) = 0;
            (*(s32 *)D_00A89AD0) = 6;
            return -3;
        }
        (*(u32 *)D_00A89AE0) = 0;
        (*(s32 *)D_00A89AD0) = 3;
        return 1;
    }
    temp_v1 = (*(u32 *)D_00A89AE0) + 1;
    (*(u32 *)D_00A89AE0) = temp_v1;
    if (temp_v1 >= 0x1D4DU) {
        if (func_00862160((*(s32 *)D_00A89AD4)) == 1) {
            func_002DE2D0((*(s32 *)D_00A89AD4));
        }
        (*(s32 *)D_00A89AD4) = -1;
        (*(u32 *)D_00A89AE0) = 0;
        (*(s32 *)D_00A89AD0) = 6;
        return -1;
    }
    return 0;
}
