/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001EF900(void *, s8);

void func_00956A80(s8 *arg0, s8 arg1) {
    func_001EF900(*(void * *)((s8 *)(arg0) + 0xC), arg1);
}
