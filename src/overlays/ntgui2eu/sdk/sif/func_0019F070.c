/* compiler: ee-gcc-2.9 */
#include "types.h"

extern s32 func_001A4728(void);
extern s32 func_001A4778(void);
extern char D_012032C0[];

void func_0019F070(void *arg0, s32 arg1) {
    char *entry;
    void *entry2;
    void *entry3;
    func_001A4728();
    *((s32 *)(((s8 *)arg0) + 0)) = arg1;
    *((s32 *)(((s8 *)arg0) + 4)) = 0;
    *((s32 *)(((s8 *)arg0) + 8)) = 0;
    entry = D_012032C0;
    *((s32 *)(((s8 *)arg0) + 0xC)) = 0;
    *((s32 *)(((s8 *)arg0) + 0x10)) = 0;
    *((s32 *)(((s8 *)arg0) + 0x14)) = 0;
    if ((*((void **)(((s8 *)((void *)entry)) + 0x28))) == 0) {
        *((void **)(((s8 *)((void *)entry)) + 0x28)) = arg0;
    } else {
        void *entry4;
        entry2 = *((void **)(((s8 *)((void *)D_012032C0)) + 0x28));
        entry4 = *((void **)(((s8 *)entry2) + 0x14));
        if (entry4 != 0) {
            do {
                entry2 = entry4;
                entry3 = *((void **)(((s8 *)entry2) + 0x14));
                entry4 = entry3;
            } while (entry3 != 0);
        }
        *((void **)(((s8 *)entry2) + 0x14)) = arg0;
    }
    func_001A4778();
}
