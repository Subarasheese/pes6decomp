/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x8];
    u8 value;
} Rec;

Rec *func_00229280(s32);
s32 func_00231240(void);

u8 func_00238190(s32 id) {
    Rec *rec = func_00229280((u8)id);

    if (func_00231240() == 1) {
        return 0;
    }
    if (rec == NULL) {
        return 0;
    }
    return rec->value;
}
