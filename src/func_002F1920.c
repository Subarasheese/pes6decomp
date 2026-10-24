/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001EF900(s32, s32);
void func_001F3D10(s32, s32);

void func_002F1920(u8 *obj, s32 arg1) {
    switch (obj[0]) {
    case 1:
        func_001F3D10(M2C_FIELD(obj, s32 *, 0x20), arg1);
        break;
    case 2:
        func_001EF900(M2C_FIELD(obj, s32 *, 0x20), arg1);
        break;
    }
}
