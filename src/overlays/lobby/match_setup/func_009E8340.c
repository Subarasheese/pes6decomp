/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_009E88F0(char *);
extern s32 func_009E8930(char *);
extern void func_009E9980(char *);
extern void func_009E9D00(char *);

s32 func_009E8340(char *arg0) {
    s32 (*temp_v0)(s32);
    s32 (*temp_v0_2)(s32);
    char *temp_a0;
    char *temp_v1;
    char *temp_v1_2;

    temp_a0 = arg0 + 0x10;
    if (M2C_FIELD(arg0, s32 *, 0x50) == 0) {
        func_009E9D00(temp_a0);
        temp_v1 = M2C_FIELD(arg0, char **, 0x54);
        temp_v0 = M2C_FIELD(temp_v1, s32 (**)(s32), 8);
        if (temp_v0 != NULL) {
            temp_v0(M2C_FIELD(temp_v1, s32 *, 0));
        }
        func_009E8930(arg0);
    } else {
        func_009E9980(temp_a0);
        temp_v1_2 = M2C_FIELD(arg0, char **, 0x54);
        temp_v0_2 = M2C_FIELD(temp_v1_2, s32 (**)(s32), 8);
        if (temp_v0_2 != NULL) {
            temp_v0_2(M2C_FIELD(temp_v1_2, s32 *, 0));
        }
        func_009E88F0(arg0);
    }
    return 1;
}
