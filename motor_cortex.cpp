enum ProgrammingLang { CPP, C, PYTHON, ASM, JAVA, RUST };

class MotorCortex {
public:
    static ProgrammingLang selectLanguage(int complexity) {
        if (complexity > 90) return ASM;   
        if (complexity > 70) return RUST; 
        if (complexity > 50) return CPP;
        if (complexity > 30) return JAVA;
        return PYTHON;                     
    }
};