/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x14];
    s16 value;
    u8 pad16[0x2DE];
} Rec2F4;

extern char D_00CB3300[];

s16 func_00310CF0(u8 id) {
    return M2C_FIELD(D_00CB3300, Rec2F4 **, 0)[id].value;
}
