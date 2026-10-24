/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 flag : 1;
    u8 rest : 7;
} Bits0;

extern f32 D_0052295C[];
extern Bits0 D_00522960[];
extern s32 D_003E98F8;

void func_001B6410(f32 value) {
    D_0052295C[0] = value;
    D_00522960[0].flag = 1;
    if (value == 0.0f) {
        D_003E98F8 = 0;
    } else {
        D_003E98F8 = 1;
    }
}
