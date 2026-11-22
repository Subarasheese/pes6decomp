/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 reserved00[7], value;
} MatchAttribute;
extern s32 func_002C1DD0(s32, s32, s32, s32, s32);
extern s32 func_002C1FD0(s32, s32, s32, s32);
extern MatchAttribute *func_00C13280(s32);
extern s32 func_00C135B0(s32, const s32 *, s32);
extern s32 D_00CB3450[], D_00CB3468[];
s32 func_00C5BC90(s32 first, s32 second, s32 group, s32 (*test)(f32 *)) {
    s32 matched;
    s32 index;
    s32 id;
    s32 entry;
    s32 count;
    s32 total;
    f32 value;
    matched = 0;
    if ((first != -1) && (second != -1)) {
        count = func_002C1FD0(first, second, group, 0x24);
        index = count;
        if (count != 0) {
            total = D_00CB3468[0];
        next_entry:
            entry = func_002C1DD0(first, second, group, 0x24, index);
            if (entry != -1) {
                id = func_00C135B0(entry, D_00CB3450, total);
                if (id != -1) {
                    value = (f32)func_00C13280(id)->value;
                    if (test(&value) != 0) {
                        matched = 1;
                    } else {
                        index -= 1;
                        if (index != 0) {
                            goto next_entry;
                        }
                    }
                }
            }
        }
    }
    return matched;
}
