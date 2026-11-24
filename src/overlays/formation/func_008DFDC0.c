/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u32 message;
    u8 window[32];
    void *group, *animation, *name, *value, *entries[5], *cursor, *highlight;
} FormationPrompt;
extern void func_002DF960(void *), func_001F1EA0(void *), func_001D7F10(void *),
    func_008C5D70(void *), func_008C5D40(void *);
void func_008DFDC0(FormationPrompt *page) {
    s32 i;
    func_002DF960(page->animation);
    func_001F1EA0(page->group);
    func_001D7F10(page->name);
    func_001D7F10(page->value);
    func_008C5D70(page->window);
    page->message = 0x10c0013;
    page->animation = 0;
    page->group = 0;
    page->name = 0;
    page->value = 0;
    for (i = 0; i < 5; i++)
        page->entries[i] = 0;
    page->highlight = 0;
    page->cursor = 0;
    func_008C5D40(page->window);
}
