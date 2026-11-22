/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x4];
    s32 field_4;
    s32 field_8;
    s32 field_C;
    s32 field_10;
} Fields;

extern void Pes6Heap_Free(void *);
s32 func_0099F000(s32);
s32 func_009A0170(s32);
s32 func_009BD320(s32);
s32 func_009BF1C0(s32);

s32 func_009BE7C0(Fields *arg0) {
    if (arg0 == 0) {
        return 4;
    }
    func_009BF1C0(arg0->field_10);
    arg0->field_10 = 0;
    func_009A0170(arg0->field_8);
    arg0->field_8 = 0;
    func_0099F000(arg0->field_4);
    arg0->field_4 = 0;
    func_009BD320(arg0->field_C);
    arg0->field_C = 0;
    Pes6Heap_Free(arg0);
    return 0;
}
