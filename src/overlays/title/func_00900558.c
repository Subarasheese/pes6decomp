/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
extern void func_00107F90(char *, s32, s32, s32);
extern void func_00900500(s32, char *);
void func_00900558(s32 a, s32 b, s32 c) {
    char buf[256];
    func_00107F90(buf, 0x100, b, c);
    func_00900500(a, buf);
}
