#include <string>
#include <vector>
#include <ctime>

enum Language { RUSSIAN, ARABIC };

class BrocaArea {
public:
    static Language determineLanguage(std::string input) {
        // Шуточная логика: если в вопросе есть "!", Вася переходит на арабский от волнения
        if (input.find('!') != std::string::npos) {
            return ARABIC;
        }
        return RUSSIAN;
    }
};