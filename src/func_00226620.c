/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x6];
    u8 value;
} Rec;

Rec *func_0022F150(void);
s32 func_00231240(void);

u8 func_00226620(void) {
    Rec *rec = func_0022F150();

    if (func_00231240() == 1) {
        return 0;
    }
    if (rec == NULL) {
        return 0;
    }
    return rec->value;
}
