/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern void func_00BF2AB0(s32, s32, void *);

void func_00BF2DF8(s32 arg0, s32 arg1, s32 arg2) {
    func_00BF2AB0(arg0, arg1, (void *)arg2);
    func_00BF2AB0(arg0 + 0x80, arg1, (void *)arg1);
    func_00BF2AB0(arg0 + 0x100, arg1, (void *)arg1);
}
