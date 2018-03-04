env = Environment(
  CXXFLAGS='-Werror -Wall -Wextra -Wformat-y2k -Wshadow -O2'.split(),
  SHLIBPREFIX='',
)

env.Alias(
  'install',
  [
    env.Install('/usr/local/bin', 'intervalbeep'),
    env.Install('/usr/local/lib/lua/5.3', env.LoadableModule('sleep.cpp')),
  ],
)
