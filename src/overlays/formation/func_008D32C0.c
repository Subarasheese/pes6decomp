/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_008B9A90(void *, u8);

void func_008D32C0(s8 *arg0, u8 arg1) {
    func_008B9A90(*(void **)((s8 *)(arg0) + 0xB4), arg1);
}
