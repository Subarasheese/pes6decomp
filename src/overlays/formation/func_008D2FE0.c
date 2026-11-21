/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct am_input_record_007cb240_param_1 am_input_record_007cb240_param_1;
struct am_input_record_007cb240_param_1 {
    unsigned char padding_0[16];
    int field_10;
    unsigned char padding_14[52];
    int field_48;
    int field_4c;
};

void func_008C5CF0(int argument_0, unsigned char argument_1);
unsigned int func_001F3D10(int argument_0, unsigned char argument_1);
void func_001D7D60(int argument_0, unsigned char argument_1);

void func_008D2FE0(int param_1, u8 param_2) {
    am_input_record_007cb240_param_1 *am_input_view_param_1 =
        (am_input_record_007cb240_param_1 *)param_1;
    if (param_1 != 0) {
        func_008C5CF0(param_1 + 0xb8, param_2);
        func_001D7D60(am_input_view_param_1->field_48, param_2);
        func_001D7D60(am_input_view_param_1->field_4c, param_2);
        func_001F3D10(am_input_view_param_1->field_10, param_2);
    }
}
