/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[3];
    u8 value;
} Rec;

s32 func_00231240(void);
Rec *func_0022C140(s32);

u8 func_00239C20(s32 id) {
    Rec *rec;

    if (func_00231240() == 1) {
        return 0xFF;
    }
    rec = func_0022C140(id);
    if (rec == NULL) {
        return 0xFF;
    }
    return rec->value;
}
