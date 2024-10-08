#ifndef CONSTANTS_H
#define CONSTANTS_H

#include "string_color.h"

#define SIZE_OF_BUFFER 80

// Text constansts
static const char   WRONG_INPUT_MESSAGE[]   =  BOLD_YELLOW "Некорректный ввод. Попробуйте снова.\n"           RESET;
static const char   SOMETHING_WENT_WRONG[]  =  BOLD_RED    "Что-то пошло не так\n"                            RESET;
static const char   FEW_ARGUMENTS[]         =  BOLD_YELLOW "Требуется ввести 3 аргумента (смотреть --help)\n" RESET;
static const char   UNKNOWN_COMMAND[]       =  BOLD_YELLOW "Неизвестная команда\n"                            RESET;
static const char   FILE_OPENING_FAILED[]   =  BOLD_YELLOW "Ошибка открытия файла\n"                          RESET;
static const char   HELP_MESSAGE[]          =
    "Аргументы:\n"
    "   --help\t\t\tвыводит слова поддержки\n"
    "   --version\t\t\tвыводит версию\n"
    "   --user\t\t\tзапускает пользовательский интерфейс\n"
    "   --fast-solve [a] [b] [c]\tвведите в строку коэффициенты уравнения вида ax^2 + bx + c = 0\n"
;

typedef enum State
{
    State_WORKING           =  0,
    State_EQUATION_FAILED   =  1,
    State_INPUT_FAILED      =  2,
    State_TEST_FAIL         =  3,
    State_NO_INPUT          =  4,
    State_ASSERTION         =  5,
    State_EXIT_WITH_EOF     =  6,
    State_READ_FILE_ERROR   =  7,
    State_CLOSE_FILE_ERROR  =  8,
} State;

#endif // CONSTANTS_H
