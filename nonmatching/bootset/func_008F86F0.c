/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001CDAA0();                                /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_008F8EC0(M2C_UNK);                     /* extern */
M2C_UNK func_008F91C0(s32);                         /* extern */
M2C_UNK func_008F91E0(M2C_UNK);                     /* extern */
M2C_UNK func_008F9350(M2C_UNK);                     /* extern */
extern char D_008FA9E0[];
extern char D_008FA9E8[];
extern char D_008FAA78[];
extern char D_008FAA80[];

s32 func_008F86F0(void) {
    s32 var_s0;
    s32 var_v1;

    var_s0 = 0;
    switch ((*(s32 *)D_008FA9E0)) {                           /* switch 1; irregular */
    case 0x10:                                      /* switch 1 */
    case 0x1:                                       /* switch 1 */
        func_0026E840(0x8400F802);
        (*(s32 *)D_008FAA78) = (s32) ((*(s32 *)D_008FAA78) + 3) % 4;
        if (func_001CDAA0() == 0) {
            if ((u32) ((*(s32 *)D_008FAA78) - 1) < 2U) {
                (*(s32 *)D_008FAA78) = 0;
            }
        } else if ((*(s32 *)D_008FAA78) == 3) {
            (*(s32 *)D_008FAA78) = 2;
        }
        func_008F91C0((*(s32 *)D_008FAA78));
        break;
    case 0x20:                                      /* switch 1 */
    case 0x2:                                       /* switch 1 */
        func_0026E840(0x8400F802);
        (*(s32 *)D_008FAA78) = (s32) ((*(s32 *)D_008FAA78) + 1) % 4;
        if (func_001CDAA0() == 0) {
            if ((u32) ((*(s32 *)D_008FAA78) - 1) < 2U) {
                (*(s32 *)D_008FAA78) = 3;
            }
        } else if ((*(s32 *)D_008FAA78) == 3) {
            (*(s32 *)D_008FAA78) = 0;
        }
        func_008F91C0((*(s32 *)D_008FAA78));
        break;
    case 0x100:                                     /* switch 1 */
        func_0026E840(0x84028400);
        func_008F91E0(0);
        (*(s32 *)D_008FAA80) = 3;
        switch ((*(s32 *)D_008FAA78)) {                       /* switch 2; irregular */
        default:                                    /* switch 2 */
            func_008F9350(3);
            var_v1 = 0xE;
            break;
        case 1:                                     /* switch 2 */
            func_008F8EC0(3);
            var_v1 = 3;
            break;
        case 2:                                     /* switch 2 */
            func_008F8EC0(3);
            var_v1 = 8;
            break;
        case 3:                                     /* switch 2 */
            func_008F8EC0(3);
            var_v1 = 0xB;
            break;
        }
        (*(s32 *)D_008FA9E8) = var_v1;
        var_s0 = 1;
        break;
    }
    return var_s0;
}
