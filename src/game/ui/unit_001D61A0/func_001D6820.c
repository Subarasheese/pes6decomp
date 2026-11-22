/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void * func_001D61A0(s32, s32, s32);
extern void * func_001D6440(s32);
extern void func_001D66F0(void *, s32, s32, s32);
extern void func_001D67B0(void *);
extern s32 func_001EDFC0(void);

void *func_001D6820(s32 arg0, s32 arg1) {
    void *temp_v0;
    void *temp_v0_2;

    if (arg0 != 0) {
        temp_v0_2 = func_001D61A0(arg0, 2, arg1);
        if (temp_v0_2 != NULL) {
            temp_v0 = func_001D6440(arg0);
            M2C_FIELD(temp_v0, s32 *, 0) = 1;
            M2C_FIELD(temp_v0, s32 *, 4) = arg1;
            M2C_FIELD(temp_v0, void **, 8) = temp_v0_2;
            M2C_FIELD(temp_v0, s32 *, 0xC) = func_001EDFC0();
            M2C_FIELD(temp_v0, void (**)(void *, s32, s32, s32), 0x14) = func_001D66F0;
            M2C_FIELD(temp_v0, void (**)(void *), 0x18) = func_001D67B0;
            return temp_v0;
        }
    }
    return NULL;
}
