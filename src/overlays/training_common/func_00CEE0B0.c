/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00154080(s32);
extern s32 func_002631B0(void);
extern s32 Pes6HeapZone_Close(s32);

void func_00CEE0B0(void) {
    if (func_002631B0() != 9) {
        Pes6HeapZone_Close(0xA);
    }
    func_00154080(0xC);
}
