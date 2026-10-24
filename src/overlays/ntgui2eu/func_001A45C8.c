/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/11FA10.c, func_001242B8.
 * See config/cross_project_matches.json for per-image address mappings. */
extern u32 func_0019B530(s32);
extern void func_0019B5A0(void);
extern void func_001A68B0(s32, s32);
s32 func_001A45C8(void) {
    if (func_0019B530(4) & 0x40000) {
        func_0019B5A0();
        func_001A68B0(1, 1);
        func_001A68B0(0, 1);
        return 1;
    }
    return 0;
}
