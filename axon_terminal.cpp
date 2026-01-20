#include <string>

std::string formatOutput(std::string code, ProgrammingLang lang) {
    std::string langNames[] = {"C++", "C", "Python", "Assembly", "Java", "Rust"};
    return "--- VASYA-1007 IDE ---\nLanguage: " + langNames[lang] + "\n" + code;
}