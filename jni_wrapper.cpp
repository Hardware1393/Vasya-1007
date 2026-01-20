#include <jni.h>
#include <string>
#include "OrganoidBrain.h"

// Подключаем наши модули (те самые 10-11 файлов)
#include "metabolism.cpp"
#include "broca_area.cpp"
#include "lexicon_ru.cpp"
#include "lexicon_ar.cpp"
#include "motor_cortex.cpp"
#include "synaptic_storage.cpp"
#include "neuro_compiler.cpp"
#include "dopamine_regulator.cpp"
#include "mitochondria_power.cpp"
#include "axon_terminal.cpp"

JNIEXPORT void JNICALL Java_OrganoidBrain_feedVasya(JNIEnv *env, jobject obj, jstring food) {
    const char *nativeFood = env->GetStringUTFChars(food, 0);
    processFood(std::string(nativeFood)); // из metabolism.cpp
    rewardVasya();                        // из dopamine_regulator.cpp
    env->ReleaseStringUTFChars(food, nativeFood);
}

JNIEXPORT jstring JNICALL Java_OrganoidBrain_askQuestion(JNIEnv *env, jobject obj, jstring question) {
    const char *nativeQ = env->GetStringUTFChars(question, 0);
    std::string qStr(nativeQ);

    Language lang = BrocaArea::determineLanguage(qStr); // из broca_area.cpp
    std::string response;

    if (lang == ARABIC) {
        response = getArabicResponse(qStr.length());
    } else {
        response = getRussianResponse(qStr.length());
    }

    env->ReleaseStringUTFChars(question, nativeQ);
    return env->NewStringUTF(response.c_str());
}

JNIEXPORT jstring JNICALL Java_OrganoidBrain_writeCode(JNIEnv *env, jobject obj, jint complexity) {
    if (isOverheated()) { // из mitochondria_power.cpp
        return env->NewStringUTF("Критическая ошибка: Органоид перегрет! Нужна глюкоза.");
    }

    if (!canWriteCode()) { // из dopamine_regulator.cpp
        return env->NewStringUTF("Вася в депрессии. Покормите его.");
    }

    ProgrammingLang lang = MotorCortex::selectLanguage(complexity);
    std::string code = snippets[lang];
    code = injectOrganicComments(code);
    std::string result = formatOutput(code, lang);

    return env->NewStringUTF(result.c_str());
}