/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008B66C0(void *, M2C_UNK);             /* extern */
M2C_UNK func_008B6E60(void *);                      /* extern */
M2C_UNK func_008B6EB0(void *, u8);                  /* extern */
M2C_UNK func_008D32D0(void *, u8);                  /* extern */
M2C_UNK func_008D3980(void *, M2C_UNK *, M2C_UNK);  /* extern */
s32 func_008D3B00(void *, u8);                      /* extern */
M2C_UNK func_008E9AB0(void *, void *);              /* extern */
M2C_UNK func_008E9B50(void *, u8);                  /* extern */
M2C_UNK func_008E9DB0(void *);                      /* extern */
M2C_UNK func_008E9DF0(void *, u8, M2C_UNK);         /* extern */
M2C_UNK func_008EA4C0(void *, M2C_UNK);             /* extern */
extern char D_008EE110[];

s32 func_008EA190(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;
    u8 temp_s0;

    switch (arg1) {                                 /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        temp_v0 = func_008D3B00(arg0 + 0x1CA8, M2C_FIELD(arg0, u8 *, 0x19));
        switch (temp_v0) {                          /* switch 2; irregular */
        case 3:                                     /* switch 2 */
            func_008E9B50(arg0 + 0x2A80, M2C_FIELD(arg0, u8 *, 0x1CA9));
block_28:
        default:                                    /* switch 1 */
            return 0;
        case 2:                                     /* switch 2 */
            temp_s0 = M2C_FIELD(arg0, u8 *, 0x1CA9);
            func_008B6EB0(arg0, temp_s0);
            temp_v1 = temp_s0 & 0xFF;
            if ((temp_v1 != 4) && (temp_v1 != 3) && (temp_v1 != 2) && (temp_v1 != 1) && (temp_v1 != 0)) {
                goto block_28;
            }
            M2C_FIELD(arg0, u8 *, 0x9D4) = temp_s0;
            return 0x27;
        case 1:                                     /* switch 2 */
            return 0x27;
        }
        break;
    case 0:                                         /* switch 1 */
        func_008E9DF0(arg0 + 0x2A80, M2C_FIELD(arg0, u8 *, 0), 0);
        func_008E9AB0(arg0 + 0x2A80, arg0 + 0x208);
        func_008EA4C0(arg0, 0);
        func_008D3980(arg0 + 0x1CA8, ((void *)D_008EE110), 0xA);
        func_008B6E60(arg0);
        func_008D32D0(arg0 + 0x1CA8, M2C_FIELD(arg0, u8 *, 0x9D4));
        func_008E9B50(arg0 + 0x2A80, M2C_FIELD(arg0, u8 *, 0x9D4));
        func_008B66C0(arg0, 0x15);
        goto block_28;
    case 2:                                         /* switch 1 */
        func_008E9DB0(arg0 + 0x2A80);
        func_008B66C0(arg0, 0);
        goto block_28;
    }
}
