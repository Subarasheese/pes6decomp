/* compiler: mwcc-3.0.1b198 */
#include "pes6/league_seed_draw.h"

typedef struct {
    u8 reserved00[0x58];
    s32 selection;
    u8 reserved5c[0xb8];
    s32 phase;
    u8 nextPage;
} LeaguePage;
typedef struct {
    u8 reserved00[0x25];
    u8 selection;
} LeagueMenu;

extern LeaguePage *D_003EAE64;
extern LeagueMenu *D_003E7B0C;
extern void func_00B39320(void), func_00B39030(void), func_00B38F70(void);
extern void func_00B39160(s8 active);
extern void func_00B38AA0(s32 item), func_00958000(s32 mode);
extern s32 func_001B9DF0(void), func_009A8570(void);
extern void func_009A8530(void), func_00961060(void), func_00961090(void), func_00B37B90(void);
extern u8 func_00B3CD30(void);

static inline u8 takeLeaguePage(u8 page) {
    func_009A8530();
    return page;
}

u8 func_00B3D440(void) {
    LeaguePage *page = D_003EAE64;
    if (!page)
        return 0;
    func_00B39320();
    func_00B39030();
    func_00B38F70();
    if (page->phase == 1) {
        func_00B39160(0);
    } else if (page->phase != 2) {
        func_00B39160(1);
        func_00B38AA0(page->selection);
        if (!func_001B9DF0()) {
            if (D_003E77B0->flags & 8ULL)
                func_00958000(2);
            else
                func_00958000(0);
        }
    }
    D_003E7B0C->selection = (u8)page->selection;
    switch (page->phase) {
    case 1:
        switch (func_009A8570()) {
        case 0x30:
            return takeLeaguePage(9);
        case 0x31:
            return takeLeaguePage(0xA);
        case 0x32:
            return takeLeaguePage(0xB);
        case 0x33:
            return takeLeaguePage(0xC);
        case 0x34:
            return takeLeaguePage(0xD);
        case 0x35:
            return takeLeaguePage(0xE);
        case 0x36:
            return takeLeaguePage(0xF);
        case 0x37:
            return takeLeaguePage(0x10);
        case 0x38:
            return takeLeaguePage(0x11);
        case 0x39:
            return takeLeaguePage(0x12);
        case 0x3A:
            return takeLeaguePage(0x13);
        case 0x3B:
            return takeLeaguePage(0x14);
        case 0x3C:
            return takeLeaguePage(0x15);
        case 0x3D:
            return takeLeaguePage(0x16);
        case 0x3E:
            return takeLeaguePage(0x17);
        case 0x3F:
            return takeLeaguePage(0x18);
        case 0x40:
            return takeLeaguePage(0x19);
        case 0x41:
            func_00961060();
            return takeLeaguePage(0x23);
        case 0x42:
            return takeLeaguePage(0x1A);
        case 0x43:
            return takeLeaguePage(7);
        case 0x44:
            return takeLeaguePage(8);
        case 0x45:
            return takeLeaguePage(0x1B);
        case 0x46:
            return takeLeaguePage(0x1C);
        case 0x47:
            return takeLeaguePage(0x1D);
        case 0x48:
            return takeLeaguePage(0x1E);
        case 0x49:
            return takeLeaguePage(0x1F);
        case 0x4A:
            return takeLeaguePage(0x20);
        case 0x4B:
            return takeLeaguePage(2);
        case 0x4C:
            func_009A8530();
            func_00961090();
            page->nextPage = 3;
            page->phase = 2;
            return 3;
        case 0x4D:
            return takeLeaguePage(4);
        case 0x4E:
            return takeLeaguePage(5);
        case 0x4F:
            return takeLeaguePage(6);
        case 0x51:
            return takeLeaguePage(0x25);
        case 0x50:
        case 0x6B:
            func_009A8530();
            page->phase = 0;
            func_00B37B90();
            return 0;
        default:
            return 0;
        }
    case 0:
    default:
        return func_00B3CD30();
    }
}
