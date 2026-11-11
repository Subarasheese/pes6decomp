/* compiler: mwcc-3.0.1b210 */
extern char Pes6OptionData_Sections[];
int Pes6OptionData_GetBase() {
    int v2;
    v2 = *( int *)(Pes6OptionData_Sections);
    return v2;
}
