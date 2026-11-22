/* compiler: ee-gcc-2.9-Os-G0 */
#include "types.h"
typedef struct {
    u64 payload, reg;
} GsCommand;
typedef union {
    u8 bytes[0x8000];
    struct {
        u8 pad[0x4ec];
        s32 page;
    } selection;
    struct {
        u8 pad[0x910];
        GsCommand *packet[2];
    } buffers;
} GsWidget;
extern void func_00189AD0(GsCommand *tag, s32 count);
extern void func_0018A148(GsCommand *command, s32 reg, ...);
extern u32 D_005C5994[];
void func_001885E8(GsWidget *widget) {
    GsCommand *packet = (GsCommand *)(widget->bytes + 0x980);
    GsCommand *cmd0 = ((GsCommand *)(widget->bytes + 0x980)) + 6;
    u32 i = 0;
    GsCommand *cmd1 = ((GsCommand *)(widget->bytes + 0x980)) + 7;
    func_00189AD0(((GsCommand *)(widget->bytes + 0x980)), 0x15);
    func_0018A148(((GsCommand *)(widget->bytes + 0x980)) + 1, 0xc7, 0xae, 1, 0xaf, 6, 0xb0, 0, 0xb1,
                  0, 0xb2, 0, 0xb4, 0, 0xb5, 0, 0);
    func_0018A148(((GsCommand *)(widget->bytes + 0x980)) + 2, 0x88, 0x6e, 0, 0x6f, 0, 0x70, 0, 0x71,
                  0xff, 0x72, 0, 0x73, 0xff, 0);
    func_0018A148(((GsCommand *)(widget->bytes + 0x980)) + 3, 0xc2, 0x63, 0, 0x64, 1, 0x65, 0, 0x66,
                  1, 0x67, 0x80, 0);
    func_0018A148(((GsCommand *)(widget->bytes + 0x980)) + 4, 0x49, 0x9a, 0, 0);
    func_0018A148(((GsCommand *)(widget->bytes + 0x980)) + 5, 0, 0x9b, 4, 0x9c, 1, 0x9d, 0, 0x9e, 0,
                  0x9f, *(u32 *)(widget->bytes + 0x960), 0xa0, 0, 0xa1, 1, 0xa2, D_005C5994[0],
                  0x67, 0, 0);
    do {
        i++;
        func_0018A148(cmd0, 1, 0);
        func_0018A148(cmd1, 5, 0);

        cmd0 += 2;
        cmd1 += 2;
    } while (i < 8);
}
