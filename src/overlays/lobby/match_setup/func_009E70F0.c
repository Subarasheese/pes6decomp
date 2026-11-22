/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_009E8910(char *);
extern void func_009E9B40(char *);

s32 func_009E70F0(char *arg0) {
    s32 (*temp_v0)(s32);
    char *temp_v1;

    func_009E9B40(arg0 + 0x10);
    temp_v1 = M2C_FIELD(arg0, char **, 0x54);
    temp_v0 = M2C_FIELD(temp_v1, s32 (**)(s32), 8);
    if (temp_v0 != NULL) {
        temp_v0(M2C_FIELD(temp_v1, s32 *, 0));
    }
    func_009E8910(arg0);
    return 1;
}
