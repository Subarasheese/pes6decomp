/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct am_input_record_00b0d000_param_1 am_input_record_00b0d000_param_1;
struct am_input_record_00b0d000_param_1 {
    unsigned char padding_0[12];
    u8 field_c;
    unsigned char padding_d[43];
    int field_38;
};

unsigned int func_001F3D10(int argument_0, unsigned char argument_1);

void func_002DB580(int param_1, u8 param_2) {
    am_input_record_00b0d000_param_1 *am_input_view_param_1 =
        (am_input_record_00b0d000_param_1 *)param_1;
    if (param_1 != 0) {
        func_001F3D10(am_input_view_param_1->field_38, param_2);
        if (param_2 == 1) {
            am_input_view_param_1->field_c = am_input_view_param_1->field_c | 0x10;
            return;
        }
        am_input_view_param_1->field_c = am_input_view_param_1->field_c & 0xef;
    }
}
