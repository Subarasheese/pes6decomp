/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00825530(s32);                             /* extern */
s32 func_00838C60(s32);                             /* extern */
s32 func_00838CB0(s32);                             /* extern */
s32 func_00857C00(s32);                             /* extern */
s32 func_00857CB0(s32, s32);                        /* extern */
M2C_UNK func_009D4700(s32);                         /* extern */
extern char D_00A7DE20[];
extern char D_00A7DE24[];
extern char D_00A7DE28[];

void func_009D4810(void) {
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a4;
    void *temp_a2;

    switch ((*(s32 *)D_00A7DE20)) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_009D4700((*(s32 *)D_00A7DE20));
        return;
    case 1:                                         /* switch 1 */
        temp_s1 = (*(s32 *)D_00A7DE24);
        temp_v0 = func_00825530(temp_s1);
        switch (temp_v0) {                          /* switch 2; irregular */
        case 4:                                     /* switch 2 */
            temp_v0_2 = func_00838CB0(temp_s1);
            if (temp_v0_2 != -1) {
                (*(s32 *)D_00A7DE28) = func_00857CB0(temp_v0_2, func_00838C60(temp_s1) & 0xFFFF);
                (*(s32 *)D_00A7DE20) = 2;
                return;
            }
block_21:
            (*(s32 *)D_00A7DE20) = 0;
        case 0:                                     /* switch 2 */
            return;
        }
        break;
    case 2:                                         /* switch 1 */
        temp_v0_3 = func_00857C00((*(s32 *)D_00A7DE28));
        if (temp_v0_3 != 0) {
            var_a4 = 0;
            do {
                temp_a2 = ((void *)D_00A7DE20) + (var_a4 * 0xC);
                if (*(s32 *)0xA7DE24 == M2C_FIELD(temp_a2, s32 *, 0xC)) {
                    M2C_FIELD(temp_a2, s32 *, 0x10) = temp_v0_3;
                }
                var_a4 += 1;
            } while (var_a4 < 8);
            goto block_21;
        }
        break;
    }
}
