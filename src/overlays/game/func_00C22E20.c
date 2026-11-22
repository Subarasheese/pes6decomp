/* compiler: mwcc-3.0.1b151 */
#include "types.h"

void func_001C48E8(void *, s32, s32);
extern char D_00CB52A0[];

void func_00C22E20(void) {
    s32 value;
    s32 value2;
    char *entry;
    char *entry2;
    value = 0;
    entry = D_00CB52A0;
    do {
        entry2 = entry + 0x6BC;
        if ((*((s32 *)entry2)) != 0) {
            value2 = *((s32 *)(entry2 + 8));
            if (value2) {
                *((s32 *)(entry2 + 8)) = value2 - 1;
            }
            *((s32 *)(entry2 + 4)) = (*((s32 *)(entry2 + 4))) + 1;
            if ((*((s32 *)(entry2 + 8))) == 0) {
                func_001C48E8(entry2, 0, 0x40);
            }
        }
        value += 1;
        entry += 0x40;
    } while (value < 0x16);
}
