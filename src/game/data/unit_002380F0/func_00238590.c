/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0xB];
    u8 value;
} Rec;

Rec *Pes6SaveData_GetEntry7980(s32);
s32 Pes6SaveData_IsUnavailable(void);

u8 func_00238590(s32 id) {
    Rec *rec = Pes6SaveData_GetEntry7980((u8)id);

    if (Pes6SaveData_IsUnavailable() == 1) {
        return 0;
    }
    if (rec == NULL) {
        return 0;
    }
    return rec->value;
}
