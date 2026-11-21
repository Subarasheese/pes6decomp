/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_00223A70(void);

void func_002F7E00(int arg0, int arg1, s8 arg2) {
    void *pvVar1;
    s8 *entry;

    if (arg0 < 9) {
        pvVar1 = func_00223A70();
        pvVar1 = (void *)((int)pvVar1 + arg0 * 0x5c);
    } else {
        pvVar1 = 0;
    }
    if (pvVar1 == 0) {
        entry = (s8 *)0x0;
    } else if (arg1 < 9) {
        entry = (s8 *)((int)pvVar1 + arg1 + 0x48);
    } else {
        entry = (s8 *)0x0;
    }
    if (entry != (s8 *)0x0) {
        *entry = arg2;
    }
}
