/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_001D61A0(s32, s32, s32);
extern void *func_001D6440(s32);
extern s32 func_001D7F80(s32);
extern void func_001D64B0(void);
extern void func_001D6600(void);

void *func_001D6640(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0_2;
    void *temp_v0;

    if ((arg0 != 0) && (arg1 != 0)) {
        temp_v0_2 = func_001D61A0(arg0, 2, arg2);
        if (temp_v0_2 != 0) {
            temp_v0 = func_001D6440(arg0);
            M2C_FIELD(temp_v0, s32 *, 0) = 2;
            M2C_FIELD(temp_v0, s32 *, 4) = arg2;
            M2C_FIELD(temp_v0, s32 *, 8) = temp_v0_2;
            M2C_FIELD(temp_v0, s32 *, 0xC) = func_001D7F80(arg1);
            M2C_FIELD(temp_v0, void **, 0x14) = (void *)func_001D64B0;
            M2C_FIELD(temp_v0, void **, 0x18) = (void *)func_001D6600;
            return temp_v0;
        }
    }
    return NULL;
}
