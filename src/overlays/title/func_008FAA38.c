/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/1301D8.c, func_00132A98.
 * See config/cross_project_matches.json for per-image address mappings. */
typedef struct {
    u8 pad0[0x82C];
    int f82C;
    u8 pad830[0x868 - 0x830];
    int f868;
    u8 pad86C[0x878 - 0x86C];
    int f878;
} S_1325A0;
extern void func_008F8410(S_1325A0 *);
void func_008FAA38(S_1325A0 *s) {
    if ((*(volatile u32 *)0x10002010 & 0x80004000) == 0x80000000) {
        func_008F8410(s);
    }
}
