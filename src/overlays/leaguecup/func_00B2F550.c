/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    void *root;
    u8 reserved4[0x144];
    s32 items[27];
    u8 reserved1B4[0x2c];
    s32 grid[5][2];
    u8 reserved208[0x2c4];
    s32 *status;
    void *container;
} CupPage;
extern CupPage *func_00B30600(void);
extern void func_00972290(s32 *status);
extern s32 func_00957070(s32 item);
extern void func_001B9C60(void *container);
extern void func_001D4E00(void *root);
void func_00B2F550(void) {
    CupPage *page;
    s32 i, j;
    page = func_00B30600();
    if (!page)
        return;
    func_00972290(page->status);
    for (j = 0; j < 27; ++j)
        func_00957070(page->items[j]);
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 5; ++j) {
            func_00957070(page->grid[j][i]);
        }
    }
    func_001B9C60(page->container);
    func_001D4E00(page->root);
}
