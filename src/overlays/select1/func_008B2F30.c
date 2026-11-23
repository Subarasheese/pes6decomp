/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001DF820(void *display, s32 text);

void func_008B2F30(s32 label, const char *text) {
    if (label)
        func_001DF820(M2C_FIELD((void *)label, void **, 0xC), (s32)text);
}
