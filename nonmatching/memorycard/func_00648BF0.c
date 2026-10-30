/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00648D30(s32 *);                           /* extern */
s32 func_00648FC0(M2C_UNK);                         /* extern */
extern s32 D_003EA214;
extern char D_0065A3C0[];
extern char D_0065A3C4[];

s32 func_00648BF0(void) {
    s32 sp20;
    s32 sp24;
    s32 *var_v1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_v0;

    var_v0 = 0xC;
    var_v1 = &sp20;
    var_s0 = 0;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp20 = func_001F08B0((*(s32 *)D_0065A3C0));
    sp24 = func_001F08B0((*(s32 *)D_0065A3C4));
    switch (D_003EA214) {                           /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        D_003EA214 = 0;
        var_s0 = 1;
        break;
    case 1:                                         /* switch 1 */
        temp_v0 = func_00648D30(&sp20);
        switch (temp_v0) {                          /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            break;
        case 2:                                     /* switch 3 */
            D_003EA214 = 0;
            break;
        case 1:                                     /* switch 3 */
            D_003EA214 += 1;
            break;
        }
        break;
    case 0:                                         /* switch 1 */
        temp_v0_2 = func_00648FC0(0);
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            break;
        case 2:                                     /* switch 2 */
            func_0026E840(0x8C008005);
            func_00648D30(&sp20);
            D_003EA214 += 1;
            break;
        case 1:                                     /* switch 2 */
            D_003EA214 += 2;
            break;
        }
        break;
    }
    return var_s0;
}
