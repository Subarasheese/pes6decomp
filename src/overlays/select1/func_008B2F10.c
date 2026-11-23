/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001B6FA0(void *text, s32 message);

void func_008B2F10(s32 label, s32 message) {
    if (label)
        func_001B6FA0(M2C_FIELD((void *)label, void **, 0xC), message);
}
