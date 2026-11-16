/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern int func_0030F240(void *);
extern int func_003387D0(void *, void *, void *);
extern int func_0030F380(void);
extern s32 func_00338A60(void *, void *);
extern s32 func_003389F0(void *, s32, s32);
void *func_00338AD0(s32, void *, s32, void *); /* extern */
s32 func_009924B0();                                /* extern */
extern char D_003E1510[];
extern void func_0031A420(void);
extern void func_0031A470(void);

s32 func_0031A660(void *arg0) {
    u8 sp4F;
    s32 temp_s0;
    void *temp_v0;

    if (func_0030F240(&sp4F) == 0) {

    } else if (func_0030F380() != 0) {

    } else {
        temp_s0 = func_009924B0() & 0xFF;
        if (temp_s0 != 0) {
            temp_v0 = func_00338AD0(0x80000062, (void *)func_0031A470, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E1510));
            func_00338A60(temp_v0, arg0);
            func_003389F0(temp_v0, 0, temp_s0);
            func_003389F0(temp_v0, 1, (s32) sp4F);
            func_003387D0(arg0, (void *)func_0031A420, ((void *)D_003E1510));
        }
    }
    return 0;
}
