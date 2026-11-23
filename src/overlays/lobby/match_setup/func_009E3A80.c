/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    float values[4];
} UiVector;
typedef struct Drawable Drawable;
typedef struct {
    u8 pad[12];
    Drawable *drawable;
} LobbyItem;
extern float func_001E4E30(Drawable *);
extern void func_001DF030(Drawable *, UiVector *);
float func_009E3A80(LobbyItem *item) {
    UiVector pos;
    float depth;
    Drawable *drawable;
    if (!item)
        return 0;
    drawable = item->drawable;
    depth = func_001E4E30(drawable);
    func_001DF030(drawable, &pos);
    if (!(depth <= pos.values[2]))
        depth = pos.values[2];
    return depth;
}
