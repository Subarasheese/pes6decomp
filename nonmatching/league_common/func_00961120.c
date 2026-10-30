/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017F900(M2C_UNK);                         /* extern */
M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
u8 func_00226710();                                 /* extern */
M2C_UNK func_00226760(u8);                          /* extern */
M2C_UNK func_008B34C0();                            /* extern */
M2C_UNK func_008B36F0(M2C_UNK);                     /* extern */
s32 func_008BD9D0(u8, M2C_UNK);                     /* extern */
s32 func_008BEDB0(u8, M2C_UNK);                     /* extern */
s32 func_008BFA40(u8, M2C_UNK);                     /* extern */
s32 func_008C36D0(s32);                             /* extern */
s32 func_0099B4B0(u8, M2C_UNK);                     /* extern */
extern u8 D_003EA900;
extern u8 D_003EA904;
extern char D_00591C09[];

s32 func_00961120(void) {
    u8 temp_s0;

    switch (D_003EA900) {                           /* switch 1; irregular */
    default:                                        /* switch 1 */
        D_003EA900 = 0;
        /* fallthrough */
    case 0:                                         /* switch 1 */
        func_008B36F0(2);
        func_001D5F80(0x10389);
        D_003EA900 = 1;
        D_003EA904 = func_00226710();
block_23:
        return 0;
    case 1:                                         /* switch 1 */
        if (func_0017F900(2) == 1) {
            D_003EA900 = 2;
        }
        goto block_23;
    case 2:                                         /* switch 1 */
        switch ((*(u8 *)D_00591C09)) {                       /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            if (func_008BD9D0((*(u8 *)D_00591C09), 2) != 0) {
                D_003EA900 = 3;
            }
            break;
        case 1:                                     /* switch 2 */
            if (func_008BEDB0((*(u8 *)D_00591C09), 2) != 0) {
                temp_s0 = D_003EA904;
                D_003EA900 = 3;
                if (temp_s0 != (func_00226710() & 0xFF)) {
                    func_00226760(temp_s0);
                }
            }
            break;
        case 4:                                     /* switch 2 */
            if (func_008C36D0(func_0099B4B0((*(u8 *)D_00591C09), 2) != 1) != 0) {
                D_003EA900 = 3;
            }
            break;
        case 14:                                    /* switch 2 */
            if (func_008BFA40((*(u8 *)D_00591C09), 2) != 0) {
                D_003EA900 = 3;
            }
            break;
        }
        goto block_23;
    case 3:                                         /* switch 1 */
        func_008B34C0();
        func_001D5C40(0x10389);
        D_003EA900 = 0;
        return 1;
    }
}
