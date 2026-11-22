/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_gs_packet.h"

void func_001665C0(GsWidget *widget) {

    GsCommand *page = (GsCommand *)(widget->bytes + (widget->selection.page * 0x200 + 0xd0));
    func_00189AD0(page + 1, 0x10);
    func_0018A148(page + 2, 0xc7, 0xae, 1, 0xaf, 6, 0xb0, 0, 0xb1, 0, 0xb2, 0, 0xb4, 0, 0xb5, 0, 0);
    func_0018A148(page + 3, 0x88, 0x6e, 0, 0x6f, 0, 0x70, 0, 0x71, 0xff, 0x72, 0, 0x73, 0xff, 0);
    func_0018A148(page + 4, 0xc2, 0x63, 0, 0x64, 1, 0x65, 0, 0x66, 1, 0x67, 0x80, 0);
    func_0018A148(page + 5, 0x49, 0x9a, 0, 0);
    func_0018A148(page + 6, 0, 0x9b, 4, 0x9c, 0, 0x9d, 0, 0x9e, 0, 0x9f,
                  *(u32 *)(widget->bytes + 0x5dc), 0xa0, 0, 0xa1, 1, 0xa2, D_005C5994[0], 0x67, 1,
                  0);
    func_0018A148(page + 7, 1, 0);
    {
        u32 i;
        for (i = 0; i < 10; i++) {
            func_0018A148(page + 8 + i, 5, 0);
        }
    }
}
