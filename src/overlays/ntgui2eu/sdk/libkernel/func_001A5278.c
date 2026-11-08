/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_001A4728(void);
void func_001A4778(void);
void func_001A5018(s32);
void func_001A5388(s32);
s32 func_001A5880(void);

s32 func_001A5278(void) {
    s32 s;
    u32 v;

    s = func_001A4728();
    v = *(volatile u32 *)0x10001010;
    if (v & 0x80) {
        if (s != 0) {
            func_001A4778();
        }
        return 1;
    }
    func_001A5018((v & 0xFFFFF3FF) | 0x80);
    func_001A5388(func_001A5880());
    if (s != 0) {
        func_001A4778();
    }
    return 0;
}
