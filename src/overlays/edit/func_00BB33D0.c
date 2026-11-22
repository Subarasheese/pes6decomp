/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x10];
    s8 field_10;
    s8 field_11;
    u8 pad_12[0x2];
    s8 field_14;
    u8 pad_15[0x7];
    s32 field_1C;
    u8 pad_20[0x20];
    s32 field_40;
} Fields;

s32 func_0025E970(s32);
s32 func_00BA5E50(s32);
s32 func_00BB4780(void *);
s32 func_00BBBFE0(s32);
extern s32 func_00BBC080(void);

void func_00BB33D0(Fields *arg0, s32 arg1) {
    func_0025E970(arg1);
    func_00BA5E50(arg0->field_1C);
    arg0->field_1C = arg1;
    arg0->field_40 = func_00BB4780(arg0);
    func_00BBC080();
    func_00BBBFE0(1);
    arg0->field_11 = (s8)arg0->field_10;
    arg0->field_10 = 3;
    arg0->field_14 = 5;
}
