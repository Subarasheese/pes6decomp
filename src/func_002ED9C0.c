/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern char D_005E92A0[];
extern char D_005E92A4[];
extern void func_00153FA0(void *);
void func_002ED9C0(void) {
    s32 index;
    s32 offset;
    index = 0;
    if (*(s32 *)D_005E92A0 > 0) {
        offset = 0;
        do {
            func_00153FA0(*(void **)(*(u8 **)D_005E92A4 + offset));
            index += 1;
            offset += 4;
        } while (index < *(s32 *)D_005E92A0);
    }
    func_00153FA0(*(void **)D_005E92A4);
}
