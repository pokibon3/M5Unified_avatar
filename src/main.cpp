#include <M5Unified.h>
#include <Avatar.h>

using namespace m5avatar;
Avatar avatar;

void setup(void) {
    auto cfg = M5.config();
    M5.begin(cfg);
    //avatar.setScale(0.3);
    avatar.setPosition(-20, 0);
    avatar.init();
}

void loop(void) {
   delay(100);
}
