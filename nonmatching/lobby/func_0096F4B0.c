/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern s32 func_00969AF0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0093C140();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_009C1440(M2C_UNK);                     /* extern */
M2C_UNK func_009C14D0(s32, s32);                    /* extern */
M2C_UNK func_009C2B50(M2C_UNK);                     /* extern */
s32 func_009C2C90();                                /* extern */
M2C_UNK func_009C3110();                            /* extern */
M2C_UNK func_009E0380(M2C_UNK);                     /* extern */
M2C_UNK func_009E0430(s32, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK func_009B19F0;

void func_0096F4B0(void) {
    s32 temp_s0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s1;

    temp_s0 = func_00969AF0();
    if (func_009C2C90() != 0) {
        temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x14);
        switch (temp_v1) {                          /* switch 1; irregular */
        case 2:                                     /* switch 1 */
            var_s1 = 0x01F70044;
            break;
        case 1:                                     /* switch 1 */
            /* fallthrough */
        default:                                    /* switch 1 */
            var_s1 = 0x01F70088;
            break;
        }
        temp_v1_2 = M2C_FIELD(temp_s0, s32 *, 0x18);
        switch (temp_v1_2) {                        /* switch 2; irregular */
        case 4:                                     /* switch 2 */
            func_0026E840(0x8C008005);
            func_009E0430(0, 0x32, NULL, 0);
            func_009C14D0(temp_s0 + 0x2C, func_001F08B0(var_s1));
            if (M2C_FIELD(temp_s0, s32 *, 0) == 0x01FB003E) {
                func_009E0380(0);
                func_009C1440(0);
            }
            func_009C2B50(0);
            M2C_FIELD(temp_s0, s32 *, 0x18) = 0;
            func_009717C0(4);
            return;
        case 0:                                     /* switch 2 */
            func_009C14D0(temp_s0 + 0x2C, func_001F08B0(var_s1));
            if ((func_0093C140() > 0) && (func_0093C140() < 0x33)) {
                func_009E0430(func_0093C140(), 0x32, &func_009B19F0, 0);
                func_009C3110();
                func_009717C0(5);
                return;
            }
            if (func_0093C140() > 0) {
                M2C_FIELD(temp_s0, s32 *, 0) = 0x01FB0008;
                func_009E0430(0, 0x32, NULL, 0);
                func_0026E840(0x8C008005);
                func_009C2B50(0);
                func_009717C0(4);
                return;
            }
            func_009E0430(func_0093C140(), 0x32, &func_009B19F0, 0);
            func_0026E840(0x8C008005);
            func_009C2B50(0);
            M2C_FIELD(temp_s0, s32 *, 0) = 0x020D0026;
            func_009717C0(4);
            return;
        default:                                    /* switch 2 */
            func_0026E840(0x8C008005);
            func_009E0430(0, 0x32, NULL, 0);
            func_009C14D0(temp_s0 + 0x2C, func_001F08B0(var_s1));
            func_009E0380(0);
            func_009C1440(0);
            func_009C2B50(0);
            M2C_FIELD(temp_s0, s32 *, 0x18) = 0;
            M2C_FIELD(temp_s0, s32 *, 0) = 0x01FB003E;
            func_009717C0(4);
            break;
        }
    }
}
