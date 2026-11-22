/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *func_001C48E8(void *, int, unsigned int);
extern s32 SD_call(s32);
extern s32 func_0081DF10(s8 *, s64);

s32 func_009C0750(s8 *arg0) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            if (M2C_FIELD(arg0, s32 *, 0) != 2) {
                M2C_FIELD(arg0, s8 *, 0x9E) = 1;
            }
            M2C_FIELD(arg0, s32 *, 0) = 2;
        }
        func_001C48E8((s32 *) (arg0 + 0xA4), 0, 0x20);
        func_0081DF10(M2C_FIELD(arg0, s8 **, 0xC), 0);
        SD_call(0x84028400);
    }
    return 0;
}
