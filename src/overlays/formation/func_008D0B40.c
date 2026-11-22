/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001EF900(void *, s8);

void func_008D0B40(s8 *arg0, s8 arg1) {
    func_001EF900(*(void * *)((s8 *)(arg0) + 0x1C0), arg1);
}
