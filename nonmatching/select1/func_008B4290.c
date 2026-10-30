/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002211F0(int, int, int, int);
extern char D_008DC2B2[];
extern char D_008DC2C2[];
extern char D_008DC2D2[];
extern char D_008DC2E2[];
extern char D_008DC2F2[];
extern char D_008DC302[];

s32 func_008B4290(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v0;

    temp_v0 = func_002211F0(arg0, arg1, arg2, arg3);
    if (M2C_FIELD(temp_v0, u8 *, 0) != (*(s16 *)D_008DC2B2)) {
        return 1;
    }
    if (M2C_FIELD(temp_v0, u8 *, 1) != (*(s16 *)D_008DC2C2)) {
        return 1;
    }
    if (M2C_FIELD(temp_v0, u8 *, 2) != (*(s16 *)D_008DC2E2)) {
        return 1;
    }
    if (M2C_FIELD(temp_v0, u8 *, 3) != (*(s16 *)D_008DC2F2)) {
        return 1;
    }
    if (M2C_FIELD(temp_v0, u8 *, 4) != (*(s16 *)D_008DC302)) {
        return 1;
    }
    switch ((*(s16 *)D_008DC2D2)) {                           /* irregular */
    case 0:
        if (M2C_FIELD(temp_v0, u8 *, 6) != 0) {
            return 1;
        }
block_26:
    default:
        return 0;
    case 1:
        if (M2C_FIELD(temp_v0, u8 *, 6) != 2) {
            return 1;
        }
        goto block_26;
    case 2:
        if (M2C_FIELD(temp_v0, u8 *, 6) != 1) {
            return 1;
        }
        goto block_26;
    }
}
