#ifndef _SCRIPT_H_
#define _SCRIPT_H_

//#pragma comment(lib,"lua.lib")
extern "C"
{
	#include <lua.h>
	#include <lualib.h>
	#include <lauxlib.h>
}
//extern "C"
//{
	//#include "Include/lua.h"
	//#include "Include/lualib.h"
	//#include "Include/lauxlib.h"
//}

//#include <stdio.h>
//#include <iostream>
//#include <sstream>
//using namespace std;
class Script
{
private:
    lua_State *lua_state;
public:
    void Create();
    void Close();
    int DoFile(const char* ScriptFileName);
    template<class T>
    void RegisterConstant(T value, const char* constantname);
    void Array();
    template<class T>
    void RegisterConstantArray(T value, int index);
    void RegisterArray(const char* arrayname);
    int GetArgumentCount();
    template<class T>
    T GetArgument(int index);
    template<class T>
    void Return(T value);
};

#endif
