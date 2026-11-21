/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_00B10D20(void);
extern s32 func_00957070(s32);
extern void func_001D4E00(void *);

void func_00AEB6A0(void) {
    u32 *entry;
    void *arg0;

    entry = (u32 *)func_00B10D20();
    if (entry != (u32 *)0x0) {
        if (entry[0x31] != 0) {
            func_00957070(entry[0x31]);
            entry[0x31] = 0;
            arg0 = (void *)*entry;
        } else {
            arg0 = (void *)*entry;
        }
        func_001D4E00(arg0);
    }
}
