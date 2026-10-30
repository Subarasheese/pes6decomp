/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00D16370(s32, s32);
s32 func_001C80F0(M2C_UNK *, s32);                  /* extern */
M2C_UNK func_00D16B30();                            /* extern */
M2C_UNK func_00D1AA70(s32, s32);                    /* extern */
M2C_UNK func_00D1B290();                            /* extern */
M2C_UNK func_00D1B5E0();                            /* extern */
extern s32 D_003EB368;
extern s32 D_003EB36C;
extern char D_00D395F0[];
extern char D_00D39640[];
extern char D_00D39AA4[];
extern char D_00D39AAC[];

s32 func_00D197B0(void) {
    s32 temp_a0;

    if (((*(s32 *)D_00D39AA4) != 0) && ((*(s32 *)D_00D39AA4) != 1)) {
        if (func_001C80F0((M2C_UNK *)0xD39640, (*(s32 *)D_00D39AA4)) == 0) {
            D_003EB36C = 2;
        }
        func_00D16B30();
    } else {
        temp_a0 = ((s32) (*(s32 *)D_00D39AAC) >> 3) & 3;
        switch (temp_a0) {                          /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            if (func_001C80F0(((void *)D_00D39640), (*(s32 *)D_00D39AA4)) == 0) {
                D_003EB36C = 2;
            }
            /* fallthrough */
        case 1:                                     /* switch 1 */
            func_00D16B30();
            break;
        case 3:                                     /* switch 1 */
        case 2:                                     /* switch 1 */
            if (((*(s32 *)D_00D39AA4) != 0) && ((*(s32 *)D_00D39AA4) != 1)) {
                D_003EB36C = 2;
            } else {
                switch (temp_a0) {                  /* switch 2; irregular */
                case 0:                             /* switch 2 */
                    D_003EB36C = 2;
                    break;
                case 1:                             /* switch 2 */
                    D_003EB368 = 0;
                    (*(s8 *)D_00D395F0) = 0;
                    func_00D1AA70(temp_a0, (*(s32 *)D_00D39AA4));
                    func_00D1B290();
                    (*(s32 *)D_00D39AAC) &= ~0x18;
                    break;
                }
                func_00D16370((*(s32 *)D_00D39AA4), (*(s32 *)D_00D39AAC));
            }
            func_00D1B5E0();
            break;
        }
    }
    return 0;
}
