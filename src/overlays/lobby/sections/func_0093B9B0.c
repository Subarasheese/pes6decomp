/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0093B9E0(void);
extern void *func_0094BBA0(void);

int func_0093B9B0(void) {
    int value;
    void *pvVar2;

    value = func_0093B9E0();
    if (value == 1) {
        pvVar2 = func_0094BBA0();
    } else {
        pvVar2 = 0;
    }
    return (int)pvVar2;
}
