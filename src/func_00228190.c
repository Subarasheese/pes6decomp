/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0xC];
    u8 lo : 6;
    u8 flag : 1;
    u8 hi : 1;
} Rec;

Rec *func_0022F150(void);
s32 func_00231240(void);

u8 func_00228190(void) {
    Rec *rec = func_0022F150();

    if (func_00231240() == 1) {
        return 0;
    }
    if (rec == NULL) {
        return 0;
    }
    return rec->flag;
}
