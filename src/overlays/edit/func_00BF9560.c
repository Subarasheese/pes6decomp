/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00B8FFF0(s32, void **, s32);
extern void func_001D7D80(void *, s16);
extern s32 func_00B90360(s32 *, s32, s32, s32, s32);
extern void func_001D7F10(void *);

void func_00BF9560(int *arg0, int arg1, s64 arg2) {
    void *entry;

    entry = 0;
    if (!(((arg0 != (int *)0x0) && (*arg0 == 0)) && (arg1 != 0))) {
        return;
    }
    func_00B8FFF0(arg1, &entry, 8);
    func_001D7D80(entry, (short)arg2);
    func_00B90360(arg0, (int)entry, 8, 7, 8);
    func_001D7F10(entry);
}
