#include "Script.h"
#include <iostream>


// Объект скрипта
Script script;

// Функция Write для текста
int Write(lua_State*)
{
    // Тут мы считываем количество аргументов и каждый аргумент выводим
    for(auto i = 1; i < script.GetArgumentCount() + 1; i++)
        std::cout << script.GetArgument<char*>(i);

    // После вывода ставим консоль на паузу
    std::cin.get();

    return 0;
}

int main()
{
    script.Create();
    // Имя у луашной функции такое же, как у сишной
    script.RegisterConstant<lua_CFunction>(Write, "Write");
    script.DoFile("script.lua");
    script.Close();
}
