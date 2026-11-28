/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_00B8FDA0(s32 group, s32 first, s32 second, s8 *out);
extern void func_00BF98D0(void *entry);

void func_00BF9710(void) {
    s8 entry[16];
    func_00B8FDA0(0x1e, 2, 2, entry);
    func_00BF98D0(entry);
}
