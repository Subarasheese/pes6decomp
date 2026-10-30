/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_008E0150(void *);
extern void func_001D7D80(void *, s16);
s32 func_008B6EC0();                                /* extern */
s32 func_008BC400(void *, s32);                     /* extern */
M2C_UNK func_008C9DB0(s32, M2C_UNK);                /* extern */
M2C_UNK func_008D2FE0(void *, M2C_UNK);             /* extern */
M2C_UNK func_008E0130(void *, u8);                  /* extern */
s32 func_008E0160(void *, u8);                      /* extern */
M2C_UNK func_008E02D0(void *);                      /* extern */
M2C_UNK func_008E0310(void *, u8, s64);             /* extern */
M2C_UNK func_008E5110(s32, M2C_UNK);                /* extern */
extern char D_008EE190[];
extern char D_008EE192[];
extern void *D_008EE19C;

s32 func_008B4940(void *arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_v0;
    s32 var_s0;
    u8 temp_v0_2;

    var_s0 = 0;
    switch (arg1) {                                 /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        break;
    case 0:                                         /* switch 1 */
        func_008C9DB0(arg0 + 0xB0C, 0);
        func_008E5110(arg0 + 0x129C, 1);
        func_008E0310(arg0 + 0x2930, M2C_FIELD(arg0, u8 *, 0), (s64) (((*(u16 *)D_008EE190) & 0xF) << 0x38) >> 0x38);
        func_008D2FE0(arg0 + 0x1CA8, 0);
        func_008E0130(arg0 + 0x2930, M2C_FIELD((M2C_FIELD(arg0, u8 *, 0xB) + arg0), u8 *, 0xC));
        if (D_008EE19C != NULL) {
            func_001D7D80(D_008EE19C, (s16) ((s64) (((*(s8 *)D_008EE192) - 1) << 0x30) >> 0x30));
        }
        break;
    case 1:                                         /* switch 1 */
        if (func_008B6EC0() == 0) {
            temp_v0 = func_008E0160(arg0 + 0x2930, M2C_FIELD(arg0, u8 *, 0x19));
            switch (temp_v0) {                      /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                temp_v0_2 = func_008E0150(arg0 + 0x2930);
                temp_a1 = temp_v0_2 & 0xFF;
                M2C_FIELD((M2C_FIELD(arg0, u8 *, 0xB) + arg0), u8 *, 0xC) = temp_v0_2;
                switch (temp_a1) {                  /* switch 3; irregular */
                case 2:                             /* switch 3 */
                    var_s0 = 0x1B;
                    break;
                case 1:                             /* switch 3 */
                    var_s0 = 0x1A;
                    break;
                case 0:                             /* switch 3 */
                    if ((M2C_FIELD(arg0, u8 *, 0x21) != 0) && (func_008BC400(arg0 + 0x208, temp_a1) == 0)) {
                        var_s0 = 0x23;
                    } else {
                        var_s0 = 0x1F;
                        M2C_FIELD((M2C_FIELD(arg0, u8 *, 0xB) + arg0), s8 *, 0xC) = 0;
                    }
                    break;
                case 3:                             /* switch 3 */
                    var_s0 = 0x20;
                    M2C_FIELD((M2C_FIELD(arg0, u8 *, 0xB) + arg0), s8 *, 0xC) = 0;
                    break;
                }
                break;
            case 1:                                 /* switch 2 */
                if (func_008E0150(arg0 + 0x2930) & 0xFF) {
                    func_008E0130(arg0 + 0x2930, 0U);
                }
                break;
            }
        }
        break;
    }
    if (var_s0 != 0) {
        func_008E02D0(arg0 + 0x2930);
        func_008D2FE0(arg0 + 0x1CA8, 1);
        if (D_008EE19C != NULL) {
            func_001D7D80(D_008EE19C, 3);
        }
    }
    return var_s0;
}
