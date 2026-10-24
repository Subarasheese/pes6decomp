/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/12A948.c, func_0012C088.
 * See config/cross_project_matches.json for per-image address mappings. */
extern s32 func_001A0270(void *, s32);
extern s32 func_001A08B8(s32, void *, s32);
extern void func_001A0500(s32);
extern s32 func_001AD6F8(void *);
extern u8 D_005FEBF8[];

s32 func_001924B0(void) {
    s8 buf[0x100];
    s8 *p;
    s32 fd;
    u32 i;
    s8 c;

    fd = func_001A0270(D_005FEBF8, 1);
    if (fd < 0) {
        return -1;
    }
    i = 0;
    p = buf;
    while (i < 0x100) {
        func_001A08B8(fd, p, 1);
        c = *p;
        p++;
        if (c == 0) {
            break;
        }
        i++;
    }
    func_001A0500(fd);
    return 0x1315670 < func_001AD6F8(buf + (i - 9));
}
