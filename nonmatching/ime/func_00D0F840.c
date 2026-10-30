/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00827F60(s32);                             /* extern */
s32 func_0082AFE0(s32);                             /* extern */
M2C_UNK func_00885060(s32, s32, s32, s64);          /* extern */
M2C_UNK func_008853E0(s32, s32, s32, s64);          /* extern */
M2C_UNK func_00885430(s32, s32, s32, s64);          /* extern */
M2C_UNK func_00D11580(void *, s32, s32, M2C_UNK, s32, s32, s32, s64); /* extern */
extern char D_008A5F70[];
extern char D_00D376E8[];
extern void *D_00D376F0;
extern char D_00D37720[];
extern char D_00D3776B[];
extern char D_00D37771[];

s32 func_00D0F840(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s64 arg6) {
    s32 temp_v1;
    s32 var_a1;
    s32 var_v1;
    s8 var_v0;

    if ((*(s32 *)D_00D376E8) == 0) {
        return 0;
    }
    switch ((*(s16 *)D_008A5F70)) {                           /* switch 1; irregular */
    case 44:                                        /* switch 1 */
        return 0;
    case 43:                                        /* switch 1 */
    case 42:                                        /* switch 1 */
    case 40:                                        /* switch 1 */
    case 14:                                        /* switch 1 */
    case 13:                                        /* switch 1 */
    case 12:                                        /* switch 1 */
    case 11:                                        /* switch 1 */
    case 10:                                        /* switch 1 */
    case 9:                                         /* switch 1 */
    case 6:                                         /* switch 1 */
    case 5:                                         /* switch 1 */
    case 4:                                         /* switch 1 */
    case 3:                                         /* switch 1 */
    case 2:                                         /* switch 1 */
    case 1:                                         /* switch 1 */
    case 0:                                         /* switch 1 */
        return 0;
    default:                                        /* switch 1 */
        if ((func_0082AFE0(arg4) == 0) && (func_00827F60(arg4) == 0)) {
            func_00D11580(D_00D376F0, arg0, arg1, 0, arg2, arg3, arg5, arg6);
            if (((*(s16 *)D_008A5F70) != 0x27) && ((*(s16 *)D_008A5F70) != 0x26) && ((*(s16 *)D_008A5F70) != 0x25) && ((*(s16 *)D_008A5F70) != 0x20)) {

            } else if (D_00D376F0 != NULL) {
                temp_v1 = M2C_FIELD(D_00D376F0, s32 *, 0xDA8);
                if ((temp_v1 != 4) && (temp_v1 != 3) && (temp_v1 != 2) && (arg4 != 0)) {
                    if ((*(s32 *)D_00D376E8) == 0) {
                        var_v0 = 0;
                    } else {
                        var_v0 = (*(s8 *)D_00D37771);
                    }
                    if ((*(s32 *)D_00D376E8) == 0) {
                        goto block_48;
                    }
                    var_a1 = 1;
                    if ((*(s8 *)D_00D3776B) != 1) {
block_48:
                        var_a1 = 0;
                    }
                    if ((((s64) ((s64) var_v0 << 0x38) >> 0x38) == 1) && (var_a1 == 1)) {
                        if ((*(s32 *)D_00D376E8) == 0) {
                            var_v1 = 0;
                        } else {
                            var_v1 = (*(s32 *)D_00D37720);
                        }
                        switch (var_v1) {           /* switch 2; irregular */
                        case 18:                    /* switch 2 */
                            func_008853E0(arg4, arg0, arg1, (s64) (arg6 << 0x38) >> 0x38);
                            break;
                        case 15:                    /* switch 2 */
                            func_00885430(arg4, arg0, arg1, (s64) (arg6 << 0x38) >> 0x38);
                            break;
                        case 14:                    /* switch 2 */
                            func_00885060(arg4, arg0, arg1, (s64) (arg6 << 0x38) >> 0x38);
                            break;
                        }
                    }
                }
            }
        }
        return 1;
    }
}
