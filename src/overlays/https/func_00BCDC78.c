/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void func_00BCD5F8(s32, s32);
extern s32 func_00BCF270(void *);

void func_00BCDC78(s32 arg0) {
    if (!(func_00BCF270((void *)arg0) & 0x3000) || (func_00BCF270((void *)arg0) & 0x4000)) {
        func_00BCD5F8(arg0, 0);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK(**)(s32), 0x14)(arg0);
}
