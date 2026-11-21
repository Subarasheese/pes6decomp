/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x34];
    void *field_34;
    u8 pad_38[0x8];
    s32 field_40;
} Fields;

extern void func_001F1EA0(void *);
extern void Pes6Process_Unlink(s32);
s32 Pes6Process_Destroy(s32);

void func_002DC1D0(Fields *arg0) {
    if (arg0 != 0) {
        func_001F1EA0(arg0->field_34);
        Pes6Process_Unlink(arg0->field_40);
        Pes6Process_Destroy(arg0->field_40);
    }
}
