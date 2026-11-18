/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x6];
    u8 lo : 7;
    u8 flag : 1;
} Rec;

Rec *func_00223E00(void);

s32 func_0096F680(void) {
    Rec *rec = func_00223E00();

    if (rec == NULL) {
        return 0;
    }
    return rec->flag != 0;
}
