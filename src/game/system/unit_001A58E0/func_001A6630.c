/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad_0[0x2];
    u8 field_2;
} Fields_temp_v1;

void *func_001A66D0(u8 *);
extern void *D_00520640[];

void func_001A6630(u8 *arg0) {
    u8 value;
    u8 value2;
    void **value3;
    void *entry;
    Fields_temp_v1 *value4;

    value = *arg0;
    value3 = &D_00520640[value];
    value4 = *value3;
    if ((value4 != NULL) && ((s32)value < 0x23) && (value4 != NULL)) {
        *value3 = NULL;
        value2 = value4->field_2 - 1;
        value4->field_2 = value2;
        if ((value2 & 0xFF) <= 0) {
            value4->field_2 = 0U;
        }
    }
    entry = func_001A66D0(arg0);
    M2C_FIELD(entry, u8 *, 2) = (u8)(M2C_FIELD(entry, u8 *, 2) + 1);
    *value3 = entry;
}
