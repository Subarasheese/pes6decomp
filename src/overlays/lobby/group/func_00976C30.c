/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_009E9600(char *);
extern void func_009E97C0(char *);

s32 func_00976C30(char *arg0) {
    s32 (*temp_v0)(s32);
    char *temp_v1;

    if (M2C_FIELD(M2C_FIELD(arg0, char **, 0x58), s32 *, 8) != 0) {
        func_009E9600(arg0 + 0x10);
    } else {
        func_009E97C0(arg0 + 0x10);
    }
    temp_v1 = M2C_FIELD(arg0, char **, 0x54);
    temp_v0 = M2C_FIELD(temp_v1, s32 (**)(s32), 8);
    if (temp_v0 != NULL) {
        temp_v0(M2C_FIELD(temp_v1, s32 *, 0));
    }
    return 1;
}
