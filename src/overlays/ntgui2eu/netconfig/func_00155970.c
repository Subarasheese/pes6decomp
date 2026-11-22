/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_001559F0(s32);
extern s32 func_001586F0(void);
extern void func_00158A50(void);
extern s32 func_00158B68(void);
extern void func_001592F0(s32);

extern s32 D_011E20E4[];
extern s32 D_011E20E8[];

s32 func_00155970(void *arg0) {
    if ((func_001586F0() == 0) && (func_00158B68() == 0)) {
        if (D_011E20E4[0] > 0) {
            D_011E20E4[0] -= 1;
            return 0;
        }
        func_00158A50();
        func_001592F0(D_011E20E8[0]);
        M2C_FIELD(arg0, void (**)(s32), 0x18) = func_001559F0;
        return 0;
    }
    return 0;
}
