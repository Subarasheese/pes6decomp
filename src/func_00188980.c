/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0xE];
    u8 level;
} Ctx;

extern Ctx *D_00520080[];

f32 func_00188980(void) {
    return D_00520080[0]->level;
}
