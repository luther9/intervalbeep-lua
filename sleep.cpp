#include <unistd.h>

#include <lua5.3/lauxlib.h>

#define entry(function) {#function, l_##function}

namespace {
  int
  l_sleep(lua_State *const L)
  {
    lua_pushinteger(L, sleep(luaL_checkinteger(L, 1)));
    return 1;
  }

  const struct luaL_Reg lib[] = {
    entry(sleep),
    {NULL, NULL}
  };
}

extern "C" {
  int
  luaopen_sleep(lua_State *const L)
  {
    luaL_newlib(L, lib);
    return 1;
  }
}
