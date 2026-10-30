/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0023FC70(void);
extern void func_0023FCA0(int);
extern s32 func_00941B40(void);
extern int func_002E9310(void);
extern int func_002640B0(void);
M2C_UNK func_00263450(s32);                         /* extern */
extern s32 D_003EA9F4;
extern s32 D_003EA9FC;
extern s32 D_003EAA0C;
extern char D_0053C302[];
extern char D_0053C318[];
extern char D_00591C09[];

void func_009301F0(void) {
    s16 var_a0;
    s32 temp_v0;

    switch (D_003EA9F4) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if (func_00941B40() == 1) {
            D_003EA9F4 += 1;
            return;
        }
        return;
    case 1:                                         /* switch 1 */
        D_003EA9FC = 0;
        D_003EA9F4 = 0;
        temp_v0 = func_002E9310();
        switch (temp_v0) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            if ((*(u8 *)D_00591C09) == 5) {
                func_00263450(func_002640B0());
            }
            (*(s32 *)D_0053C318) = 0;
            func_0023FC70();
            return;
        case 5:                                     /* switch 2 */
            switch ((*(u8 *)D_00591C09)) {                   /* switch 3; irregular */
            case 5:                                 /* switch 3 */
                var_a0 = 0xD;
block_29:
                (*(s16 *)D_0053C302) = var_a0;
                break;
            case 2:                                 /* switch 3 */
                switch (D_003EAA0C) {               /* switch 4; irregular */
                case 1:                             /* switch 4 */
                    func_0023FCA0(3);
                    return;
                case 2:                             /* switch 4 */
                    var_a0 = 0xA;
                    goto block_29;
                }
                break;
            case 14:                                /* switch 3 */
            case 1:                                 /* switch 3 */
            case 4:                                 /* switch 3 */
                func_0023FCA0(3);
                return;
            }
            break;
        }
        break;
    }
}
