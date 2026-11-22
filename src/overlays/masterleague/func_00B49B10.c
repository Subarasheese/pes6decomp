/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_00B49760(void);
extern void func_001D4E00(void *);
extern s32 func_00958000(s32);

void func_00B49B10(void) {
    u32 *entry;

    entry = (u32 *)func_00B49760();
    if (entry == (u32 *)0x0) {
        return;
    }
    if ((void *)*entry != 0) {
        func_001D4E00((void *)*entry);
        *entry = 0;
    }
    func_00958000(0x80);
}
