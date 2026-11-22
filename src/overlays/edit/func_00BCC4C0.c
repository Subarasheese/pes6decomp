/* compiler: mwcc-3.0.1b151 */
#include "types.h"

s32 func_001C4730(s32, void *, s32);
extern char D_00CBACA0[];

void func_00BCC4C0(s32 arg0, s32 arg1) {
    if (!(arg0 < 0xB)) {
        return;
    }
    if (arg1 == 0) {
        return;
    }
    func_001C4730(arg1, ((char *)D_00CBACA0) + (arg0 * 0x10), 0x10);
}
