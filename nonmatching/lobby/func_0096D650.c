/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0093C0C0();                                /* extern */
s32 func_0093C0D0();                                /* extern */
s32 *func_00969AF0();                               /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009E0380(M2C_UNK);                     /* extern */
M2C_UNK func_009E0430(s32, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK func_009B1920;

void func_0096D650(void) {
    s32 *temp_s0;
    s32 temp_v0;

    temp_s0 = func_00969AF0();
    temp_v0 = func_0093C0D0();
    switch (temp_v0) {                              /* irregular */
    case -1:
        func_0026E840(0x8C008005);
        func_0099D030(0);
        func_009E0430(func_0093C0C0(), 0x1E, &func_009B1920, 0);
        func_009E0380(0);
        *temp_s0 = 0x01FB003E;
        func_009717C0(0xA);
        return;
    case 1:
        func_0099D030(0);
        if (func_0093C0C0() == 0) {
            func_0026E840(0x8C008005);
            func_009E0430(func_0093C0C0(), 0x1E, &func_009B1920, 0);
            *temp_s0 = 0x020D0027;
            func_009717C0(0xA);
            return;
        }
        func_009E0430(func_0093C0C0(), 0x1E, &func_009B1920, 0);
        func_009717C0(2);
        return;
    default:
        func_0026E840(0x8C008005);
        func_0099D030(0);
        func_009E0430(func_0093C0C0(), 0x1E, &func_009B1920, 0);
        func_009E0380(0);
        *temp_s0 = 0x01FB003E;
        func_009717C0(0xA);
        /* fallthrough */
    case 0:
        return;
    }
}
