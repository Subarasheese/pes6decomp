/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 *func_00994760(void);

void func_00B565E0(s8 arg0) {
    int *entry;

    entry = func_00994760();
    entry = (entry == (int *)0x0) ? (int *)0x0 : entry + 0x186b1;
    if (entry != (int *)0x0) {
        *(s8 *)((int)entry + 0x21) = arg0;
    }
}
