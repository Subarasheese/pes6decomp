/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0xB];
    u8 field_B;
    u8 pad_C[0x6C];
    u8 field_78;
} Fields;

extern s32 Pes6Job_SetPayloadWord(void *, s32, s32);
extern s32 func_00338720(void *, s32);
extern s32 Pes6Job_SetArg(void *, s32, s32);
void *Pes6Job_Create(s32, s32 *, s32, s32 *);
extern char D_003E6408[];
extern char func_00351640[];

s32 func_00351D70(Fields *arg0) {
    void *entry;

    if (arg0->field_B != 0) {
        return 0;
    }
    entry = Pes6Job_Create(0x22, (s32 *)func_00351640, 4, ((void *)D_003E6408));
    Pes6Job_SetPayloadWord(entry, (s32)arg0, 0);
    Pes6Job_SetArg(entry, 0, (s32)arg0->field_78);
    arg0->field_B = 1U;
    func_00338720(entry, 2);
    return 1;
}
