/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s8 *func_001C4730(s8 *, s8 *, u32);
extern s32 func_00226710(void);
extern s8 *Pes6SaveData_GetHeaderBlock(void);
extern s8 *func_0022F190(void);
extern s32 func_00230100(s32);

void func_00949630(void) {
    s32 temp_s1;
    s8 *temp_s0;
    s8 *temp_v0;

    temp_s1 = func_00230100(func_00226710() & 0xFF);
    temp_s0 = Pes6SaveData_GetHeaderBlock();
    temp_v0 = func_0022F190();
    if ((temp_s0 != NULL) && (temp_v0 != NULL)) {
        func_001C4730(temp_s0 + 0x1550, temp_v0 + (temp_s1 * 0xC82) + 0x4778, 0xC82U);
    }
}
