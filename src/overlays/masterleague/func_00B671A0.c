/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_00B66CA0(void);
extern void func_001D4E00(void *);

void func_00B671A0(void) {
    u32 *entry;

    entry = (u32 *)func_00B66CA0();
    if ((entry != (u32 *)0x0) && ((void *)*entry != 0)) {
        func_001D4E00((void *)*entry);
        *entry = 0;
        return;
    }
}
