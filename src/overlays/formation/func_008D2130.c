/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x1CC];
    void *field_1CC;
    u8 pad_1D0[0x4];
    void *field_1D4;
} Fields;

extern void func_001EEE60(void *, void *);
extern s32 func_002DB940(void *);
extern void func_008D0E70(void *, s32);

extern char D_008EDAC0[];

void func_008D2130(Fields *arg0, s32 arg1) {
    f32 localValue1;

    func_008D0E70(arg0, arg1);
    if (arg0->field_1CC != 0) {
        func_002DB940(arg0->field_1D4);
        localValue1 = (*(f32 *)D_008EDAC0);
        func_001EEE60(arg0->field_1CC, &localValue1);
    }
}
