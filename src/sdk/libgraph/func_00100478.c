/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/12A948.c, func_0012C088.
 * See config/cross_project_matches.json for per-image address mappings. */
extern s32 func_0010A6E8(void *, s32);
extern s32 func_0010AD30(s32, void *, s32);
extern void func_0010A978(s32);
extern s32 atoi(void *);
extern u8 D_003C3480[];

s32 func_00100478(void) {
    s8 buf[0x100];
    s8 *p;
    s32 fd;
    u32 i;
    s8 c;

    fd = func_0010A6E8(D_003C3480, 1);
    if (fd < 0) {
        return -1;
    }
    i = 0;
    p = buf;
    while (i < 0x100) {
        func_0010AD30(fd, p, 1);
        c = *p;
        p++;
        if (c == 0) {
            break;
        }
        i++;
    }
    func_0010A978(fd);
    return 0x1315670 < atoi(buf + (i - 9));
}
