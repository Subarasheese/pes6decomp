/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern void func_00BE64B8(s32);
extern void func_00BECE50(s32);
extern void func_00BF5C98(s32, s32, s32);

void func_00BECBF8(s32 arg0) {
    func_00BECE50(arg0);
    func_00BE64B8(arg0 + 0x14);
    func_00BF5C98(arg0 + 0x28, 0, 8);
}
