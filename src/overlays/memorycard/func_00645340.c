/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 prefix[12];
    u8 header[20];
    u8 settings[4504];
    u8 roster[8252];
} CardBlock;
typedef struct {
    void *roster;
} ActiveSettings;

extern CardBlock *D_0065EF78[];
extern void *func_0022D9F0(void), *func_0021F150(s32);
extern ActiveSettings *func_00237530(s32);
extern void *func_001C4730(void *, const void *, u32);

void func_00645340(void) {
    CardBlock *block = D_0065EF78[0];
    void *header = func_0022D9F0();
    ActiveSettings *settings = func_00237530(295);
    void *roster = func_0021F150(295);
    func_001C4730(header, block->header, sizeof(block->header));
    func_001C4730(settings, block->settings, sizeof(block->settings));
    func_001C4730(roster, block->roster, sizeof(block->roster));
    settings->roster = roster;
}
