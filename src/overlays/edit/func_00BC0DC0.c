/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    s32 page;
    u8 reserved04[4];
    s32 state;
    u8 reserved0C[0xA];
    u8 flags;
    u8 reserved17[0xD];
} EditPage;
extern void *memset(void *, int, u32);
extern void func_00BC26F0(EditPage *);
extern void func_00BC2520(EditPage *);
extern void func_00B91490(s32 mode);
extern void func_001B79C0(void);
extern void func_001B7ED0(const s32 (*items)[2], s32 count);
extern const s32 D_00CB6DD0[][2];
void func_00BC0DC0(EditPage *page, s32 id, s32 restricted, s32 mode)

{
    memset(page, 0, sizeof(*page));
    page->state = 3;
    page->page = id;
    if (restricted == 0) {
        page->flags |= 1;
        page->flags |= 8;
        page->flags |= 0x10;
        page->flags |= 2;
        page->flags |= 4;
    } else if (mode == 0) {
        page->flags |= 2;
        page->flags |= 4;
    } else if (mode == 1) {
        page->flags |= 0x20;
        page->flags |= 0x40;
    }
    func_00BC26F0(page);
    func_00BC2520(page);
    func_00B91490(0x13);
    func_001B79C0();
    func_001B7ED0(D_00CB6DD0, 2);
}
