/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BE4D0(s32);
M2C_UNK func_008157A0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_008214E0();                                /* extern */
s32 func_0082B810();                                /* extern */
M2C_UNK func_009C9EF0(s32);                         /* extern */
M2C_UNK func_009CA090(s32);                         /* extern */
M2C_UNK func_009CA2B0(s32);                         /* extern */
M2C_UNK func_00D0CB50();                            /* extern */
extern char D_00814FB0[];
extern char D_008A5F70[];
extern char D_008A5F72[];
extern char D_008A5F74[];
extern char D_00A02E20[];
extern M2C_UNK func_009C9ED0;

void func_009CA400(void) {
    s16 *temp_v0_2;
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = func_0082B810();
    if ((temp_v0 == 0) || (func_008214E0() != 0)) {
        switch ((*(s16 *)D_008A5F72)) {                       /* switch 1; irregular */
        case 2:                                     /* switch 1 */
            func_009C9EF0(temp_v0);
            break;
        case 1:                                     /* switch 1 */
            func_009CA090(temp_v0);
            break;
        case 0:                                     /* switch 1 */
            switch ((*(s16 *)D_008A5F74)) {                   /* switch 2; irregular */
            case 1:                                 /* switch 2 */
                if (func_001BE4D0(0) == 0) {

                } else {
                    func_00D0CB50();
                    (*(s16 *)D_008A5F72) = 1;
                    var_a0 = 2;
loop_22:
                    if (var_a0 < 5) {
                        temp_v0_2 = ((void *)D_008A5F70) + (var_a0 * 2);
                        var_a0 += 1;
                        *temp_v0_2 = 0;
                        goto loop_22;
                    }
                    func_008157A0(((void *)D_00814FB0), &func_009C9ED0, ((void *)D_00A02E20));
                }
                break;
            case 0:                                 /* switch 2 */
                func_009CA2B0(temp_v0);
                break;
            }
            return;
        }
    }
}
