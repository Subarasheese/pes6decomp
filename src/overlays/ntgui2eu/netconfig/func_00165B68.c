/* compiler: ee-gcc-2.9-Os-G0 */
#include "types.h"

typedef struct QueryWidget QueryWidget;
typedef s32 (*WidgetQuery)(QueryWidget *);
typedef struct {
    u8 reserved00[0xd8];
    WidgetQuery query;
} QueryMethods;
struct QueryWidget {
    u8 reserved00[0x4c];
    const QueryMethods *methods;
};

s32 func_00165B68(QueryWidget *widget) {
    return widget->methods->query ? widget->methods->query(widget) : 0;
}
