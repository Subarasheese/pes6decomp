/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/widget_color.h"
enum {
    QUAD_CORNERS = 4,
    COLOUR_OFFSET = 0x5c0,
    PACKET_OFFSET = 0xba0,
    PACKET_SIZE = 0x170,
    VERTEX_OFFSET = 0x90,
    VERTEX_SIZE = 0x30
};
typedef union {
    struct {
        u8 reserved00[0x4ec];
        s32 page;
        u8 reserved4f0[0x618 - 0x4f0];
        s32 alpha;
    } state;
    u8 bytes[PACKET_OFFSET + 2 * PACKET_SIZE];
} ColourWidget;
typedef struct {
    u8 header[VERTEX_OFFSET];
    WidgetColor colour;
} PacketVertex;
typedef struct {
    u8 header[COLOUR_OFFSET];
    WidgetColor colour;
} CornerRecord;
void func_00177388(ColourWidget *widget) {
    s32 i;
    u8 *page = widget->bytes + widget->state.page * PACKET_SIZE;
    u8 *packet = page + PACKET_OFFSET;
    for (i = 0; i < QUAD_CORNERS; ++i) {
        ((PacketVertex *)(packet + i * VERTEX_SIZE))->colour.r =
            ((const CornerRecord *)(widget->bytes + i * sizeof(WidgetColor)))->colour.r;
        ((PacketVertex *)(packet + i * VERTEX_SIZE))->colour.g =
            ((const CornerRecord *)(widget->bytes + i * sizeof(WidgetColor)))->colour.g;
        ((PacketVertex *)(packet + i * VERTEX_SIZE))->colour.b =
            ((const CornerRecord *)(widget->bytes + i * sizeof(WidgetColor)))->colour.b;
        ((PacketVertex *)(packet + i * VERTEX_SIZE))->colour.a =
            widget->state.alpha *
            ((const CornerRecord *)(widget->bytes + i * sizeof(WidgetColor)))->colour.a / 255;
    }
}
