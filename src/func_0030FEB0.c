/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 padding[4];
    u8 kind;
    u8 tail[59];
} Record;
s32 func_0030FEB0(Record *base,void **output, s32 wanted) {
    s32 index;
    s32 count;
    u8 previous;
    Record *cursor;
    previous = 0;
    count = 0;
    index = 0;
    cursor = base;
    do {
        u8 kind = cursor->kind;
        if ((previous & 0xFF) != kind && kind != 0xFF) {
            if (count == wanted) {
                *output = &base[index];
                return 1;
            }
            previous = kind;
            count++;
        }
        index++;
        cursor++;
    } while (index < 10 && count != 0);
    *output = 0;
    return 0;
}
