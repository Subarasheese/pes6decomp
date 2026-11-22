/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern void func_0015AC08(void);
extern char D_011E6B00[];
extern char D_011E6B3C[];

void func_0015ADC8(void) {
    if ((*(s32 *)D_011E6B00) == 0) {
        return;
    }
    if ((*(s32 *)D_011E6B3C) == 0) {
        func_0015AC08();
    }
}
