/* compiler: ee-gcc-2.96-G0 */
#include "types.h"
typedef struct {
    u8 reserved00[0x38];
    s32 values[32];
} GuiTable;
extern GuiTable D_011B18F0[];
void func_00105730(void) {
    s32 i = 31;
    do {
        D_011B18F0->values[i] = 0;
    } while (--i >= 0);
}
