/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_00153FD0(s32, s32, s32);
extern void *func_001C48E8(void *, int, unsigned int);
extern char D_00CCD960[];
extern char D_00CCD964[];
extern char D_00CCD968[];
extern char D_00CCD96C[];

void func_00C94A40(s32 arg0, s32 arg1, s32 arg2) {
    func_001C48E8(((void *)D_00CCD960), 0, 0x14);
    (*(s32 *)D_00CCD964) = arg0;
    (*(s32 *)D_00CCD960) = arg1;
    (*(s32 *)D_00CCD96C) = arg2;
    (*(s32 *)D_00CCD968) = func_00153FD0(0xC, 1, 0x3E800);
}
