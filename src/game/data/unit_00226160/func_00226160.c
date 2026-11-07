/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x580];
    u8 lo : 7;
    u8 flag : 1;
} Rec;

Rec *func_0022F150(void);

s32 func_00226160(void) {
    Rec *rec = func_0022F150();

    if (rec == NULL) {
        return 0;
    }
    return rec->flag != 0;
}
