/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void func_001DF820(void *, s32);
s32 func_008B29B0(s32);
typedef struct { u8 pad[0x80]; u8 *p; } S;
void func_008EB290(S *arg0, s32 arg1) {
    if (arg0->p != NULL) {
        func_001DF820(M2C_FIELD(arg0->p, void **, 0xC), func_008B29B0(arg1 & 0xFF));
    }
}
