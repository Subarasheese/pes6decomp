/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/124988.c, func_00124C50.
 * See config/cross_project_matches.json for per-image address mappings. */
extern void func_0019B1D0(s32 *);
extern void func_0019B1C0(s32 *);
s32 func_001A4AA0(void) {
    s32 a;
    u32 b;
    func_0019B1D0(&a);
    b = (a & 0xFFFF1FFF) | 0x2000;
    func_0019B1C0(&b);
    func_0019B1D0(&b);
    func_0019B1C0(&a);
    return ((b >> 13) & 7) == 0;
}
