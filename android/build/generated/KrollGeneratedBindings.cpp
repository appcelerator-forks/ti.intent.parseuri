/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /Users/yomybaby/Documents/TiWorkspace/ti.intent.parseuri/android/build/generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/Users/yomybaby/Documents/TiWorkspace/ti.intent.parseuri/android/build/generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "ti.intent.parseuri.ExampleProxy.h"
#include "ti.intent.parseuri.TiIntentParseuriModule.h"


#line 14 "/Users/yomybaby/Documents/TiWorkspace/ti.intent.parseuri/android/build/generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 11, duplicates = 0 */

class TiIntentParseuriBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
TiIntentParseuriBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
TiIntentParseuriBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 31,
      MAX_WORD_LENGTH = 41,
      MIN_HASH_VALUE = 31,
      MAX_HASH_VALUE = 41
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 17 "/Users/yomybaby/Documents/TiWorkspace/ti.intent.parseuri/android/build/generated/KrollGeneratedBindings.gperf"
      {"ti.intent.parseuri.ExampleProxy",::ti::intent::parseuri::tiintentparseuri::ExampleProxy::bindProxy,::ti::intent::parseuri::tiintentparseuri::ExampleProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 16 "/Users/yomybaby/Documents/TiWorkspace/ti.intent.parseuri/android/build/generated/KrollGeneratedBindings.gperf"
      {"ti.intent.parseuri.TiIntentParseuriModule",::ti::intent::parseuri::TiIntentParseuriModule::bindProxy,::ti::intent::parseuri::TiIntentParseuriModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/Users/yomybaby/Documents/TiWorkspace/ti.intent.parseuri/android/build/generated/KrollGeneratedBindings.gperf"

