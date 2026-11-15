/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017A700(s32, s32);
s32 Pes6Demo_RunKind2(M2C_UNK, u8);                     /* extern */
s32 Pes6Demo_RunKind1(M2C_UNK, u8);                     /* extern */
s32 Pes6Demo_RunMatch(M2C_UNK, u8);                     /* extern */
extern s8 Pes6Demo_Kind;
extern u8 Pes6Demo_MatchCount;
extern u8 Pes6Demo_Cycle;
extern s8 Pes6Demo_RunStep;
extern s16 D_003E9FF0;

void Pes6Scene_Demo(void) {
    s32 temp_v1;
    s32 var_v1;

    if (Pes6Demo_Cycle == 3) {
        var_v1 = 2;
        Pes6Demo_Kind = 2;
    } else {
        var_v1 = 2;
        switch (Pes6Demo_Cycle) {                       /* switch 1; irregular */
        case 2:                                     /* switch 1 */
            var_v1 = 1;
            Pes6Demo_Kind = 1;
            break;
        case 1:                                     /* switch 1 */
            Pes6Demo_Kind = 2;
            break;
        case 0:                                     /* switch 1 */
            Pes6Demo_Kind = 0;
            var_v1 = 0;
            break;
        default:                                    /* switch 1 */
            Pes6Demo_Cycle = 0;
            var_v1 = 3;
            Pes6Demo_Kind = 3;
            break;
        }
    }
    temp_v1 = var_v1 & 0xFF;
    switch (temp_v1) {                              /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        if (!(Pes6Demo_RunMatch(3, Pes6Demo_Cycle) & 0xFF)) {
            return;
        }
    default:                                        /* switch 2 */
block_27:
        Pes6Demo_RunStep = 0;
        D_003E9FF0 = 0;
        Pes6Demo_Cycle += 1;
        Pes6Demo_Cycle &= 3;
        func_0017A700(0, 3);
        return;
    case 1:                                         /* switch 2 */
        if (!(Pes6Demo_RunKind1(3, Pes6Demo_Cycle) & 0xFF)) {
            return;
        }
        goto block_27;
    case 2:                                         /* switch 2 */
        if (Pes6Demo_RunKind2(3, Pes6Demo_Cycle) & 0xFF) {
            Pes6Demo_MatchCount += 1;
            goto block_27;
        }
        break;
    }
}
