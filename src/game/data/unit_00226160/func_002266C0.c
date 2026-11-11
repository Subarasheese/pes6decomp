/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x3];
    u8 value;
} Rec;

Rec *Pes6SaveData_GetHeaderBlock(void);
s32 Pes6SaveData_IsUnavailable(void);

u8 func_002266C0(void) {
    Rec *rec = Pes6SaveData_GetHeaderBlock();

    if (Pes6SaveData_IsUnavailable() == 1) {
        return 0;
    }
    if (rec == NULL) {
        return 0;
    }
    return rec->value;
}
