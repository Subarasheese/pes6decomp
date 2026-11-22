/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern void func_001C4730(void *, void *, s32);
extern char D_00CBFAA0[];

u8 *func_00C12E50(u8 *arg0) {
    char *entry;
    int value;
    char *entry2;
    u8 *entry3;
    char *entry4;
    entry2 = D_00CBFAA0;
    value = 0 != arg0;
    if (value) {
        entry = entry2;
        entry4 = entry + 0xB220;
        func_001C4730(arg0, entry4, 4);
        arg0 += 4;
    }
    entry3 = arg0;
    return entry3;
}
