/* compiler: ee-gcc-2.9-Os-G0 */
#include "types.h"
typedef struct {
    u8 red, green, blue, alpha;
} UiColor;
typedef struct {
    UiColor color;
    u8 reserved[0x1c];
} PacketVertex;
typedef struct {
    u8 prefix[0x160];
    PacketVertex vertices[4];
} VertexPacket;
typedef struct {
    u8 pad00[0x4ec];
    s32 page;
    u8 pad4f0[0xd0];
    UiColor colors[4];
    u8 pad5d0[0x48];
    s32 alpha;
} ColorWidget;
void func_00166AA8(ColorWidget *widget) {
    u8 *base = (u8 *)widget + ((widget->page << 9) + 0xd0);
    VertexPacket *packet = (VertexPacket *)(base + 0x10);
    packet->vertices[0].color.red = widget->colors[0].red;
    packet->vertices[0].color.green = widget->colors[0].green;
    packet->vertices[0].color.blue = widget->colors[0].blue;
    packet->vertices[0].color.alpha = widget->alpha * widget->colors[0].alpha / 255;
    packet->vertices[1].color.red = widget->colors[1].red;
    packet->vertices[1].color.green = widget->colors[1].green;
    packet->vertices[1].color.blue = widget->colors[1].blue;
    packet->vertices[1].color.alpha = widget->alpha * widget->colors[1].alpha / 255;
    packet->vertices[2].color.red = widget->colors[2].red;
    packet->vertices[2].color.green = widget->colors[2].green;
    packet->vertices[2].color.blue = widget->colors[2].blue;
    packet->vertices[2].color.alpha = widget->alpha * widget->colors[2].alpha / 255;
    packet->vertices[3].color.red = widget->colors[3].red;
    packet->vertices[3].color.green = widget->colors[3].green;
    packet->vertices[3].color.blue = widget->colors[3].blue;
    packet->vertices[3].color.alpha = widget->alpha * widget->colors[3].alpha / 255;
}
