/* compiler: mwcc-3.0.1b151 */
#include "pes6/widget_texture.h"
void func_001EE790(WidgetGeometry *widget, const TexturePoint *points) {
    s32 valid;
    if (widget && points)
        valid = 1;
    else
        valid = 0;
    if (!valid)
        return;
    {
        widget->uv[0] = packedTextureUV(points[0].u, points[0].v);
        widget->uv[1] = packedTextureUV(points[1].u, points[1].v);
        widget->uv[2] = packedTextureUV(points[2].u, points[2].v);
        widget->uv[3] = packedTextureUV(points[3].u, points[3].v);
    }
}
