/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
typedef struct {
    u8 reserved00[8];
    void *target;
    u8 reserved0c[5];
    u8 mode;
    u8 reserved12[2];
    u8 step;
} EditTransition;
extern s32 func_00B91390(void);
extern void func_00C02A90(void *), func_00C028E0(void *, u8);
void func_00C02690(EditTransition *entry) {
    void *target = entry->target;
    if (func_00B91390() == 0) {
        switch (entry->step) {
        case 0:
            func_00C02A90(target);
            entry->step = 1; /* fall through */
        case 1:
            func_00C028E0(target, entry->mode);
            break;
        }
    }
}
