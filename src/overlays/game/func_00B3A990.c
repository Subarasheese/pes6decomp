/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad_0[0x4];
    void *field_4;
} Fields_arg0;

extern void func_00B3FED0(void *);
extern void func_00B3FFA0(void *);
extern void func_00B40370(void *);
extern void func_00B40730(void *);
extern void func_00B40A40(void *);
extern void func_00B40D50(void *);
extern void func_00B410A0(void *);
extern void func_00B41320(s32);
extern void func_00B41530(void *);
extern void func_00B417B0(void *);
extern void func_00B41A80(void *);

void func_00B3A990(Fields_arg0 *arg0) {
    u8 value;
    void *entry;

    if (M2C_FIELD(arg0->field_4, u8 *, 0x4F) == 0) {
        func_00B3FED0(arg0);
    }
    entry = arg0->field_4;
    value = M2C_FIELD(entry, u8 *, 0x4F);
    switch (value) {
    case 1:
        func_00B41A80(arg0);
        break;
    case 2:
        func_00B417B0(arg0);
        break;
    case 3:
        func_00B41530(arg0);
        break;
    case 4:
        func_00B41320((s32)arg0);
        break;
    case 5:
        func_00B410A0(arg0);
        break;
    case 6:
        func_00B40D50(arg0);
        break;
    case 7:
        func_00B40A40(arg0);
        break;
    case 8:
        func_00B40730(arg0);
        break;
    case 9:
        func_00B3FFA0(arg0);
        break;
    case 10:
        func_00B40370(arg0);
        break;
    case 0:
        func_00B3FED0(arg0);
        break;
    default:
        M2C_FIELD(entry, u8 *, 0x4F) = 0U;
        break;
    }
}
