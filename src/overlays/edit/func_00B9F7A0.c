/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 *func_00B9C490(void);
extern void func_00B9C040(void);

void func_00B9F7A0(void) {
    int value;
    int *entry;

    entry = func_00B9C490();
    func_00B9C040();
    *(u16 *)((int)entry + 0x3a) = 0;
    entry[0x13] = 0;
    if (entry[5] == 0) {
        value = entry[7];
        if (value == 0) {
            entry[0x10] = 0;
        } else if (value == 2) {
            entry[0x10] = 1;
            entry[0x13] = 1;
        } else if (value == 1) {
            entry[0x10] = 0;
            entry[0x13] = 1;
        } else if (value == 3) {
            entry[0x10] = 2;
            entry[0x13] = 1;
        }
    } else {
        entry[0x10] = 0;
    }
}
