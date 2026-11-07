/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 padding[8];
    u8 kind;
    u8 tail[55];
} Record;
extern Record D_00CB5F20[];
extern u8 D_00CB5F24[];
s32 func_0030FE30(void **output, s32 wanted) {
    s32 index;
    u8 previous;
    s32 count;
    Record *cursor;
    previous = 0;
    index = 0;
    count = 0;
    cursor = D_00CB5F20;
    do {
        u8 kind = cursor->kind;
        if ((previous & 0xFF) != kind) {
            if (count == wanted) {
                *output = (u8 *)&D_00CB5F20[index]+4;
                return 1;
            }
            previous = kind;
            count++;
        }
        index++;
        cursor++;
    } while (index < 10 && count != 0);
    *output = D_00CB5F24;
    return 0;
}
