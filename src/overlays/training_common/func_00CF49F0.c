/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    void *field_0;
    u8 pad_4[0x124];
    s32 field_128;
    s32 field_12C;
    s32 field_130;
} Fields;

extern s32 func_001BC360(s32);
extern void func_002F4E10(void *);
extern s32 func_002F62E0(s32);

extern s32 D_003EB33C;

s32 func_00CF49F0(Fields *arg0) {
    s32 value;

    if (arg0 == 0) {
        return 0;
    }
    func_002F4E10(arg0->field_0);
    D_003EB33C = 0;
    arg0->field_0 = 0;
    value = arg0->field_128;
    if (value != 0) {
        func_002F62E0(value);
        arg0->field_128 = 0;
        func_001BC360(arg0->field_12C);
        func_001BC360(arg0->field_130);
    }
    return 1;
}
