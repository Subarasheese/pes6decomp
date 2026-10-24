/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/12A948.c, func_0012AE20.
 * See config/cross_project_matches.json for per-image address mappings. */
extern s32 D_005C8DE4[];
extern s32 D_005C8E08[];
extern void func_00190FF0(void);
extern void func_0019E030();
extern s32 func_001A4728(void);
extern s32 func_001A4778(void);

s32 func_00191048(void) {
    s32 r;
    D_005C8DE4[0] = 1;
    r = func_001A4728();
    func_0019E030(0x80000012, func_00190FF0, 0);
    if (r != 0) {
        func_001A4778();
    }
    D_005C8DE4[0] = 0;
    D_005C8E08[0] = 1;
    return 1;
}
