/* compiler: mwcc-3.0.1b210 */
extern void *Pes6OptionData_Sections[];

void *Pes6OptionData_GetBase(void) {
    return Pes6OptionData_Sections[0];
}
