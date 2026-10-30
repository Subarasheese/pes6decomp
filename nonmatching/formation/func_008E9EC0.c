/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_008E2A30(void *);
extern s32 func_001F08B0(s32);
M2C_UNK func_008C9DB0(void *, M2C_UNK);             /* extern */
M2C_UNK func_008CB5D0(void *, M2C_UNK);             /* extern */
s32 func_008E2870(void *, u8, M2C_UNK);             /* extern */
M2C_UNK func_008E2A20(void *, M2C_UNK);             /* extern */
M2C_UNK func_008E2A40(void *);                      /* extern */
M2C_UNK func_008E2A50(void *, M2C_UNK, M2C_UNK, u8, s32 *); /* extern */
s32 func_008E9A20(void *, void *);                  /* extern */
M2C_UNK func_008E9A70(void *, void *);              /* extern */
M2C_UNK func_008E9AB0(void *, void *);              /* extern */
s32 func_008E9BC0(void *, u8, M2C_UNK);             /* extern */
M2C_UNK func_008E9DB0(void *);                      /* extern */
M2C_UNK func_008E9DF0(void *, u8, M2C_UNK);         /* extern */

s32 func_008E9EC0(void *arg0, s32 arg1) {
    s32 sp28;
    s32 sp2C;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u8 temp_v0;

    switch (arg1) {                                 /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x16);
        switch (temp_v0) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            temp_v0_2 = func_008E2870(arg0 + 0x2484, M2C_FIELD(arg0, u8 *, 0x19), 1);
            switch (temp_v0_2) {                    /* switch 4; irregular */
            case 1:                                 /* switch 4 */
                func_008E2A40(arg0 + 0x2484);
                M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) - 1);
block_42:
            default:                                /* switch 1 */
                return 0;
            case 2:                                 /* switch 4 */
                if (func_008E2A30(arg0 + 0x2484) & 0xFF) {
                    func_008E2A40(arg0 + 0x2484);
                    M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) - 1);
                    goto block_42;
                }
                func_008E2A40(arg0 + 0x2484);
                return 0x27;
            }
            break;
        case 0:                                     /* switch 2 */
            temp_v0_3 = func_008E9BC0(arg0 + 0x2A80, M2C_FIELD(arg0, u8 *, 0x19), 1);
            switch (temp_v0_3) {                    /* switch 3; irregular */
            case 2:                                 /* switch 3 */
                func_008E9A70(arg0 + 0x2A80, arg0 + 0x208);
                return 0x27;
            case 1:                                 /* switch 3 */
                if (func_008E9A20(arg0 + 0x2A80, arg0 + 0x208) == 0) {
                    return 0x27;
                }
                sp28 = 0;
                sp2C = func_001F08B0(0x010C0012);
                func_008E2A50(arg0 + 0x2484, 4, 2, M2C_FIELD(arg0, u8 *, 0), &sp28);
                func_008E2A20(arg0 + 0x2484, 1);
                M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) + 1);
                goto block_42;
            }
            break;
        }
        break;
    case 0:                                         /* switch 1 */
        func_008E9DF0(arg0 + 0x2A80, M2C_FIELD(arg0, u8 *, 0), 1);
        func_008E9AB0(arg0 + 0x2A80, arg0 + 0x208);
        func_008C9DB0(arg0 + 0xB0C, 5);
        goto block_42;
    case 2:                                         /* switch 1 */
        func_008E9DB0(arg0 + 0x2A80);
        func_008CB5D0(arg0 + 0xB0C, 1);
        goto block_42;
    }
}
