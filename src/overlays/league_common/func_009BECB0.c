/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_009BE2E0(s16, char *, char *, s32);
extern void func_009BE770(void);
extern void func_009BE920(void);
extern char *D_003EA9CC;

void func_009BECB0(s16 arg0, s16 arg1) {
    char *temp_s0;

    temp_s0 = D_003EA9CC;
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, s16 *, 0x7A) = arg0;
        M2C_FIELD(temp_s0, s16 *, 0x78) = arg1;
        if (D_003EA9CC != NULL) {
            if (M2C_FIELD(D_003EA9CC, s32 *, 0x7C) == 1) {
                func_009BE920();
            } else {
                func_009BE770();
            }
        }
        func_009BE2E0(arg0, temp_s0 + 0x58, temp_s0 + 0x68, 2);
    }
}
