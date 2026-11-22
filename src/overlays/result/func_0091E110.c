/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 D_00921D44[];
extern s32 func_002F2ED0(s32);
extern s32 func_002F3850(s32);
extern s8 *D_00923FC8[];
extern void func_002F4E10(void *);

s32 func_0091E110(void) {
    s32 value1;
    func_002F2ED0(((s32 *)(D_00923FC8[0]))[0x44]);
    value1 = func_002F3850(((s32 *)(D_00923FC8[0]))[0x44]);
    if (value1 == 4) {
        func_002F4E10(((void **)(D_00923FC8[0]))[0x44]);
        ((s32 *)(D_00923FC8[0]))[0x44] = 0;
        D_00921D44[0] = 1;
        return 1;
    } else {
        return 0;
    }
}
