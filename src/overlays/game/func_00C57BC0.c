/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern u8 func_00C132C0(u8 *);
extern void func_00C57220(s32, s32, void *);
extern void func_00C578F0(s32, void *, void *, float);

void func_00C57BC0(s32 channel, s32 index, void *entry) {
    u8 kind;
    if (((channel != 0) && (index != (-1))) && (entry != (void *)-1)) {
        kind = func_00C132C0(entry);
        switch (kind) {
        case 3:
            func_00C57220(channel, index, entry);
            break;

        case 4:
            func_00C578F0(channel, entry, entry, 1.0);
            break;

        case 5:
            func_00C578F0(channel, entry, entry, 1.0);
            break;
        }
    }
}
