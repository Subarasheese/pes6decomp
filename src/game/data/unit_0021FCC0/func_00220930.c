/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001C4730(void *, void *, s32);
void func_001F85A0(void *, void *);
s32 func_001C7E10(void *, void *);

s32 func_00220930(void *a, void *b) {
    u8 bufa[0x40];
    u8 bufb[0x40];
    u8 t1[0x30];
    u8 t2[0x30];

    func_001C4730(bufa, a, 0x20);
    func_001C4730(bufb, b, 0x20);
    func_001F85A0(bufa, t1);
    func_001F85A0(bufb, t2);
    return (func_001C7E10(t1, t2) != 0) ^ 1;
}
