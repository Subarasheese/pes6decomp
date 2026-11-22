/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    s8 field0;
    u8 pad01;
    s16 field2;
    s8 field4, field5, field6, field7;
} EditorEntry;
extern EditorEntry *D_00CE5668[];

s32 func_00BD0C80(s32 index, s32 field) {
    s32 value;
    EditorEntry *entry;
    value = 0;
    entry = &D_00CE5668[0][index];
    switch (field) {
    case 0x2f:
        value = (int)entry->field0;
        break;

    case 0x30:
        value = (int)entry->field2;
        break;

    case 0x31:
        value = (int)entry->field4;
        break;

    case 0x32:
        value = (int)entry->field5;
        break;

    case 0x33:
        value = (int)entry->field6;
        break;

    case 0x3c:
        value = (int)entry->field7;
        break;
    }

    return value;
}
