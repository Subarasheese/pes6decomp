/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x3B8];
    s32 field_3B8;
} Fields;

extern void func_00153560(s32);
extern void func_0017B060(s32, s32, s32);

extern void *D_003EAED0;
extern char Pes6World_ModelList[];

void func_00B64630(void) {
    s32 value;
    Fields *value2;

    value2 = D_003EAED0;
    if (value2 != 0) {
        func_0017B060((*(s32 *)Pes6World_ModelList), 0, 0);
        value = value2->field_3B8;
        if (value != 0) {
            func_00153560(value);
            value2->field_3B8 = 0;
        }
    }
}
