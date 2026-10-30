/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_008C9DA0(void *);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_008B2950(M2C_UNK);                         /* extern */
M2C_UNK func_008B3B20(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_008BF050(void *);                      /* extern */
M2C_UNK func_008C9B10(void *);                      /* extern */
M2C_UNK func_008C9B50(void *, s32);                 /* extern */
M2C_UNK func_008C9DB0(void *, M2C_UNK);             /* extern */
M2C_UNK func_008CACD0(void *);                      /* extern */
s8 func_008CB0C0(void *);                           /* extern */
M2C_UNK func_008CB0E0(void *);                      /* extern */
s32 func_008CB960(void *, u8, M2C_UNK);             /* extern */
M2C_UNK func_008E5110(void *, M2C_UNK);             /* extern */
M2C_UNK func_008E5200(void *, M2C_UNK);             /* extern */

s32 func_008C2000(void *arg0, s32 arg1) {
    s32 temp_v0;

    switch (arg1) {                                 /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        temp_v0 = func_008CB960(arg0 + 0xB0C, M2C_FIELD(arg0, u8 *, 0x19), 0);
        switch (temp_v0) {                          /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            func_0026E840(0x84028400);
            return 0x11;
        case 1:                                     /* switch 2 */
            func_008BF050(arg0 + 0x208);
            func_008CACD0(arg0 + 0xB0C);
            return 0x27;
        case 3:                                     /* switch 2 */
block_27:
        default:                                    /* switch 1 */
            return 0;
        }
        break;
    case 0:                                         /* switch 1 */
        func_008E5110(arg0 + 0x129C, 0);
        if ((M2C_FIELD(arg0, u8 *, 0x946) != 0) && (M2C_FIELD(arg0, u8 *, 0x1D) != 0xFF)) {
            func_008E5200(arg0 + 0x129C, 8);
        } else {
            func_008E5200(arg0 + 0x129C, 0);
        }
        if (((func_008C9DA0(arg0 + 0xB0C) & 0xFF) != 3) && ((func_008C9DA0(arg0 + 0xB0C) & 0xFF) != 4)) {
            func_008CB0E0(arg0 + 0xB0C);
            func_008B3B20(arg0, 0, 0);
        }
        func_008C9DB0(arg0 + 0xB0C, 3);
        func_008C9B50(arg0 + 0xB0C, func_008B2950(0));
        goto block_27;
    case 2:                                         /* switch 1 */
        M2C_FIELD(arg0, s8 *, 0x2A) = func_008CB0C0(arg0 + 0xB0C);
        func_008C9B10(arg0 + 0xB0C);
        goto block_27;
    }
}
