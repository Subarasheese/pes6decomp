/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/12A948.c, func_0012C820.
 * See config/cross_project_matches.json for per-image address mappings. */
extern char D_005FEC40[];
extern s32 func_0019DBD0(char *, ...);

s32 func_00192C88(u64 *tag)
{
    u32 i = 0;

    while (*(volatile u32 *)0x1000A000 & 0x100) {
        if (i++ > 0x1000000) {
            func_0019DBD0(D_005FEC40);
            return -1;
        }
    }
    *(volatile u32 *)0x1000A020 = (s32)(*tag & 0x7FFF) + 1;
    if (((u32)tag & 0x70000000) == 0x70000000) {
        *(volatile u32 *)0x1000A010 = ((u32)tag & 0x0FFFFFFF) | 0x80000000;
    } else {
        *(volatile u32 *)0x1000A010 = (u32)tag & 0x0FFFFFFF;
    }
    *(volatile u32 *)0x1000A000 = 0x101;
    return 0;
}
