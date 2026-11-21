/* compiler: ee-gcc-2.9 */
#include "types.h"

extern s32 func_00199120(void *);
extern void func_00198E70(s32, s32, s32);
extern void func_00198EB8(s32, s32);
extern void func_00199078(void *, void *, s32);
extern void func_00198F40(void *, void *);

void func_00199430(int arg0, int arg1, int arg2, int arg3) {
    u8 buffer[16];
    u8 buffer2[16];
    u8 buffer3[32];
    u8 buffer4[16];

    func_00199120(buffer);
    func_00198E70((int)buffer4, arg3, arg2);
    func_00198EB8((int)buffer, (int)buffer4);
    func_00198EB8((int)buffer3, arg2);
    func_00198E70((int)buffer2, (int)buffer3, (int)buffer);
    func_00199078(buffer, buffer, arg1);
    func_00198F40((void *)arg0, buffer);
}
