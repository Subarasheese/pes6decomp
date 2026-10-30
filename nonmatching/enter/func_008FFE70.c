/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00153FA0(void *);                      /* extern */

void func_008FFE70(void *arg0) {
    void *temp_a0;
    void *temp_s0;
    void *temp_s1;
    void *temp_s2;
    void *temp_s3;
    void *temp_s4;
    void *temp_s5;
    void *temp_s6;
    void *temp_s7;

    if (arg0 != NULL) {
        temp_s6 = M2C_FIELD(arg0, void **, 8);
        if ((temp_s6 != NULL) && (temp_s6 != NULL)) {
            temp_s5 = M2C_FIELD(temp_s6, void **, 8);
            if ((temp_s5 != NULL) && (temp_s5 != NULL)) {
                temp_s4 = M2C_FIELD(temp_s5, void **, 8);
                if ((temp_s4 != NULL) && (temp_s4 != NULL)) {
                    temp_s3 = M2C_FIELD(temp_s4, void **, 8);
                    if ((temp_s3 != NULL) && (temp_s3 != NULL)) {
                        temp_s2 = M2C_FIELD(temp_s3, void **, 8);
                        if ((temp_s2 != NULL) && (temp_s2 != NULL)) {
                            temp_s1 = M2C_FIELD(temp_s2, void **, 8);
                            if ((temp_s1 != NULL) && (temp_s1 != NULL)) {
                                temp_s0 = M2C_FIELD(temp_s1, void **, 8);
                                if ((temp_s0 != NULL) && (temp_s0 != NULL)) {
                                    temp_s7 = M2C_FIELD(temp_s0, void **, 8);
                                    if ((temp_s7 != NULL) && (temp_s7 != NULL)) {
                                        temp_a0 = M2C_FIELD(temp_s7, void **, 8);
                                        if (temp_a0 != NULL) {
                                            func_008FFE70(temp_a0);
                                        }
                                        func_00153FA0(temp_s7);
                                    }
                                    func_00153FA0(temp_s0);
                                }
                                func_00153FA0(temp_s1);
                            }
                            func_00153FA0(temp_s2);
                        }
                        func_00153FA0(temp_s3);
                    }
                    func_00153FA0(temp_s4);
                }
                func_00153FA0(temp_s5);
            }
            func_00153FA0(temp_s6);
        }
        func_00153FA0(arg0);
    }
}
