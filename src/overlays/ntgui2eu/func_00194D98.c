/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/12A948.c, func_0012F608.
 * See config/cross_project_matches.json for per-image address mappings. */
typedef struct {
    u8 pad[0x30];
    u8 act[8][4];
    u8 pad50[0x14];
    u8 x64;
    u8 pad65[5];
    u8 x6A;
    u8 pad6B[7];
    u8 x72;
    u8 pad73[0xD];
} Info_12F608;

typedef struct {
    u8 pad[0x10];
    s32 x10;
    u8 pad2[0x8];
} Slot_12F608;

extern Slot_12F608 D_011FD510[][4];
extern void func_00194978(s32, s32, void *);

s32 func_00194D98(s32 port, s32 slot, s32 actno, s32 term) {
    Info_12F608 info;

    if (D_011FD510[port][slot].x10 == 0) {
        return 0;
    }
    func_00194978(port, slot, &info);
    if (info.x72 != 1) {
        return 0;
    }
    if (info.x64 < 2) {
        return 0;
    }
    if (actno >= info.x6A) {
        return 0;
    }
    if (actno == -1) {
        return info.x6A;
    }
    switch (term) {
    case 1:
        return info.act[actno][0];
    case 2:
        return info.act[actno][1];
    case 3:
        return info.act[actno][2];
    case 4:
        return info.act[actno][3];
    }
    return 0;
}
