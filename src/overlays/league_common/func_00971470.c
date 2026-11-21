/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 field_0;
    void *field_4;
    void *field_8;
    void *field_C;
    void *field_10;
} Fields_arg0;

extern void func_002E4570(void *);
extern void func_001D7F10(void *);
extern void func_001D6E40(void *);
s32 func_0096DA00(void *);

void func_00971470(Fields_arg0 *arg0) {
    void *entry;
    void *entry2;
    void *entry3;
    void *entry4;
    void *entry5;
    void *entry6;

    if (arg0 != NULL) {
        entry5 = arg0->field_C;
        if ((entry5 != NULL) && (arg0->field_4 != NULL)) {
            if (entry5 != NULL) {
                func_002E4570(M2C_FIELD(entry5, void **, 0));
                entry = M2C_FIELD(entry5, void **, 8);
                if (entry != NULL) {
                    func_001D6E40(entry);
                }
                func_0096DA00(entry5);
            }
            arg0->field_C = NULL;
        }
        entry6 = arg0->field_10;
        if ((entry6 != NULL) && (arg0->field_8 != NULL)) {
            if (entry6 != NULL) {
                func_002E4570(M2C_FIELD(entry6, void **, 0));
                entry2 = M2C_FIELD(entry6, void **, 8);
                if (entry2 != NULL) {
                    func_001D6E40(entry2);
                }
                func_0096DA00(entry6);
            }
            arg0->field_10 = NULL;
        }
        if (arg0->field_0 != 0) {
            entry3 = arg0->field_4;
            if (entry3 != NULL) {
                func_001D7F10(entry3);
            }
            entry4 = arg0->field_8;
            if (entry4 != NULL) {
                func_001D7F10(entry4);
            }
            arg0->field_4 = NULL;
            arg0->field_8 = NULL;
            arg0->field_0 = 0;
        }
        func_0096DA00(arg0);
    }
}
