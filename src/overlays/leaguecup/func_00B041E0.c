/* compiler: mwcc-3.0.1b210 */
#include "types.h"

unsigned int func_00B03A80(void);
extern s32 func_001EDD90(s32);

void func_00B041E0(void) {
    u32 *entry;

    entry = (u32 *)func_00B03A80();
    if (entry != (u32 *)0x0) {
        func_001EDD90(*entry);
    }
}
