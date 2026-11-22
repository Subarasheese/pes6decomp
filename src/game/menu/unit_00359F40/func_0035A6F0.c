/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_001C48E8(s32 *, s32, s32);

extern s32 func_0035A410(void);
extern s32 *D_003E9FBC;
extern u8 D_00591BD1[];
extern char D_0061C740[];

void func_0035A6F0(u32 arg0) {
    u32 var_s0;

    if ((D_003E9FBC == NULL) && (D_003E9FBC == NULL)) {
        var_s0 = arg0;
        if (arg0 == 0) {
            var_s0 = (u32)D_00591BD1[0];
        }
        D_003E9FBC = ((void *)D_0061C740);
        func_001C48E8(((void *)D_0061C740), 0, 0x24);
        M2C_FIELD(D_003E9FBC, u32 *, 4) = var_s0;
        func_0035A410();
    }
}
