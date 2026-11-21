/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_001D7D60(s32, s32);
s32 func_001EDAE0(s32, s32);

void func_006296D0(void *arg0, s32 arg1) {

    s32 *entry;

    unsigned int value;
    ;
    entry = &(*((s32 *)(((s8 *)arg0) + 0x160)));
    ;
    func_001EDAE0(*entry, arg1 & 0xFF);
    value = 0xFF;
    func_001D7D60(*((s32 *)(((s8 *)(*((void **)(((s8 *)arg0) + 4)))) + 0xC)), value & arg1);
}
