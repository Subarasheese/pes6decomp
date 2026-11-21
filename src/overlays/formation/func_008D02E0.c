/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x2];
    s8 field_2;
    u8 pad_3[0x49];
    void *field_4C;
    void *field_50;
    u8 pad_54[0x138];
    s32 field_18C;
    s32 field_190;
    u8 pad_194[0x28];
    s32 field_1BC;
    s32 field_1C0;
    u8 pad_1C4[0x4];
    s32 field_1C8;
    u8 pad_1CC[0x4];
    s32 field_1D0;
    u8 pad_1D4[0x8];
    s32 field_1DC;
} Fields;

extern void func_001F3CA0(void *);
s32 func_002DF960(s32);

void func_008D02E0(Fields *arg0) {
    func_002DF960(arg0->field_1DC);
    arg0->field_1DC = 0;
    func_001F3CA0(arg0->field_50);
    func_001F3CA0(arg0->field_4C);
    arg0->field_18C = 0;
    arg0->field_190 = 0;
    arg0->field_1BC = 0;
    arg0->field_1C0 = 0;
    arg0->field_1D0 = 0;
    arg0->field_1C8 = 0;
    arg0->field_2 = 3;
}
