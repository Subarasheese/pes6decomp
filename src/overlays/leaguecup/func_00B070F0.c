/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    void *root;
    u8 reserved4[0xd8];
    s32 items[18];
    u8 reserved124[0x14];
    s32 grid[2][2];
    u8 reserved148[0x134];
    s32 *status;
    void *container;
} CupPage;
extern CupPage *func_00B080B0(void);
extern void func_00972290(s32 *status);
extern s32 func_00957070(s32 item);
extern void func_001B9C60(void *container);
extern void func_001D4E00(void *root);
void func_00B070F0(void) {
    CupPage *page;
    s32 i, j;
    page = func_00B080B0();
    if (!page)
        return;
    func_00972290(page->status);
    for (j = 0; j < 18; ++j)
        func_00957070(page->items[j]);
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            func_00957070(page->grid[j][i]);
        }
    }
    func_001B9C60(page->container);
    func_001D4E00(page->root);
}
