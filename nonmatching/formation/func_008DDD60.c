/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008B66C0(void *, M2C_UNK);             /* extern */
M2C_UNK func_008C9A00(void *);                      /* extern */
M2C_UNK func_008C9A40(void *);                      /* extern */
s32 func_008CB0C0(void *);                          /* extern */
s32 func_008CD6A0(void *, u8);                      /* extern */
M2C_UNK func_008E6350(void *);                      /* extern */
M2C_UNK func_008E6650(void *, void *);              /* extern */
s32 func_008E7010(void *, u8);                      /* extern */
M2C_UNK func_008E72A0(void *, M2C_UNK);             /* extern */
extern M2C_UNK func_008DDEB0;
extern M2C_UNK func_008DDF10;

s32 func_008DDD60(void *arg0, s32 arg1) {
    s32 temp_v0;
    u8 temp_s1;

    switch (arg1) {                                 /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        if (func_008CD6A0(arg0 + 0xB0C, M2C_FIELD(arg0, u8 *, 0x19)) != 8) {
            temp_v0 = func_008E7010(arg0 + 0xB34, M2C_FIELD(arg0, u8 *, 0x19));
            switch (temp_v0) {                      /* switch 2; irregular */
            case 3:                                 /* switch 2 */
                temp_s1 = M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0xB36) * 4) + arg0), u8 *, 0xB48);
                M2C_FIELD((func_008CB0C0(arg0 + 0xB0C) + arg0), u8 *, 0x1517) = temp_s1;
                func_008E6350(arg0 + 0x129C);
                goto block_21;
            case 2:                                 /* switch 2 */
                return 0x27;
            case 1:                                 /* switch 2 */
                func_008E6650(arg0 + 0x129C, arg0 + 0x208);
                return 0x27;
            }
        } else {
block_21:
        default:                                    /* switch 1 */
            return 0;
        }
        break;
    case 0:                                         /* switch 1 */
        M2C_FIELD(arg0, M2C_UNK **, 0xB70) = &func_008DDF10;
        M2C_FIELD(arg0, void **, 0xB74) = arg0;
        M2C_FIELD(arg0, M2C_UNK **, 0xB80) = &func_008DDEB0;
        M2C_FIELD(arg0, void **, 0xB84) = arg0;
        func_008C9A40(arg0 + 0xB0C);
        func_008B66C0(arg0, 0x1C);
        goto block_21;
    case 2:                                         /* switch 1 */
        func_008C9A00(arg0 + 0xB0C);
        M2C_FIELD(arg0, M2C_UNK **, 0xB70) = NULL;
        M2C_FIELD(arg0, void **, 0xB74) = NULL;
        M2C_FIELD(arg0, M2C_UNK **, 0xB80) = NULL;
        M2C_FIELD(arg0, void **, 0xB84) = NULL;
        func_008E72A0(arg0 + 0xB34, 1);
        func_008B66C0(arg0, 0);
        goto block_21;
    }
}
