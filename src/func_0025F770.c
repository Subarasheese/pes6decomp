/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0058D280[];
void func_001C48E8(void *, s32, s32);
void func_0025E130(s32, void (*)(void));
void func_0025F470(void);

void func_0025F770(void) {
    func_001C48E8(D_0058D280, 0, 0x24);
    func_0025E130(0, func_0025F470);
}
