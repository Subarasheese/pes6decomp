/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 active;
    s32 handle;
    u8 pad[0x58];
} Slot60;

extern char D_0051FF38[];

s32 func_00182020(s32 index) {
    return M2C_FIELD(D_0051FF38, Slot60 **, 0)[index].active != 0;
}
